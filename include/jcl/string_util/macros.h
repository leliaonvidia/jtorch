//
//  macros.h
//

#pragma once

#ifdef _WIN32
#define INLINE __inline
#define FORCEINLINE __forceinline
#else
#define INLINE
#define FORCEINLINE
#endif

#define pp_repeat(count, macro, data) pp_repeat_i(count, macro, data)
#define pp_repeat_i(count, macro, data) pp_repeat_##count(macro, data)

#define pp_repeat_0(m, d)
#define pp_repeat_1(m, d) m(0, d)

#define pp_repeat_2(m, d) pp_repeat_1(m, d) m(1, d)
#define pp_repeat_3(m, d) pp_repeat_2(m, d) m(2, d)
#define pp_repeat_4(m, d) pp_repeat_3(m, d) m(3, d)
#define pp_repeat_5(m, d) pp_repeat_4(m, d) m(4, d)
#define pp_repeat_6(m, d) pp_repeat_5(m, d) m(5, d)
#define pp_repeat_7(m, d) pp_repeat_6(m, d) m(6, d)
#define pp_repeat_8(m, d) pp_repeat_7(m, d) m(7, d)
#define pp_repeat_9(m, d) pp_repeat_8(m, d) m(8, d)
#define pp_repeat_10(m, d) pp_repeat_9(m, d) m(9, d)

#define pp_repeat_11(m, d) pp_repeat_10(m, d) m(10, d)
#define pp_repeat_12(m, d) pp_repeat_11(m, d) m(11, d)
#define pp_repeat_13(m, d) pp_repeat_12(m, d) m(12, d)
#define pp_repeat_14(m, d) pp_repeat_13(m, d) m(13, d)
#define pp_repeat_15(m, d) pp_repeat_14(m, d) m(14, d)
#define pp_repeat_16(m, d) pp_repeat_15(m, d) m(15, d)
#define pp_repeat_17(m, d) pp_repeat_16(m, d) m(16, d)
#define pp_repeat_18(m, d) pp_repeat_17(m, d) m(17, d)
#define pp_repeat_19(m, d) pp_repeat_18(m, d) m(18, d)
#define pp_repeat_20(m, d) pp_repeat_19(m, d) m(19, d)

#define pp_repeat_21(m, d) pp_repeat_20(m, d) m(20, d)
#define pp_repeat_22(m, d) pp_repeat_21(m, d) m(21, d)
#define pp_repeat_23(m, d) pp_repeat_22(m, d) m(22, d)
#define pp_repeat_24(m, d) pp_repeat_23(m, d) m(23, d)
#define pp_repeat_25(m, d) pp_repeat_24(m, d) m(24, d)
#define pp_repeat_26(m, d) pp_repeat_25(m, d) m(25, d)
#define pp_repeat_27(m, d) pp_repeat_26(m, d) m(26, d)
#define pp_repeat_28(m, d) pp_repeat_27(m, d) m(27, d)
#define pp_repeat_29(m, d) pp_repeat_28(m, d) m(28, d)
#define pp_repeat_30(m, d) pp_repeat_29(m, d) m(29, d)

#define pp_repeat_31(m, d) pp_repeat_30(m, d) m(30, d)
#define pp_repeat_32(m, d) pp_repeat_31(m, d) m(31, d)
#define pp_repeat_33(m, d) pp_repeat_32(m, d) m(32, d)
#define pp_repeat_34(m, d) pp_repeat_33(m, d) m(33, d)
#define pp_repeat_35(m, d) pp_repeat_34(m, d) m(34, d)
#define pp_repeat_36(m, d) pp_repeat_35(m, d) m(35, d)
#define pp_repeat_37(m, d) pp_repeat_36(m, d) m(36, d)
#define pp_repeat_38(m, d) pp_repeat_37(m, d) m(37, d)
#define pp_repeat_39(m, d) pp_repeat_38(m, d) m(38, d)
#define pp_repeat_40(m, d) pp_repeat_39(m, d) m(39, d)

#define pp_repeat_41(m, d) pp_repeat_40(m, d) m(40, d)
#define pp_repeat_42(m, d) pp_repeat_41(m, d) m(41, d)
#define pp_repeat_43(m, d) pp_repeat_42(m, d) m(42, d)
#define pp_repeat_44(m, d) pp_repeat_43(m, d) m(43, d)
#define pp_repeat_45(m, d) pp_repeat_44(m, d) m(44, d)
#define pp_repeat_46(m, d) pp_repeat_45(m, d) m(45, d)
#define pp_repeat_47(m, d) pp_repeat_46(m, d) m(46, d)
#define pp_repeat_48(m, d) pp_repeat_47(m, d) m(47, d)
#define pp_repeat_49(m, d) pp_repeat_48(m, d) m(48, d)
#define pp_repeat_50(m, d) pp_repeat_49(m, d) m(49, d)

