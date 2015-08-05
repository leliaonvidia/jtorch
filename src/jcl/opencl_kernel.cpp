#include <iostream>
#include "jcl/opencl_kernel.h"
#include "jcl/opencl_program.h"
#include "jcl/jcl.h"
#include "jcl/opencl_context.h"
#define SAFE_DELETE(x) if (x != nullptr) { delete x; x = nullptr; }
#define SAFE_FREE(x) if (x != nullptr) { free(x); x = nullptr; }
#define SAFE_DELETE_ARR(x) if (x != nullptr) { delete[] x; x = nullptr; }

using std::string;
using std::runtime_error;

namespace jcl {

  OpenCLKernel::OpenCLKernel(const std::string& kernel_name, 
    OpenCLProgram* program) {
    kernel_name_ = kernel_name;
    program_ = program;  // Ownership is NOT transferred
    compileKernel();
  }

  OpenCLKernel::~OpenCLKernel() {
    // Nothing to do
  }

  void OpenCLKernel::compileKernel() {
    try {
      kernel_ = cl::Kernel(program_->program(), kernel_name_.c_str());
    } catch (cl::Error err) {
      std::cout << "cl::Kernel() failed: " 
                << OpenCLContext::GetCLErrorString(err) << std::endl;
      assert(false);
    }
  }

  void OpenCLKernel::setArg(const uint32_t index, const uint32_t size, 
    void* data) {
    try {
      kernel_.setArg(index, size, data);
    } catch (cl::Error err) {
      std::cout << "kernel_.setArgNull() failed: " 
                << OpenCLContext::GetCLErrorString(err) << std::endl;
      assert(false);
    }
  }

}  // namespace jcl
