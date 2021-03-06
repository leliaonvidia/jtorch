//
//  spatial_convolution_map.h
//
//  Created by Jonathan Tompson on 4/1/13.
//
//  Same as SpatialConvolution except that the output features aren't fully
//  connected to the input features (so we need to keep around a connection
//  table).
//
//  Multithreading is NOT all that efficient:  Threads are split up per output
//  feature.  This has not been implemented in OpenCL yet (since I no longer
//  use this stage).
//

#pragma once

#include <condition_variable>
#include <mutex>
#include <vector>

#include "jcl/math/int_types.h"
#include "jcl/threading/callback.h"
#include "jtorch/torch_stage.h"

#define JTIL_SPATIAL_CONVOLUTION_MAP_NTHREADS 4

namespace jcl {
namespace threading {
class ThreadPool;
}
}

namespace jtorch {

class SpatialConvolutionMap : public TorchStage {
 public:
  // Constructor / Destructor
  SpatialConvolutionMap(const uint32_t feats_in, const uint32_t feats_out,
                        const uint32_t fan_in, const uint32_t filt_height,
                        const uint32_t filt_width);
  ~SpatialConvolutionMap() override;

  inline std::vector<std::unique_ptr<float[]>>& weights() { return weights_; }
  inline std::unique_ptr<float[]>& biases() { return biases_; }
  inline std::vector<std::unique_ptr<int16_t[]>>& conn_table() {
    return conn_table_;
  }

  TorchStageType type() const override { return SPATIAL_CONVOLUTION_MAP_STAGE; }
  std::string name() const override { return "SpatialConvolutionMap"; }
  void forwardProp(std::shared_ptr<TorchData> input) override;

  static std::unique_ptr<TorchStage> loadFromFile(std::ifstream& file);

 protected:
  std::unique_ptr<float[]> input_cpu_;
  std::unique_ptr<float[]> output_cpu_;
  uint32_t filt_width_;
  uint32_t filt_height_;
  uint32_t feats_in_;
  uint32_t feats_out_;
  uint32_t fan_in_;

  std::vector<std::unique_ptr<float[]>> weights_;
  std::unique_ptr<float[]> biases_;
  // This is the same as conn_table_rev in Torch
  // For each output: [0] is input feature and [1]
  // is the weight matrix (filter) to use
  std::vector<std::unique_ptr<int16_t[]>> conn_table_;

  // Multithreading primatives and functions
  std::unique_ptr<jcl::threading::ThreadPool> tp_;
  float* cur_input_;  // Not owned here
  int32_t cur_input_width_;
  int32_t cur_input_height_;
  float* cur_output_;  // Not owned here
  int32_t threads_finished_;
  std::mutex thread_update_lock_;
  std::condition_variable not_finished_;
  std::vector<std::unique_ptr<jcl::threading::Callback<void>>> thread_cbs_;

  void forwardPropThread(const uint32_t outf);

  void init(std::shared_ptr<TorchData> input);

  // Non-copyable, non-assignable.
  SpatialConvolutionMap(const SpatialConvolutionMap&) = delete;
  SpatialConvolutionMap& operator=(const SpatialConvolutionMap&) = delete;
};

};  // namespace jtorch