#define pp_repeat_51(m, d) pp_repeat_50(m, d) m(50, d)
#define pp_repeat_52(m, d) pp_repeat_51(m, d) m(51, d)
#define pp_repeat_53(m, d) pp_repeat_52(m, d) m(52, d)
#define pp_repeat_54(m, d) pp_repeat_53(m, d) m(53, d)
#define pp_repeat_55(m, d) pp_repeat_54(m, d) m(54, d)
#define pp_repeat_56(m, d) pp_repeat_55(m, d) m(55, d)
#define pp_repeat_57(m, d) pp_repeat_56(m, d) m(56, d)
#define pp_repeat_58(m, d) pp_repeat_57(m, d) m(57, d)
#define pp_repeat_59(m, d) pp_repeat_58(m, d) m(58, d)
#define pp_repeat_60(m, d) pp_repeat_59(m, d) m(59, d)

#define pp_repeat_61(m, d) pp_repeat_60(m, d) m(60, d)
#define pp_repeat_62(m, d) pp_repeat_61(m, d) m(61, d)
#define pp_repeat_63(m, d) pp_repeat_62(m, d) m(62, d)
#define pp_repeat_64(m, d) pp_repeat_63(m, d) m(63, d)
#define pp_repeat_65(m, d) pp_repeat_64(m, d) m(64, d)
#define pp_repeat_66(m, d) pp_repeat_65(m, d) m(65, d)
#define pp_repeat_67(m, d) pp_repeat_66(m, d) m(66, d)
#define pp_repeat_68(m, d) pp_repeat_67(m, d) m(67, d)
#define pp_repeat_69(m, d) pp_repeat_68(m, d) m(68, d)
#define pp_repeat_70(m, d) pp_repeat_69(m, d) m(69, d)

#define pp_repeat_71(m, d) pp_repeat_70(m, d) m(70, d)
#define pp_repeat_72(m, d) pp_repeat_71(m, d) m(71, d)
#define pp_repeat_73(m, d) pp_repeat_72(m, d) m(72, d)
#define pp_repeat_74(m, d) pp_repeat_73(m, d) m(73, d)
#define pp_repeat_75(m, d) pp_repeat_74(m, d) m(74, d)
#define pp_repeat_76(m, d) pp_repeat_75(m, d) m(75, d)
#define pp_repeat_77(m, d) pp_repeat_76(m, d) m(76, d)
#define pp_repeat_78(m, d) pp_repeat_77(m, d) m(77, d)
#define pp_repeat_79(m, d) pp_repeat_78(m, d) m(78, d)
#define pp_repeat_80(m, d) pp_repeat_79(m, d) m(79, d)

#define pp_repeat_81(m, d) pp_repeat_80(m, d) m(80, d)
#define pp_repeat_82(m, d) pp_repeat_81(m, d) m(81, d)
#define pp_repeat_83(m, d) pp_repeat_82(m, d) m(82, d)
#define pp_repeat_84(m, d) pp_repeat_83(m, d) m(83, d)
#define pp_repeat_85(m, d) pp_repeat_84(m, d) m(84, d)
#define pp_repeat_86(m, d) pp_repeat_85(m, d) m(85, d)
#define pp_repeat_87(m, d) pp_repeat_86(m, d) m(86, d)
#define pp_repeat_88(m, d) pp_repeat_87(m, d) m(87, d)
#define pp_repeat_89(m, d) pp_repeat_88(m, d) m(88, d)
#define pp_repeat_90(m, d) pp_repeat_89(m, d) m(89, d)

#define pp_repeat_91(m, d) pp_repeat_90(m, d) m(90, d)
#define pp_repeat_92(m, d) pp_repeat_91(m, d) m(91, d)
#define pp_repeat_93(m, d) pp_repeat_92(m, d) m(92, d)
#define pp_repeat_94(m, d) pp_repeat_93(m, d) m(93, d)
#define pp_repeat_95(m, d) pp_repeat_94(m, d) m(94, d)
#define pp_repeat_96(m, d) pp_repeat_95(m, d) m(95, d)
#define pp_repeat_97(m, d) pp_repeat_96(m, d) m(96, d)
#define pp_repeat_98(m, d) pp_repeat_97(m, d) m(97, d)
#define pp_repeat_99(m, d) pp_repeat_98(m, d) m(98, d)
#define pp_repeat_100(m, d) pp_repeat_99(m, d) m(99, d)

/////////////////////////////////////////////////////////////////////////
#define pp_repeat_101(m, d) pp_repeat_100(m, d) m(100, d)
#define pp_repeat_102(m, d) pp_repeat_101(m, d) m(101, d)
#define pp_repeat_103(m, d) pp_repeat_102(m, d) m(102, d)
#define pp_repeat_104(m, d) pp_repeat_103(m, d) m(103, d)
#define pp_repeat_105(m, d) pp_repeat_104(m, d) m(104, d)
#define pp_repeat_106(m, d) pp_repeat_105(m, d) m(105, d)
#define pp_repeat_107(m, d) pp_repeat_106(m, d) m(106, d)
#define pp_repeat_108(m, d) pp_repeat_107(m, d) m(107, d)
#define pp_repeat_109(m, d) pp_repeat_108(m, d) m(108, d)
#define pp_repeat_110(m, d) pp_repeat_109(m, d) m(109, d)

#define pp_repeat_111(m, d) pp_repeat_110(m, d) m(110, d)
#define pp_repeat_112(m, d) pp_repeat_111(m, d) m(111, d)
#define pp_repeat_113(m, d) pp_repeat_112(m, d) m(112, d)
#define pp_repeat_114(m, d) pp_repeat_113(m, d) m(113, d)
#define pp_repeat_115(m, d) pp_repeat_114(m, d) m(114, d)
#define pp_repeat_116(m, d) pp_repeat_115(m, d) m(115, d)
#define pp_repeat_117(m, d) pp_repeat_116(m, d) m(116, d)
#define pp_repeat_118(m, d) pp_repeat_117(m, d) m(117, d)
#define pp_repeat_119(m, d) pp_repeat_118(m, d) m(118, d)
#define pp_repeat_120(m, d) pp_repeat_119(m, d) m(119, d)

#define pp_repeat_121(m, d) pp_repeat_120(m, d) m(120, d)
#define pp_repeat_122(m, d) pp_repeat_121(m, d) m(121, d)
#define pp_repeat_123(m, d) pp_repeat_122(m, d) m(122, d)
#define pp_repeat_124(m, d) pp_repeat_123(m, d) m(123, d)
#define pp_repeat_125(m, d) pp_repeat_124(m, d) m(124, d)
#define pp_repeat_126(m, d) pp_repeat_125(m, d) m(125, d)
#define pp_repeat_127(m, d) pp_repeat_126(m, d) m(126, d)
#define pp_repeat_128(m, d) pp_repeat_127(m, d) m(127, d)
#define pp_repeat_129(m, d) pp_repeat_128(m, d) m(128, d)
#define pp_repeat_130(m, d) pp_repeat_129(m, d) m(129, d)

#define pp_repeat_131(m, d) pp_repeat_130(m, d) m(130, d)
#define pp_repeat_132(m, d) pp_repeat_131(m, d) m(131, d)
#define pp_repeat_133(m, d) pp_repeat_132(m, d) m(132, d)
#define pp_repeat_134(m, d) pp_repeat_133(m, d) m(133, d)
#define pp_repeat_135(m, d) pp_repeat_134(m, d) m(134, d)
#define pp_repeat_136(m, d) pp_repeat_135(m, d) m(135, d)
#define pp_repeat_137(m, d) pp_repeat_136(m, d) m(136, d)
#define pp_repeat_138(m, d) pp_repeat_137(m, d) m(137, d)
#define pp_repeat_139(m, d) pp_repeat_138(m, d) m(138, d)
#define pp_repeat_140(m, d) pp_repeat_139(m, d) m(139, d)

#define pp_repeat_141(m, d) pp_repeat_140(m, d) m(140, d)
#define pp_repeat_142(m, d) pp_repeat_141(m, d) m(141, d)
#define pp_repeat_143(m, d) pp_repeat_142(m, d) m(142, d)
#define pp_repeat_144(m, d) pp_repeat_143(m, d) m(143, d)
#define pp_repeat_145(m, d) pp_repeat_144(m, d) m(144, d)
#define pp_repeat_146(m, d) pp_repeat_145(m, d) m(145, d)
#define pp_repeat_147(m, d) pp_repeat_146(m, d) m(146, d)
#define pp_repeat_148(m, d) pp_repeat_147(m, d) m(147, d)
#define pp_repeat_149(m, d) pp_repeat_148(m, d) m(148, d)
#define pp_repeat_150(m, d) pp_repeat_149(m, d) m(149, d)

#define pp_repeat_151(m, d) pp_repeat_150(m, d) m(150, d)
#define pp_repeat_152(m, d) pp_repeat_151(m, d) m(151, d)
#define pp_repeat_153(m, d) pp_repeat_152(m, d) m(152, d)
#define pp_repeat_154(m, d) pp_repeat_153(m, d) m(153, d)
#define pp_repeat_155(m, d) pp_repeat_154(m, d) m(154, d)
#define pp_repeat_156(m, d) pp_repeat_155(m, d) m(155, d)
#define pp_repeat_157(m, d) pp_repeat_156(m, d) m(156, d)
#define pp_repeat_158(m, d) pp_repeat_157(m, d) m(157, d)
#define pp_repeat_159(m, d) pp_repeat_158(m, d) m(158, d)
#define pp_repeat_160(m, d) pp_repeat_159(m, d) m(159, d)

#define pp_repeat_161(m, d) pp_repeat_160(m, d) m(160, d)
#define pp_repeat_162(m, d) pp_repeat_161(m, d) m(161, d)
#define pp_repeat_163(m, d) pp_repeat_162(m, d) m(162, d)
#define pp_repeat_164(m, d) pp_repeat_163(m, d) m(163, d)
#define pp_repeat_165(m, d) pp_repeat_164(m, d) m(164, d)
#define pp_repeat_166(m, d) pp_repeat_165(m, d) m(165, d)
#define pp_repeat_167(m, d) pp_repeat_166(m, d) m(166, d)
#define pp_repeat_168(m, d) pp_repeat_167(m, d) m(167, d)
#define pp_repeat_169(m, d) pp_repeat_168(m, d) m(168, d)
#define pp_repeat_170(m, d) pp_repeat_169(m, d) m(169, d)

#define pp_repeat_171(m, d) pp_repeat_170(m, d) m(170, d)
#define pp_repeat_172(m, d) pp_repeat_171(m, d) m(171, d)
#define pp_repeat_173(m, d) pp_repeat_172(m, d) m(172, d)
#define pp_repeat_174(m, d) pp_repeat_173(m, d) m(173, d)
#define pp_repeat_175(m, d) pp_repeat_174(m, d) m(174, d)
#define pp_repeat_176(m, d) pp_repeat_175(m, d) m(175, d)
#define pp_repeat_177(m, d) pp_repeat_176(m, d) m(176, d)
#define pp_repeat_178(m, d) pp_repeat_177(m, d) m(177, d)
#define pp_repeat_179(m, d) pp_repeat_178(m, d) m(178, d)
#define pp_repeat_180(m, d) pp_repeat_179(m, d) m(179, d)

#define pp_repeat_181(m, d) pp_repeat_180(m, d) m(180, d)
#define pp_repeat_182(m, d) pp_repeat_181(m, d) m(181, d)
#define pp_repeat_183(m, d) pp_repeat_182(m, d) m(182, d)
#define pp_repeat_184(m, d) pp_repeat_183(m, d) m(183, d)
#define pp_repeat_185(m, d) pp_repeat_184(m, d) m(184, d)
#define pp_repeat_186(m, d) pp_repeat_185(m, d) m(185, d)
#define pp_repeat_187(m, d) pp_repeat_186(m, d) m(186, d)
#define pp_repeat_188(m, d) pp_repeat_187(m, d) m(187, d)
#define pp_repeat_189(m, d) pp_repeat_188(m, d) m(188, d)
#define pp_repeat_190(m, d) pp_repeat_189(m, d) m(189, d)

#define pp_repeat_191(m, d) pp_repeat_190(m, d) m(190, d)
#define pp_repeat_192(m, d) pp_repeat_191(m, d) m(191, d)
#define pp_repeat_193(m, d) pp_repeat_192(m, d) m(192, d)
#define pp_repeat_194(m, d) pp_repeat_193(m, d) m(193, d)
#define pp_repeat_195(m, d) pp_repeat_194(m, d) m(194, d)
#define pp_repeat_196(m, d) pp_repeat_195(m, d) m(195, d)
#define pp_repeat_197(m, d) pp_repeat_196(m, d) m(196, d)
#define pp_repeat_198(m, d) pp_repeat_197(m, d) m(197, d)
#define pp_repeat_199(m, d) pp_repeat_198(m, d) m(198, d)
#define pp_repeat_200(m, d) pp_repeat_199(m, d) m(199, d)

///////////////////////////////////////////////////////////////////
#define pp_repeat_201(m, d) pp_repeat_200(m, d) m(200, d)
#define pp_repeat_202(m, d) pp_repeat_201(m, d) m(201, d)
#define pp_repeat_203(m, d) pp_repeat_202(m, d) m(202, d)
#define pp_repeat_204(m, d) pp_repeat_203(m, d) m(203, d)
#define pp_repeat_205(m, d) pp_repeat_204(m, d) m(204, d)
#define pp_repeat_206(m, d) pp_repeat_205(m, d) m(205, d)
#define pp_repeat_207(m, d) pp_repeat_206(m, d) m(206, d)
#define pp_repeat_208(m, d) pp_repeat_207(m, d) m(207, d)
#define pp_repeat_209(m, d) pp_repeat_208(m, d) m(208, d)
#define pp_repeat_210(m, d) pp_repeat_209(m, d) m(209, d)

#define pp_repeat_211(m, d) pp_repeat_210(m, d) m(210, d)
#define pp_repeat_212(m, d) pp_repeat_211(m, d) m(211, d)
#define pp_repeat_213(m, d) pp_repeat_212(m, d) m(212, d)
#define pp_repeat_214(m, d) pp_repeat_213(m, d) m(213, d)
#define pp_repeat_215(m, d) pp_repeat_214(m, d) m(214, d)
#define pp_repeat_216(m, d) pp_repeat_215(m, d) m(215, d)
#define pp_repeat_217(m, d) pp_repeat_216(m, d) m(216, d)
#define pp_repeat_218(m, d) pp_repeat_217(m, d) m(217, d)
#define pp_repeat_219(m, d) pp_repeat_218(m, d) m(218, d)
#define pp_repeat_220(m, d) pp_repeat_219(m, d) m(219, d)

#define pp_repeat_221(m, d) pp_repeat_220(m, d) m(220, d)
#define pp_repeat_222(m, d) pp_repeat_221(m, d) m(221, d)
#define pp_repeat_223(m, d) pp_repeat_222(m, d) m(222, d)
#define pp_repeat_224(m, d) pp_repeat_223(m, d) m(223, d)
#define pp_repeat_225(m, d) pp_repeat_224(m, d) m(224, d)
#define pp_repeat_226(m, d) pp_repeat_225(m, d) m(225, d)
#define pp_repeat_227(m, d) pp_repeat_226(m, d) m(226, d)
#define pp_repeat_228(m, d) pp_repeat_227(m, d) m(227, d)
#define pp_repeat_229(m, d) pp_repeat_228(m, d) m(228, d)
#define pp_repeat_230(m, d) pp_repeat_229(m, d) m(229, d)

#define pp_repeat_231(m, d) pp_repeat_230(m, d) m(230, d)
#define pp_repeat_232(m, d) pp_repeat_231(m, d) m(231, d)
#define pp_repeat_233(m, d) pp_repeat_232(m, d) m(232, d)
#define pp_repeat_234(m, d) pp_repeat_233(m, d) m(233, d)
#define pp_repeat_235(m, d) pp_repeat_234(m, d) m(234, d)
#define pp_repeat_236(m, d) pp_repeat_235(m, d) m(235, d)
#define pp_repeat_237(m, d) pp_repeat_236(m, d) m(236, d)
#define pp_repeat_238(m, d) pp_repeat_237(m, d) m(237, d)
#define pp_repeat_239(m, d) pp_repeat_238(m, d) m(238, d)
#define pp_repeat_240(m, d) pp_repeat_239(m, d) m(239, d)

#define pp_repeat_241(m, d) pp_repeat_240(m, d) m(240, d)
#define pp_repeat_242(m, d) pp_repeat_241(m, d) m(241, d)
#define pp_repeat_243(m, d) pp_repeat_242(m, d) m(242, d)
#define pp_repeat_244(m, d) pp_repeat_243(m, d) m(243, d)
#define pp_repeat_245(m, d) pp_repeat_244(m, d) m(244, d)
#define pp_repeat_246(m, d) pp_repeat_245(m, d) m(245, d)
#define pp_repeat_247(m, d) pp_repeat_246(m, d) m(246, d)
#define pp_repeat_248(m, d) pp_repeat_247(m, d) m(247, d)
#define pp_repeat_249(m, d) pp_repeat_248(m, d) m(248, d)
#define pp_repeat_250(m, d) pp_repeat_249(m, d) m(249, d)

#define pp_repeat_251(m, d) pp_repeat_250(m, d) m(250, d)
#define pp_repeat_252(m, d) pp_repeat_251(m, d) m(251, d)
#define pp_repeat_253(m, d) pp_repeat_252(m, d) m(252, d)
#define pp_repeat_254(m, d) pp_repeat_253(m, d) m(253, d)
#define pp_repeat_255(m, d) pp_repeat_254(m, d) m(254, d)
#define pp_repeat_256(m, d) pp_repeat_255(m, d) m(255, d)
