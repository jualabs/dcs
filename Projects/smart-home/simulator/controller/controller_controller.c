/* --- Generated the 1/11/2018 at 10:8 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c controller_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "controller_controller.h"

void Controller_controller__controller_controller_controller_c_wash_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door, int controller_c2_tv,
  int controller_c2_lamp, int controller_c1_tv, int controller_c1_lamp,
  int controller_rad_c3, int controller_rad_c2, int controller_rad_c1,
  int controller_c_oven, int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_c_wash_out* _out) {
  
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_c_window) {
    sub_32 = false;
  } else {
    sub_32 = sub_17;
  };
  if (controller_push_window) {
    v_117 = sub_32;
    sub_31 = sub_16;
  } else {
    v_117 = sub_16;
    sub_31 = sub_32;
  };
  if (controller_ck_11_1) {
    sub_30 = v_117;
  } else {
    sub_30 = sub_31;
  };
  if (controller_wash_end) {
    sub_46 = sub_24;
  } else {
    sub_46 = false;
  };
  if (controller_v_337) {
    sub_45 = false;
  } else {
    sub_45 = sub_46;
  };
  sub_47 = (controller_wash_start&&false);
  if (controller_v_337) {
    v_112 = sub_47;
  } else {
    v_112 = sub_23;
  };
  if (controller_v_336) {
    v_113 = v_112;
  } else {
    v_113 = sub_23;
  };
  if (controller_v_338) {
    sub_44 = v_113;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_c_oven) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_20;
  };
  if (controller_wash_end) {
    v_110 = false;
  } else {
    v_110 = sub_24;
  };
  if (controller_v_337) {
    v_111 = v_110;
  } else {
    v_111 = sub_46;
  };
  if (controller_v_336) {
    sub_52 = v_111;
  } else {
    sub_52 = sub_23;
  };
  if (controller_v_338) {
    sub_51 = sub_23;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (controller_oven_temp_ok) {
    sub_49 = sub_22;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  if (controller_v_395) {
    sub_39 = sub_48;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_53 = sub_41;
  if (controller_v_394) {
    sub_37 = sub_53;
  } else {
    sub_37 = sub_38;
  };
  if (controller_v_395) {
    v_109 = sub_53;
    v_108 = sub_53;
  } else {
    v_109 = sub_19;
    v_108 = sub_40;
  };
  if (controller_oven_start) {
    sub_54 = v_108;
  } else {
    sub_54 = v_109;
  };
  if (controller_oven_cold) {
    v_107 = sub_50;
  } else {
    v_107 = sub_21;
  };
  if (controller_c_oven) {
    sub_56 = v_107;
  } else {
    sub_56 = sub_20;
  };
  if (controller_oven_finish) {
    v_106 = sub_23;
  } else {
    v_106 = sub_44;
  };
  if (controller_oven_temp_ok) {
    sub_58 = sub_22;
  } else {
    sub_58 = v_106;
  };
  sub_57 = sub_58;
  if (controller_v_395) {
    sub_55 = sub_57;
  } else {
    sub_55 = sub_56;
  };
  if (controller_v_394) {
    v_114 = sub_55;
  } else {
    v_114 = sub_54;
  };
  if (controller_v_393) {
    v_115 = v_114;
  } else {
    v_115 = sub_37;
  };
  if (controller_comfort_input) {
    sub_36 = sub_18;
  } else {
    sub_36 = v_115;
  };
  sub_35 = sub_36;
  if (controller_c_window) {
    sub_59 = false;
  } else {
    sub_59 = sub_36;
  };
  if (controller_push_window) {
    v_116 = sub_59;
    sub_34 = sub_35;
  } else {
    v_116 = sub_35;
    sub_34 = sub_59;
  };
  if (controller_ck_11_1) {
    sub_33 = v_116;
  } else {
    sub_33 = sub_34;
  };
  if (controller_eco_input) {
    sub_29 = sub_30;
  } else {
    sub_29 = sub_33;
  };
  if (controller_v_292) {
    sub_60 = sub_33;
  } else {
    sub_60 = sub_30;
  };
  if (controller_v_293) {
    sub_28 = sub_60;
  } else {
    sub_28 = sub_29;
  };
  if (controller_c_oven) {
    sub_70 = false;
  } else {
    sub_70 = sub_20;
  };
  if (controller_oven_temp_ok) {
    sub_72 = sub_50;
  } else {
    sub_72 = sub_43;
  };
  sub_71 = sub_72;
  if (controller_v_395) {
    sub_69 = sub_71;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  if (controller_v_394) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  if (controller_v_395) {
    v_102 = false;
    v_101 = false;
  } else {
    v_102 = sub_19;
    v_101 = sub_70;
  };
  if (controller_oven_start) {
    sub_73 = v_101;
  } else {
    sub_73 = v_102;
  };
  if (controller_oven_finish) {
    sub_77 = sub_23;
  } else {
    sub_77 = sub_51;
  };
  sub_76 = sub_77;
  if (controller_oven_cold) {
    v_100 = sub_42;
  } else {
    v_100 = sub_76;
  };
  if (controller_c_oven) {
    sub_75 = v_100;
  } else {
    sub_75 = sub_76;
  };
  if (controller_oven_finish) {
    v_99 = sub_23;
  } else {
    v_99 = false;
  };
  if (controller_oven_temp_ok) {
    sub_79 = sub_77;
  } else {
    sub_79 = v_99;
  };
  sub_78 = sub_79;
  if (controller_v_395) {
    sub_74 = sub_78;
  } else {
    sub_74 = sub_75;
  };
  if (controller_v_394) {
    v_103 = sub_74;
  } else {
    v_103 = sub_73;
  };
  if (controller_v_393) {
    v_104 = v_103;
  } else {
    v_104 = sub_67;
  };
  if (controller_comfort_input) {
    sub_66 = sub_18;
  } else {
    sub_66 = v_104;
  };
  sub_65 = sub_66;
  if (controller_c_window) {
    sub_80 = false;
  } else {
    sub_80 = sub_66;
  };
  if (controller_push_window) {
    v_105 = sub_80;
    sub_64 = sub_65;
  } else {
    v_105 = sub_65;
    sub_64 = sub_80;
  };
  if (controller_ck_11_1) {
    sub_63 = v_105;
  } else {
    sub_63 = sub_64;
  };
  if (controller_eco_input) {
    sub_62 = sub_30;
  } else {
    sub_62 = sub_63;
  };
  if (controller_v_292) {
    sub_81 = sub_63;
  } else {
    sub_81 = sub_30;
  };
  if (controller_v_293) {
    sub_61 = sub_81;
  } else {
    sub_61 = sub_62;
  };
  if (controller_rad_down1) {
    v_118 = sub_28;
  } else {
    v_118 = sub_61;
  };
  sub_82 = sub_28;
  if (controller_rad_c1) {
    sub_27 = v_118;
  } else {
    sub_27 = sub_82;
  };
  sub_26 = sub_27;
  if (controller_v_427) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_10;
  };
  if (controller_rad_c2) {
    v_119 = sub_25;
  } else {
    v_119 = sub_9;
  };
  if (controller_rad_down2) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_119;
  };
  if (controller_rad_down1) {
    sub_85 = sub_14;
  } else {
    sub_85 = sub_61;
  };
  if (controller_rad_c1) {
    v_95 = sub_82;
  } else {
    v_95 = sub_85;
  };
  if (controller_rad_up1) {
    v_96 = v_95;
  } else {
    v_96 = sub_85;
  };
  if (controller_rad_c1) {
    v_94 = sub_82;
  } else {
    v_94 = sub_13;
  };
  if (controller_rad_up1) {
    sub_86 = v_94;
  } else {
    sub_86 = sub_12;
  };
  if (controller_rad_c3) {
    sub_84 = v_96;
  } else {
    sub_84 = sub_86;
  };
  sub_89 = sub_61;
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_v_427) {
    v_97 = sub_87;
  } else {
    v_97 = sub_84;
  };
  sub_91 = sub_86;
  if (controller_rad_down1) {
    v_93 = sub_14;
  } else {
    v_93 = sub_28;
  };
  if (controller_rad_c1) {
    sub_93 = v_93;
  } else {
    sub_93 = sub_13;
  };
  sub_92 = sub_93;
  if (controller_v_427) {
    sub_90 = sub_92;
  } else {
    sub_90 = sub_91;
  };
  if (controller_rad_up2) {
    v_98 = v_97;
  } else {
    v_98 = sub_90;
  };
  if (controller_rad_c2) {
    sub_83 = v_98;
  } else {
    sub_83 = sub_90;
  };
  if (controller_v_426) {
    sub_6 = sub_83;
  } else {
    sub_6 = sub_7;
  };
  if (controller_ck_17_1) {
    v_120 = false;
    sub_5 = sub_6;
  } else {
    v_120 = sub_6;
    sub_5 = false;
  };
  if (controller_tv_switch) {
    v_121 = sub_5;
  } else {
    v_121 = v_120;
  };
  if (controller_c1_tv) {
    v_122 = v_121;
  } else {
    v_122 = false;
  };
  sub_94 = sub_6;
  if (controller_c1_tv) {
    v_123 = sub_94;
  } else {
    v_123 = sub_5;
  };
  if (controller_c2_tv) {
    sub_4 = v_122;
  } else {
    sub_4 = v_123;
  };
  sub_96 = sub_94;
  sub_95 = sub_96;
  if (controller_ck_15_1) {
    v_125 = sub_4;
  } else {
    v_125 = sub_95;
  };
  if (controller_c1_lamp) {
    v_126 = v_125;
  } else {
    v_126 = sub_4;
  };
  if (controller_ck_15_1) {
    sub_3 = sub_95;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c1_lamp) {
    v_124 = sub_3;
  } else {
    v_124 = sub_4;
  };
  if (controller_lamp_switch) {
    v_127 = v_124;
  } else {
    v_127 = v_126;
  };
  if (controller_c1_lamp) {
    sub_97 = sub_95;
  } else {
    sub_97 = sub_3;
  };
  if (controller_c2_lamp) {
    v_128 = v_127;
  } else {
    v_128 = sub_97;
  };
  sub_108 = sub_30;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_v_427) {
    sub_109 = false;
  } else {
    sub_109 = sub_104;
  };
  if (controller_rad_c2) {
    v_88 = sub_109;
  } else {
    v_88 = sub_103;
  };
  if (controller_rad_down2) {
    sub_102 = sub_103;
  } else {
    sub_102 = v_88;
  };
  if (controller_rad_down1) {
    sub_112 = sub_108;
  } else {
    sub_112 = false;
  };
  if (controller_rad_c1) {
    v_84 = false;
  } else {
    v_84 = sub_112;
  };
  if (controller_rad_up1) {
    v_85 = v_84;
  } else {
    v_85 = sub_112;
  };
  if (controller_rad_c1) {
    v_83 = false;
  } else {
    v_83 = sub_107;
  };
  if (controller_rad_up1) {
    sub_113 = v_83;
  } else {
    sub_113 = sub_106;
  };
  if (controller_rad_c3) {
    sub_111 = v_85;
  } else {
    sub_111 = sub_113;
  };
  if (controller_v_427) {
    v_86 = false;
  } else {
    v_86 = sub_111;
  };
  sub_115 = sub_113;
  if (controller_rad_c1) {
    sub_117 = sub_112;
  } else {
    sub_117 = sub_107;
  };
  sub_116 = sub_117;
  if (controller_v_427) {
    sub_114 = sub_116;
  } else {
    sub_114 = sub_115;
  };
  if (controller_rad_up2) {
    v_87 = v_86;
  } else {
    v_87 = sub_114;
  };
  if (controller_rad_c2) {
    sub_110 = v_87;
  } else {
    sub_110 = sub_114;
  };
  if (controller_v_426) {
    sub_101 = sub_110;
  } else {
    sub_101 = sub_102;
  };
  if (controller_ck_17_1) {
    v_89 = sub_101;
    sub_100 = false;
  } else {
    v_89 = false;
    sub_100 = sub_101;
  };
  if (controller_c1_tv) {
    v_92 = false;
  } else {
    v_92 = sub_100;
  };
  if (controller_tv_switch) {
    v_90 = sub_100;
  } else {
    v_90 = v_89;
  };
  if (controller_c1_tv) {
    v_91 = v_90;
  } else {
    v_91 = sub_101;
  };
  if (controller_c2_tv) {
    sub_99 = v_91;
  } else {
    sub_99 = v_92;
  };
  if (controller_ck_15_1) {
    v_130 = sub_99;
  } else {
    v_130 = false;
  };
  if (controller_c1_lamp) {
    v_131 = v_130;
  } else {
    v_131 = sub_99;
  };
  if (controller_ck_15_1) {
    sub_98 = false;
  } else {
    sub_98 = sub_99;
  };
  if (controller_c1_lamp) {
    v_129 = sub_98;
  } else {
    v_129 = sub_99;
  };
  if (controller_lamp_switch) {
    v_132 = v_129;
  } else {
    v_132 = v_131;
  };
  if (controller_c1_lamp) {
    sub_118 = false;
  } else {
    sub_118 = sub_98;
  };
  if (controller_c2_lamp) {
    v_133 = v_132;
  } else {
    v_133 = sub_118;
  };
  if (controller_room_presence) {
    sub_2 = v_128;
  } else {
    sub_2 = v_133;
  };
  if (controller_v_427) {
    sub_125 = false;
  } else {
    sub_125 = sub_10;
  };
  if (controller_rad_c2) {
    v_73 = sub_125;
  } else {
    v_73 = sub_9;
  };
  if (controller_rad_down2) {
    sub_124 = sub_8;
  } else {
    sub_124 = v_73;
  };
  if (controller_rad_down1) {
    sub_128 = sub_14;
  } else {
    sub_128 = false;
  };
  if (controller_rad_c1) {
    v_69 = false;
  } else {
    v_69 = sub_128;
  };
  if (controller_rad_up1) {
    v_70 = v_69;
  } else {
    v_70 = sub_128;
  };
  if (controller_rad_c1) {
    v_68 = false;
  } else {
    v_68 = sub_13;
  };
  if (controller_rad_up1) {
    sub_129 = v_68;
  } else {
    sub_129 = sub_12;
  };
  if (controller_rad_c3) {
    sub_127 = v_70;
  } else {
    sub_127 = sub_129;
  };
  if (controller_v_427) {
    v_71 = false;
  } else {
    v_71 = sub_127;
  };
  sub_131 = sub_129;
  if (controller_rad_c1) {
    sub_133 = sub_128;
  } else {
    sub_133 = sub_13;
  };
  sub_132 = sub_133;
  if (controller_v_427) {
    sub_130 = sub_132;
  } else {
    sub_130 = sub_131;
  };
  if (controller_rad_up2) {
    v_72 = v_71;
  } else {
    v_72 = sub_130;
  };
  if (controller_rad_c2) {
    sub_126 = v_72;
  } else {
    sub_126 = sub_130;
  };
  if (controller_v_426) {
    sub_123 = sub_126;
  } else {
    sub_123 = sub_124;
  };
  if (controller_ck_17_1) {
    v_74 = false;
    sub_122 = sub_123;
  } else {
    v_74 = sub_123;
    sub_122 = false;
  };
  if (controller_tv_switch) {
    v_75 = sub_122;
  } else {
    v_75 = v_74;
  };
  if (controller_c1_tv) {
    v_76 = v_75;
  } else {
    v_76 = false;
  };
  sub_134 = sub_123;
  if (controller_c1_tv) {
    v_77 = sub_134;
  } else {
    v_77 = sub_122;
  };
  if (controller_c2_tv) {
    sub_121 = v_76;
  } else {
    sub_121 = v_77;
  };
  sub_136 = sub_134;
  sub_135 = sub_136;
  if (controller_ck_15_1) {
    v_79 = sub_121;
  } else {
    v_79 = sub_135;
  };
  if (controller_c1_lamp) {
    v_80 = v_79;
  } else {
    v_80 = sub_121;
  };
  if (controller_ck_15_1) {
    sub_120 = sub_135;
  } else {
    sub_120 = sub_121;
  };
  if (controller_c1_lamp) {
    v_78 = sub_120;
  } else {
    v_78 = sub_121;
  };
  if (controller_lamp_switch) {
    v_81 = v_78;
  } else {
    v_81 = v_80;
  };
  if (controller_c1_lamp) {
    sub_137 = sub_135;
  } else {
    sub_137 = sub_120;
  };
  if (controller_c2_lamp) {
    v_82 = v_81;
  } else {
    v_82 = sub_137;
  };
  if (controller_room_presence) {
    sub_119 = v_82;
  } else {
    sub_119 = false;
  };
  if (controller_ck_9_1) {
    v_135 = sub_2;
    v_134 = sub_119;
  } else {
    v_135 = sub_119;
    v_134 = sub_2;
  };
  if (controller_push_door) {
    v_136 = v_134;
  } else {
    v_136 = v_135;
  };
  if (controller_c_door) {
    sub_1 = v_136;
  } else {
    sub_1 = sub_2;
  };
  sub_160 = true;
  sub_159 = sub_160;
  sub_158 = sub_159;
  sub_157 = sub_158;
  sub_156 = sub_157;
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  sub_152 = sub_153;
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  sub_144 = sub_145;
  if (controller_c_window) {
    sub_168 = false;
  } else {
    sub_168 = sub_153;
  };
  if (controller_push_window) {
    v_51 = sub_168;
    sub_167 = sub_152;
  } else {
    v_51 = sub_152;
    sub_167 = sub_168;
  };
  if (controller_ck_11_1) {
    sub_166 = v_51;
  } else {
    sub_166 = sub_167;
  };
  if (controller_wash_end) {
    sub_182 = sub_160;
  } else {
    sub_182 = false;
  };
  if (controller_v_337) {
    v_45 = false;
  } else {
    v_45 = sub_182;
  };
  if (controller_v_336) {
    sub_181 = v_45;
  } else {
    sub_181 = sub_45;
  };
  if (controller_v_337) {
    sub_183 = sub_23;
  } else {
    sub_183 = sub_159;
  };
  v_44 = !(controller_wash_start);
  sub_184 = (v_44||false);
  if (controller_v_337) {
    v_46 = sub_184;
  } else {
    v_46 = sub_159;
  };
  if (controller_v_336) {
    v_47 = v_46;
  } else {
    v_47 = sub_183;
  };
  if (controller_v_338) {
    sub_180 = v_47;
  } else {
    sub_180 = sub_181;
  };
  sub_179 = sub_180;
  sub_178 = sub_179;
  sub_177 = sub_178;
  if (controller_c_oven) {
    sub_176 = sub_177;
  } else {
    sub_176 = sub_156;
  };
  if (controller_wash_end) {
    v_42 = false;
  } else {
    v_42 = sub_160;
  };
  if (controller_v_337) {
    v_43 = v_42;
  } else {
    v_43 = sub_182;
  };
  if (controller_v_336) {
    sub_189 = v_43;
  } else {
    sub_189 = sub_159;
  };
  if (controller_v_338) {
    sub_188 = sub_159;
  } else {
    sub_188 = sub_189;
  };
  sub_187 = sub_188;
  if (controller_oven_temp_ok) {
    sub_186 = sub_158;
  } else {
    sub_186 = sub_187;
  };
  sub_185 = sub_186;
  if (controller_v_395) {
    sub_175 = sub_185;
  } else {
    sub_175 = sub_176;
  };
  sub_174 = sub_175;
  sub_190 = sub_177;
  if (controller_v_394) {
    sub_173 = sub_190;
  } else {
    sub_173 = sub_174;
  };
  if (controller_v_395) {
    v_41 = sub_190;
    v_40 = sub_190;
  } else {
    v_41 = sub_155;
    v_40 = sub_176;
  };
  if (controller_oven_start) {
    sub_191 = v_40;
  } else {
    sub_191 = v_41;
  };
  if (controller_oven_cold) {
    v_39 = sub_187;
  } else {
    v_39 = sub_157;
  };
  if (controller_c_oven) {
    sub_193 = v_39;
  } else {
    sub_193 = sub_156;
  };
  if (controller_oven_finish) {
    v_38 = sub_159;
  } else {
    v_38 = sub_180;
  };
  if (controller_oven_temp_ok) {
    sub_195 = sub_158;
  } else {
    sub_195 = v_38;
  };
  sub_194 = sub_195;
  if (controller_v_395) {
    sub_192 = sub_194;
  } else {
    sub_192 = sub_193;
  };
  if (controller_v_394) {
    v_48 = sub_192;
  } else {
    v_48 = sub_191;
  };
  if (controller_v_393) {
    v_49 = v_48;
  } else {
    v_49 = sub_173;
  };
  if (controller_comfort_input) {
    sub_172 = sub_154;
  } else {
    sub_172 = v_49;
  };
  sub_171 = sub_172;
  if (controller_c_window) {
    sub_196 = false;
  } else {
    sub_196 = sub_172;
  };
  if (controller_push_window) {
    v_50 = sub_196;
    sub_170 = sub_171;
  } else {
    v_50 = sub_171;
    sub_170 = sub_196;
  };
  if (controller_ck_11_1) {
    sub_169 = v_50;
  } else {
    sub_169 = sub_170;
  };
  if (controller_eco_input) {
    sub_165 = sub_166;
  } else {
    sub_165 = sub_169;
  };
  if (controller_v_292) {
    sub_197 = sub_169;
  } else {
    sub_197 = sub_166;
  };
  if (controller_v_293) {
    sub_164 = sub_197;
  } else {
    sub_164 = sub_165;
  };
  if (controller_c_oven) {
    sub_207 = false;
  } else {
    sub_207 = sub_156;
  };
  if (controller_oven_temp_ok) {
    sub_209 = sub_187;
  } else {
    sub_209 = sub_179;
  };
  sub_208 = sub_209;
  if (controller_v_395) {
    sub_206 = sub_208;
  } else {
    sub_206 = sub_207;
  };
  sub_205 = sub_206;
  if (controller_v_394) {
    sub_204 = false;
  } else {
    sub_204 = sub_205;
  };
  if (controller_v_395) {
    v_34 = false;
    v_33 = false;
  } else {
    v_34 = sub_155;
    v_33 = sub_207;
  };
  if (controller_oven_start) {
    sub_210 = v_33;
  } else {
    sub_210 = v_34;
  };
  if (controller_oven_finish) {
    sub_214 = sub_159;
  } else {
    sub_214 = sub_188;
  };
  sub_213 = sub_214;
  if (controller_oven_cold) {
    v_32 = sub_178;
  } else {
    v_32 = sub_213;
  };
  if (controller_c_oven) {
    sub_212 = v_32;
  } else {
    sub_212 = sub_213;
  };
  if (controller_oven_finish) {
    v_31 = sub_159;
  } else {
    v_31 = false;
  };
  if (controller_oven_temp_ok) {
    sub_216 = sub_214;
  } else {
    sub_216 = v_31;
  };
  sub_215 = sub_216;
  if (controller_v_395) {
    sub_211 = sub_215;
  } else {
    sub_211 = sub_212;
  };
  if (controller_v_394) {
    v_35 = sub_211;
  } else {
    v_35 = sub_210;
  };
  if (controller_v_393) {
    v_36 = v_35;
  } else {
    v_36 = sub_204;
  };
  if (controller_comfort_input) {
    sub_203 = sub_154;
  } else {
    sub_203 = v_36;
  };
  sub_202 = sub_203;
  if (controller_c_window) {
    sub_217 = false;
  } else {
    sub_217 = sub_203;
  };
  if (controller_push_window) {
    v_37 = sub_217;
    sub_201 = sub_202;
  } else {
    v_37 = sub_202;
    sub_201 = sub_217;
  };
  if (controller_ck_11_1) {
    sub_200 = v_37;
  } else {
    sub_200 = sub_201;
  };
  if (controller_eco_input) {
    sub_199 = sub_166;
  } else {
    sub_199 = sub_200;
  };
  if (controller_v_292) {
    sub_218 = sub_200;
  } else {
    sub_218 = sub_166;
  };
  if (controller_v_293) {
    sub_198 = sub_218;
  } else {
    sub_198 = sub_199;
  };
  if (controller_rad_down1) {
    v_52 = sub_164;
  } else {
    v_52 = sub_198;
  };
  sub_219 = sub_164;
  if (controller_rad_c1) {
    sub_163 = v_52;
  } else {
    sub_163 = sub_219;
  };
  sub_162 = sub_163;
  if (controller_v_427) {
    sub_161 = sub_162;
  } else {
    sub_161 = sub_146;
  };
  if (controller_rad_c2) {
    v_53 = sub_161;
  } else {
    v_53 = sub_145;
  };
  if (controller_rad_down2) {
    sub_143 = sub_144;
  } else {
    sub_143 = v_53;
  };
  if (controller_rad_down1) {
    sub_222 = sub_150;
  } else {
    sub_222 = sub_198;
  };
  if (controller_rad_c1) {
    v_27 = sub_219;
  } else {
    v_27 = sub_222;
  };
  if (controller_rad_up1) {
    v_28 = v_27;
  } else {
    v_28 = sub_222;
  };
  if (controller_rad_c1) {
    v_26 = sub_219;
  } else {
    v_26 = sub_149;
  };
  if (controller_rad_up1) {
    sub_223 = v_26;
  } else {
    sub_223 = sub_148;
  };
  if (controller_rad_c3) {
    sub_221 = v_28;
  } else {
    sub_221 = sub_223;
  };
  sub_226 = sub_198;
  sub_225 = sub_226;
  sub_224 = sub_225;
  if (controller_v_427) {
    v_29 = sub_224;
  } else {
    v_29 = sub_221;
  };
  sub_228 = sub_223;
  if (controller_rad_down1) {
    v_25 = sub_150;
  } else {
    v_25 = sub_164;
  };
  if (controller_rad_c1) {
    sub_230 = v_25;
  } else {
    sub_230 = sub_149;
  };
  sub_229 = sub_230;
  if (controller_v_427) {
    sub_227 = sub_229;
  } else {
    sub_227 = sub_228;
  };
  if (controller_rad_up2) {
    v_30 = v_29;
  } else {
    v_30 = sub_227;
  };
  if (controller_rad_c2) {
    sub_220 = v_30;
  } else {
    sub_220 = sub_227;
  };
  if (controller_v_426) {
    sub_142 = sub_220;
  } else {
    sub_142 = sub_143;
  };
  if (controller_ck_17_1) {
    v_54 = false;
    sub_141 = sub_142;
  } else {
    v_54 = sub_142;
    sub_141 = false;
  };
  if (controller_tv_switch) {
    v_55 = sub_141;
  } else {
    v_55 = v_54;
  };
  if (controller_c1_tv) {
    v_56 = v_55;
  } else {
    v_56 = false;
  };
  sub_231 = sub_142;
  if (controller_c1_tv) {
    v_57 = sub_231;
  } else {
    v_57 = sub_141;
  };
  if (controller_c2_tv) {
    sub_140 = v_56;
  } else {
    sub_140 = v_57;
  };
  sub_233 = sub_231;
  sub_232 = sub_233;
  if (controller_ck_15_1) {
    v_59 = sub_140;
  } else {
    v_59 = sub_232;
  };
  if (controller_c1_lamp) {
    v_60 = v_59;
  } else {
    v_60 = sub_140;
  };
  if (controller_ck_15_1) {
    sub_139 = sub_232;
  } else {
    sub_139 = sub_140;
  };
  if (controller_c1_lamp) {
    v_58 = sub_139;
  } else {
    v_58 = sub_140;
  };
  if (controller_lamp_switch) {
    v_61 = v_58;
  } else {
    v_61 = v_60;
  };
  if (controller_c1_lamp) {
    sub_234 = sub_232;
  } else {
    sub_234 = sub_139;
  };
  if (controller_c2_lamp) {
    v_62 = v_61;
  } else {
    v_62 = sub_234;
  };
  sub_245 = sub_166;
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_242 = sub_243;
  sub_241 = sub_242;
  sub_240 = sub_241;
  if (controller_v_427) {
    sub_246 = false;
  } else {
    sub_246 = sub_241;
  };
  if (controller_rad_c2) {
    v_20 = sub_246;
  } else {
    v_20 = sub_240;
  };
  if (controller_rad_down2) {
    sub_239 = sub_240;
  } else {
    sub_239 = v_20;
  };
  if (controller_rad_down1) {
    sub_249 = sub_245;
  } else {
    sub_249 = false;
  };
  if (controller_rad_c1) {
    v_16 = false;
  } else {
    v_16 = sub_249;
  };
  if (controller_rad_up1) {
    v_17 = v_16;
  } else {
    v_17 = sub_249;
  };
  if (controller_rad_c1) {
    v_15 = false;
  } else {
    v_15 = sub_244;
  };
  if (controller_rad_up1) {
    sub_250 = v_15;
  } else {
    sub_250 = sub_243;
  };
  if (controller_rad_c3) {
    sub_248 = v_17;
  } else {
    sub_248 = sub_250;
  };
  if (controller_v_427) {
    v_18 = false;
  } else {
    v_18 = sub_248;
  };
  sub_252 = sub_250;
  if (controller_rad_c1) {
    sub_254 = sub_249;
  } else {
    sub_254 = sub_244;
  };
  sub_253 = sub_254;
  if (controller_v_427) {
    sub_251 = sub_253;
  } else {
    sub_251 = sub_252;
  };
  if (controller_rad_up2) {
    v_19 = v_18;
  } else {
    v_19 = sub_251;
  };
  if (controller_rad_c2) {
    sub_247 = v_19;
  } else {
    sub_247 = sub_251;
  };
  if (controller_v_426) {
    sub_238 = sub_247;
  } else {
    sub_238 = sub_239;
  };
  if (controller_ck_17_1) {
    v_21 = sub_238;
    sub_237 = false;
  } else {
    v_21 = false;
    sub_237 = sub_238;
  };
  if (controller_c1_tv) {
    v_24 = false;
  } else {
    v_24 = sub_237;
  };
  if (controller_tv_switch) {
    v_22 = sub_237;
  } else {
    v_22 = v_21;
  };
  if (controller_c1_tv) {
    v_23 = v_22;
  } else {
    v_23 = sub_238;
  };
  if (controller_c2_tv) {
    sub_236 = v_23;
  } else {
    sub_236 = v_24;
  };
  if (controller_ck_15_1) {
    v_64 = sub_236;
  } else {
    v_64 = false;
  };
  if (controller_c1_lamp) {
    v_65 = v_64;
  } else {
    v_65 = sub_236;
  };
  if (controller_ck_15_1) {
    sub_235 = false;
  } else {
    sub_235 = sub_236;
  };
  if (controller_c1_lamp) {
    v_63 = sub_235;
  } else {
    v_63 = sub_236;
  };
  if (controller_lamp_switch) {
    v_66 = v_63;
  } else {
    v_66 = v_65;
  };
  if (controller_c1_lamp) {
    sub_255 = false;
  } else {
    sub_255 = sub_235;
  };
  if (controller_c2_lamp) {
    v_67 = v_66;
  } else {
    v_67 = sub_255;
  };
  if (controller_room_presence) {
    sub_138 = v_62;
  } else {
    sub_138 = v_67;
  };
  if (controller_v_427) {
    sub_262 = false;
  } else {
    sub_262 = sub_146;
  };
  if (controller_rad_c2) {
    v_5 = sub_262;
  } else {
    v_5 = sub_145;
  };
  if (controller_rad_down2) {
    sub_261 = sub_144;
  } else {
    sub_261 = v_5;
  };
  if (controller_rad_down1) {
    sub_265 = sub_150;
  } else {
    sub_265 = false;
  };
  if (controller_rad_c1) {
    v_1 = false;
  } else {
    v_1 = sub_265;
  };
  if (controller_rad_up1) {
    v_2 = v_1;
  } else {
    v_2 = sub_265;
  };
  if (controller_rad_c1) {
    v = false;
  } else {
    v = sub_149;
  };
  if (controller_rad_up1) {
    sub_266 = v;
  } else {
    sub_266 = sub_148;
  };
  if (controller_rad_c3) {
    sub_264 = v_2;
  } else {
    sub_264 = sub_266;
  };
  if (controller_v_427) {
    v_3 = false;
  } else {
    v_3 = sub_264;
  };
  sub_268 = sub_266;
  if (controller_rad_c1) {
    sub_270 = sub_265;
  } else {
    sub_270 = sub_149;
  };
  sub_269 = sub_270;
  if (controller_v_427) {
    sub_267 = sub_269;
  } else {
    sub_267 = sub_268;
  };
  if (controller_rad_up2) {
    v_4 = v_3;
  } else {
    v_4 = sub_267;
  };
  if (controller_rad_c2) {
    sub_263 = v_4;
  } else {
    sub_263 = sub_267;
  };
  if (controller_v_426) {
    sub_260 = sub_263;
  } else {
    sub_260 = sub_261;
  };
  if (controller_ck_17_1) {
    v_6 = false;
    sub_259 = sub_260;
  } else {
    v_6 = sub_260;
    sub_259 = false;
  };
  if (controller_tv_switch) {
    v_7 = sub_259;
  } else {
    v_7 = v_6;
  };
  if (controller_c1_tv) {
    v_8 = v_7;
  } else {
    v_8 = false;
  };
  sub_271 = sub_260;
  if (controller_c1_tv) {
    v_9 = sub_271;
  } else {
    v_9 = sub_259;
  };
  if (controller_c2_tv) {
    sub_258 = v_8;
  } else {
    sub_258 = v_9;
  };
  sub_273 = sub_271;
  sub_272 = sub_273;
  if (controller_ck_15_1) {
    v_11 = sub_258;
  } else {
    v_11 = sub_272;
  };
  if (controller_c1_lamp) {
    v_12 = v_11;
  } else {
    v_12 = sub_258;
  };
  if (controller_ck_15_1) {
    sub_257 = sub_272;
  } else {
    sub_257 = sub_258;
  };
  if (controller_c1_lamp) {
    v_10 = sub_257;
  } else {
    v_10 = sub_258;
  };
  if (controller_lamp_switch) {
    v_13 = v_10;
  } else {
    v_13 = v_12;
  };
  if (controller_c1_lamp) {
    sub_274 = sub_272;
  } else {
    sub_274 = sub_257;
  };
  if (controller_c2_lamp) {
    v_14 = v_13;
  } else {
    v_14 = sub_274;
  };
  if (controller_room_presence) {
    sub_256 = v_14;
  } else {
    sub_256 = false;
  };
  if (controller_ck_9_1) {
    v_138 = sub_138;
    v_137 = sub_256;
  } else {
    v_138 = sub_256;
    v_137 = sub_138;
  };
  if (controller_push_door) {
    v_139 = v_137;
  } else {
    v_139 = v_138;
  };
  if (controller_c_door) {
    v_140 = v_139;
  } else {
    v_140 = sub_138;
  };
  if (p_controller_c_wash) {
    sub_0 = v_140;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_wash = sub_0;;
}

void Controller_controller__controller_controller_controller_c2_tv_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door, int controller_c2_lamp,
  int controller_c1_tv, int controller_c1_lamp, int controller_rad_c3,
  int controller_rad_c2, int controller_rad_c1, int controller_c_oven,
  int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_c2_tv_out* _out) {
  
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_c_window) {
    sub_32 = false;
  } else {
    sub_32 = sub_17;
  };
  if (controller_push_window) {
    v_244 = sub_32;
    sub_31 = sub_16;
  } else {
    v_244 = sub_16;
    sub_31 = sub_32;
  };
  if (controller_ck_11_1) {
    sub_30 = v_244;
  } else {
    sub_30 = sub_31;
  };
  if (controller_wash_end) {
    sub_46 = sub_24;
  } else {
    sub_46 = false;
  };
  if (controller_v_337) {
    sub_45 = false;
  } else {
    sub_45 = sub_46;
  };
  sub_47 = (controller_wash_start&&false);
  if (controller_v_337) {
    v_239 = sub_47;
  } else {
    v_239 = sub_23;
  };
  if (controller_v_336) {
    v_240 = v_239;
  } else {
    v_240 = sub_23;
  };
  if (controller_v_338) {
    sub_44 = v_240;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_c_oven) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_20;
  };
  if (controller_wash_end) {
    v_237 = false;
  } else {
    v_237 = sub_24;
  };
  if (controller_v_337) {
    v_238 = v_237;
  } else {
    v_238 = sub_46;
  };
  if (controller_v_336) {
    sub_52 = v_238;
  } else {
    sub_52 = sub_23;
  };
  if (controller_v_338) {
    sub_51 = sub_23;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (controller_oven_temp_ok) {
    sub_49 = sub_22;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  if (controller_v_395) {
    sub_39 = sub_48;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_53 = sub_41;
  if (controller_v_394) {
    sub_37 = sub_53;
  } else {
    sub_37 = sub_38;
  };
  if (controller_v_395) {
    v_236 = sub_53;
    v_235 = sub_53;
  } else {
    v_236 = sub_19;
    v_235 = sub_40;
  };
  if (controller_oven_start) {
    sub_54 = v_235;
  } else {
    sub_54 = v_236;
  };
  if (controller_oven_cold) {
    v_234 = sub_50;
  } else {
    v_234 = sub_21;
  };
  if (controller_c_oven) {
    sub_56 = v_234;
  } else {
    sub_56 = sub_20;
  };
  if (controller_oven_finish) {
    v_233 = sub_23;
  } else {
    v_233 = sub_44;
  };
  if (controller_oven_temp_ok) {
    sub_58 = sub_22;
  } else {
    sub_58 = v_233;
  };
  sub_57 = sub_58;
  if (controller_v_395) {
    sub_55 = sub_57;
  } else {
    sub_55 = sub_56;
  };
  if (controller_v_394) {
    v_241 = sub_55;
  } else {
    v_241 = sub_54;
  };
  if (controller_v_393) {
    v_242 = v_241;
  } else {
    v_242 = sub_37;
  };
  if (controller_comfort_input) {
    sub_36 = sub_18;
  } else {
    sub_36 = v_242;
  };
  sub_35 = sub_36;
  if (controller_c_window) {
    sub_59 = false;
  } else {
    sub_59 = sub_36;
  };
  if (controller_push_window) {
    v_243 = sub_59;
    sub_34 = sub_35;
  } else {
    v_243 = sub_35;
    sub_34 = sub_59;
  };
  if (controller_ck_11_1) {
    sub_33 = v_243;
  } else {
    sub_33 = sub_34;
  };
  if (controller_eco_input) {
    sub_29 = sub_30;
  } else {
    sub_29 = sub_33;
  };
  if (controller_v_292) {
    sub_60 = sub_33;
  } else {
    sub_60 = sub_30;
  };
  if (controller_v_293) {
    sub_28 = sub_60;
  } else {
    sub_28 = sub_29;
  };
  if (controller_c_oven) {
    sub_70 = false;
  } else {
    sub_70 = sub_20;
  };
  if (controller_oven_temp_ok) {
    sub_72 = sub_50;
  } else {
    sub_72 = sub_43;
  };
  sub_71 = sub_72;
  if (controller_v_395) {
    sub_69 = sub_71;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  if (controller_v_394) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  if (controller_v_395) {
    v_229 = false;
    v_228 = false;
  } else {
    v_229 = sub_19;
    v_228 = sub_70;
  };
  if (controller_oven_start) {
    sub_73 = v_228;
  } else {
    sub_73 = v_229;
  };
  if (controller_oven_finish) {
    sub_77 = sub_23;
  } else {
    sub_77 = sub_51;
  };
  sub_76 = sub_77;
  if (controller_oven_cold) {
    v_227 = sub_42;
  } else {
    v_227 = sub_76;
  };
  if (controller_c_oven) {
    sub_75 = v_227;
  } else {
    sub_75 = sub_76;
  };
  if (controller_oven_finish) {
    v_226 = sub_23;
  } else {
    v_226 = false;
  };
  if (controller_oven_temp_ok) {
    sub_79 = sub_77;
  } else {
    sub_79 = v_226;
  };
  sub_78 = sub_79;
  if (controller_v_395) {
    sub_74 = sub_78;
  } else {
    sub_74 = sub_75;
  };
  if (controller_v_394) {
    v_230 = sub_74;
  } else {
    v_230 = sub_73;
  };
  if (controller_v_393) {
    v_231 = v_230;
  } else {
    v_231 = sub_67;
  };
  if (controller_comfort_input) {
    sub_66 = sub_18;
  } else {
    sub_66 = v_231;
  };
  sub_65 = sub_66;
  if (controller_c_window) {
    sub_80 = false;
  } else {
    sub_80 = sub_66;
  };
  if (controller_push_window) {
    v_232 = sub_80;
    sub_64 = sub_65;
  } else {
    v_232 = sub_65;
    sub_64 = sub_80;
  };
  if (controller_ck_11_1) {
    sub_63 = v_232;
  } else {
    sub_63 = sub_64;
  };
  if (controller_eco_input) {
    sub_62 = sub_30;
  } else {
    sub_62 = sub_63;
  };
  if (controller_v_292) {
    sub_81 = sub_63;
  } else {
    sub_81 = sub_30;
  };
  if (controller_v_293) {
    sub_61 = sub_81;
  } else {
    sub_61 = sub_62;
  };
  if (controller_rad_down1) {
    v_245 = sub_28;
  } else {
    v_245 = sub_61;
  };
  sub_82 = sub_28;
  if (controller_rad_c1) {
    sub_27 = v_245;
  } else {
    sub_27 = sub_82;
  };
  sub_26 = sub_27;
  if (controller_v_427) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_10;
  };
  if (controller_rad_c2) {
    v_246 = sub_25;
  } else {
    v_246 = sub_9;
  };
  if (controller_rad_down2) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_246;
  };
  if (controller_rad_down1) {
    sub_85 = sub_14;
  } else {
    sub_85 = sub_61;
  };
  if (controller_rad_c1) {
    v_222 = sub_82;
  } else {
    v_222 = sub_85;
  };
  if (controller_rad_up1) {
    v_223 = v_222;
  } else {
    v_223 = sub_85;
  };
  if (controller_rad_c1) {
    v_221 = sub_82;
  } else {
    v_221 = sub_13;
  };
  if (controller_rad_up1) {
    sub_86 = v_221;
  } else {
    sub_86 = sub_12;
  };
  if (controller_rad_c3) {
    sub_84 = v_223;
  } else {
    sub_84 = sub_86;
  };
  sub_89 = sub_61;
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_v_427) {
    v_224 = sub_87;
  } else {
    v_224 = sub_84;
  };
  sub_91 = sub_86;
  if (controller_rad_down1) {
    v_220 = sub_14;
  } else {
    v_220 = sub_28;
  };
  if (controller_rad_c1) {
    sub_93 = v_220;
  } else {
    sub_93 = sub_13;
  };
  sub_92 = sub_93;
  if (controller_v_427) {
    sub_90 = sub_92;
  } else {
    sub_90 = sub_91;
  };
  if (controller_rad_up2) {
    v_225 = v_224;
  } else {
    v_225 = sub_90;
  };
  if (controller_rad_c2) {
    sub_83 = v_225;
  } else {
    sub_83 = sub_90;
  };
  if (controller_v_426) {
    sub_6 = sub_83;
  } else {
    sub_6 = sub_7;
  };
  sub_5 = sub_6;
  if (controller_ck_17_1) {
    sub_95 = sub_6;
  } else {
    sub_95 = false;
  };
  sub_94 = sub_95;
  if (controller_c1_tv) {
    sub_4 = sub_5;
  } else {
    sub_4 = sub_94;
  };
  sub_96 = sub_5;
  if (controller_ck_15_1) {
    v_248 = sub_4;
  } else {
    v_248 = sub_96;
  };
  if (controller_c1_lamp) {
    v_249 = v_248;
  } else {
    v_249 = sub_4;
  };
  if (controller_ck_15_1) {
    sub_3 = sub_96;
  } else {
    sub_3 = sub_4;
  };
  if (controller_c1_lamp) {
    v_247 = sub_3;
  } else {
    v_247 = sub_4;
  };
  if (controller_lamp_switch) {
    v_250 = v_247;
  } else {
    v_250 = v_249;
  };
  if (controller_c1_lamp) {
    sub_97 = sub_96;
  } else {
    sub_97 = sub_3;
  };
  if (controller_c2_lamp) {
    v_251 = v_250;
  } else {
    v_251 = sub_97;
  };
  sub_119 = true;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  if (controller_c_window) {
    sub_120 = false;
  } else {
    sub_120 = sub_112;
  };
  if (controller_push_window) {
    v_216 = sub_120;
    sub_110 = sub_111;
  } else {
    v_216 = sub_111;
    sub_110 = sub_120;
  };
  if (controller_ck_11_1) {
    sub_109 = v_216;
  } else {
    sub_109 = sub_110;
  };
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (controller_v_427) {
    sub_121 = false;
  } else {
    sub_121 = sub_104;
  };
  if (controller_rad_c2) {
    v_217 = sub_121;
  } else {
    v_217 = sub_103;
  };
  if (controller_rad_down2) {
    sub_102 = sub_103;
  } else {
    sub_102 = v_217;
  };
  if (controller_rad_down1) {
    sub_124 = sub_108;
  } else {
    sub_124 = false;
  };
  if (controller_rad_c1) {
    v_212 = false;
  } else {
    v_212 = sub_124;
  };
  if (controller_rad_up1) {
    v_213 = v_212;
  } else {
    v_213 = sub_124;
  };
  if (controller_rad_c1) {
    v_211 = false;
  } else {
    v_211 = sub_107;
  };
  if (controller_rad_up1) {
    sub_125 = v_211;
  } else {
    sub_125 = sub_106;
  };
  if (controller_rad_c3) {
    sub_123 = v_213;
  } else {
    sub_123 = sub_125;
  };
  if (controller_v_427) {
    v_214 = false;
  } else {
    v_214 = sub_123;
  };
  sub_127 = sub_125;
  if (controller_rad_c1) {
    sub_129 = sub_124;
  } else {
    sub_129 = sub_107;
  };
  sub_128 = sub_129;
  if (controller_v_427) {
    sub_126 = sub_128;
  } else {
    sub_126 = sub_127;
  };
  if (controller_rad_up2) {
    v_215 = v_214;
  } else {
    v_215 = sub_126;
  };
  if (controller_rad_c2) {
    sub_122 = v_215;
  } else {
    sub_122 = sub_126;
  };
  if (controller_v_426) {
    sub_101 = sub_122;
  } else {
    sub_101 = sub_102;
  };
  if (controller_ck_17_1) {
    v_219 = sub_101;
    v_218 = false;
  } else {
    v_219 = false;
    v_218 = sub_101;
  };
  if (controller_tv_switch) {
    sub_100 = v_218;
  } else {
    sub_100 = v_219;
  };
  sub_138 = sub_30;
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  if (controller_v_427) {
    sub_139 = false;
  } else {
    sub_139 = sub_134;
  };
  if (controller_rad_c2) {
    v_210 = sub_139;
  } else {
    v_210 = sub_133;
  };
  if (controller_rad_down2) {
    sub_132 = sub_133;
  } else {
    sub_132 = v_210;
  };
  if (controller_rad_down1) {
    sub_142 = sub_138;
  } else {
    sub_142 = false;
  };
  if (controller_rad_c1) {
    v_206 = false;
  } else {
    v_206 = sub_142;
  };
  if (controller_rad_up1) {
    v_207 = v_206;
  } else {
    v_207 = sub_142;
  };
  if (controller_rad_c1) {
    v_205 = false;
  } else {
    v_205 = sub_137;
  };
  if (controller_rad_up1) {
    sub_143 = v_205;
  } else {
    sub_143 = sub_136;
  };
  if (controller_rad_c3) {
    sub_141 = v_207;
  } else {
    sub_141 = sub_143;
  };
  if (controller_v_427) {
    v_208 = false;
  } else {
    v_208 = sub_141;
  };
  sub_145 = sub_143;
  if (controller_rad_c1) {
    sub_147 = sub_142;
  } else {
    sub_147 = sub_137;
  };
  sub_146 = sub_147;
  if (controller_v_427) {
    sub_144 = sub_146;
  } else {
    sub_144 = sub_145;
  };
  if (controller_rad_up2) {
    v_209 = v_208;
  } else {
    v_209 = sub_144;
  };
  if (controller_rad_c2) {
    sub_140 = v_209;
  } else {
    sub_140 = sub_144;
  };
  if (controller_v_426) {
    sub_131 = sub_140;
  } else {
    sub_131 = sub_132;
  };
  if (controller_ck_17_1) {
    sub_130 = sub_101;
  } else {
    sub_130 = sub_131;
  };
  if (controller_c1_tv) {
    sub_99 = sub_100;
  } else {
    sub_99 = sub_130;
  };
  if (controller_ck_15_1) {
    v_253 = sub_99;
  } else {
    v_253 = false;
  };
  if (controller_c1_lamp) {
    v_254 = v_253;
  } else {
    v_254 = sub_99;
  };
  if (controller_ck_15_1) {
    sub_98 = false;
  } else {
    sub_98 = sub_99;
  };
  if (controller_c1_lamp) {
    v_252 = sub_98;
  } else {
    v_252 = sub_99;
  };
  if (controller_lamp_switch) {
    v_255 = v_252;
  } else {
    v_255 = v_254;
  };
  if (controller_c1_lamp) {
    sub_148 = false;
  } else {
    sub_148 = sub_98;
  };
  if (controller_c2_lamp) {
    v_256 = v_255;
  } else {
    v_256 = sub_148;
  };
  if (controller_room_presence) {
    sub_2 = v_251;
  } else {
    sub_2 = v_256;
  };
  if (controller_v_427) {
    sub_155 = false;
  } else {
    sub_155 = sub_10;
  };
  if (controller_rad_c2) {
    v_199 = sub_155;
  } else {
    v_199 = sub_9;
  };
  if (controller_rad_down2) {
    sub_154 = sub_8;
  } else {
    sub_154 = v_199;
  };
  if (controller_rad_down1) {
    sub_158 = sub_14;
  } else {
    sub_158 = false;
  };
  if (controller_rad_c1) {
    v_195 = false;
  } else {
    v_195 = sub_158;
  };
  if (controller_rad_up1) {
    v_196 = v_195;
  } else {
    v_196 = sub_158;
  };
  if (controller_rad_c1) {
    v_194 = false;
  } else {
    v_194 = sub_13;
  };
  if (controller_rad_up1) {
    sub_159 = v_194;
  } else {
    sub_159 = sub_12;
  };
  if (controller_rad_c3) {
    sub_157 = v_196;
  } else {
    sub_157 = sub_159;
  };
  if (controller_v_427) {
    v_197 = false;
  } else {
    v_197 = sub_157;
  };
  sub_161 = sub_159;
  if (controller_rad_c1) {
    sub_163 = sub_158;
  } else {
    sub_163 = sub_13;
  };
  sub_162 = sub_163;
  if (controller_v_427) {
    sub_160 = sub_162;
  } else {
    sub_160 = sub_161;
  };
  if (controller_rad_up2) {
    v_198 = v_197;
  } else {
    v_198 = sub_160;
  };
  if (controller_rad_c2) {
    sub_156 = v_198;
  } else {
    sub_156 = sub_160;
  };
  if (controller_v_426) {
    sub_153 = sub_156;
  } else {
    sub_153 = sub_154;
  };
  sub_152 = sub_153;
  if (controller_ck_17_1) {
    sub_165 = sub_153;
  } else {
    sub_165 = false;
  };
  sub_164 = sub_165;
  if (controller_c1_tv) {
    sub_151 = sub_152;
  } else {
    sub_151 = sub_164;
  };
  sub_166 = sub_152;
  if (controller_ck_15_1) {
    v_201 = sub_151;
  } else {
    v_201 = sub_166;
  };
  if (controller_c1_lamp) {
    v_202 = v_201;
  } else {
    v_202 = sub_151;
  };
  if (controller_ck_15_1) {
    sub_150 = sub_166;
  } else {
    sub_150 = sub_151;
  };
  if (controller_c1_lamp) {
    v_200 = sub_150;
  } else {
    v_200 = sub_151;
  };
  if (controller_lamp_switch) {
    v_203 = v_200;
  } else {
    v_203 = v_202;
  };
  if (controller_c1_lamp) {
    sub_167 = sub_166;
  } else {
    sub_167 = sub_150;
  };
  if (controller_c2_lamp) {
    v_204 = v_203;
  } else {
    v_204 = sub_167;
  };
  if (controller_room_presence) {
    sub_149 = v_204;
  } else {
    sub_149 = false;
  };
  if (controller_ck_9_1) {
    v_258 = sub_2;
    v_257 = sub_149;
  } else {
    v_258 = sub_149;
    v_257 = sub_2;
  };
  if (controller_push_door) {
    v_259 = v_257;
  } else {
    v_259 = v_258;
  };
  if (controller_c_door) {
    sub_1 = v_259;
  } else {
    sub_1 = sub_2;
  };
  sub_180 = sub_111;
  sub_179 = sub_180;
  sub_178 = sub_179;
  sub_177 = sub_178;
  sub_176 = sub_177;
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  if (controller_wash_end) {
    sub_199 = sub_119;
  } else {
    sub_199 = false;
  };
  if (controller_v_337) {
    sub_198 = false;
  } else {
    sub_198 = sub_199;
  };
  v_173 = !(controller_wash_start);
  sub_200 = (v_173||false);
  if (controller_v_337) {
    v_174 = sub_200;
  } else {
    v_174 = sub_118;
  };
  if (controller_v_336) {
    v_175 = v_174;
  } else {
    v_175 = sub_118;
  };
  if (controller_v_338) {
    sub_197 = v_175;
  } else {
    sub_197 = sub_198;
  };
  sub_196 = sub_197;
  sub_195 = sub_196;
  sub_194 = sub_195;
  if (controller_c_oven) {
    sub_193 = sub_194;
  } else {
    sub_193 = sub_115;
  };
  if (controller_wash_end) {
    v_171 = false;
  } else {
    v_171 = sub_119;
  };
  if (controller_v_337) {
    v_172 = v_171;
  } else {
    v_172 = sub_199;
  };
  if (controller_v_336) {
    sub_205 = v_172;
  } else {
    sub_205 = sub_118;
  };
  if (controller_v_338) {
    sub_204 = sub_118;
  } else {
    sub_204 = sub_205;
  };
  sub_203 = sub_204;
  if (controller_oven_temp_ok) {
    sub_202 = sub_117;
  } else {
    sub_202 = sub_203;
  };
  sub_201 = sub_202;
  if (controller_v_395) {
    sub_192 = sub_201;
  } else {
    sub_192 = sub_193;
  };
  sub_191 = sub_192;
  sub_206 = sub_194;
  if (controller_v_394) {
    sub_190 = sub_206;
  } else {
    sub_190 = sub_191;
  };
  if (controller_v_395) {
    v_170 = sub_206;
    v_169 = sub_206;
  } else {
    v_170 = sub_114;
    v_169 = sub_193;
  };
  if (controller_oven_start) {
    sub_207 = v_169;
  } else {
    sub_207 = v_170;
  };
  if (controller_oven_cold) {
    v_168 = sub_203;
  } else {
    v_168 = sub_116;
  };
  if (controller_c_oven) {
    sub_209 = v_168;
  } else {
    sub_209 = sub_115;
  };
  if (controller_oven_finish) {
    v_167 = sub_118;
  } else {
    v_167 = sub_197;
  };
  if (controller_oven_temp_ok) {
    sub_211 = sub_117;
  } else {
    sub_211 = v_167;
  };
  sub_210 = sub_211;
  if (controller_v_395) {
    sub_208 = sub_210;
  } else {
    sub_208 = sub_209;
  };
  if (controller_v_394) {
    v_176 = sub_208;
  } else {
    v_176 = sub_207;
  };
  if (controller_v_393) {
    v_177 = v_176;
  } else {
    v_177 = sub_190;
  };
  if (controller_comfort_input) {
    sub_189 = sub_113;
  } else {
    sub_189 = v_177;
  };
  sub_188 = sub_189;
  if (controller_c_window) {
    sub_212 = false;
  } else {
    sub_212 = sub_189;
  };
  if (controller_push_window) {
    v_178 = sub_212;
    sub_187 = sub_188;
  } else {
    v_178 = sub_188;
    sub_187 = sub_212;
  };
  if (controller_ck_11_1) {
    sub_186 = v_178;
  } else {
    sub_186 = sub_187;
  };
  if (controller_eco_input) {
    sub_185 = sub_109;
  } else {
    sub_185 = sub_186;
  };
  if (controller_v_292) {
    sub_213 = sub_186;
  } else {
    sub_213 = sub_109;
  };
  if (controller_v_293) {
    sub_184 = sub_213;
  } else {
    sub_184 = sub_185;
  };
  if (controller_c_oven) {
    sub_223 = false;
  } else {
    sub_223 = sub_115;
  };
  if (controller_oven_temp_ok) {
    sub_225 = sub_203;
  } else {
    sub_225 = sub_196;
  };
  sub_224 = sub_225;
  if (controller_v_395) {
    sub_222 = sub_224;
  } else {
    sub_222 = sub_223;
  };
  sub_221 = sub_222;
  if (controller_v_394) {
    sub_220 = false;
  } else {
    sub_220 = sub_221;
  };
  if (controller_v_395) {
    v_163 = false;
    v_162 = false;
  } else {
    v_163 = sub_114;
    v_162 = sub_223;
  };
  if (controller_oven_start) {
    sub_226 = v_162;
  } else {
    sub_226 = v_163;
  };
  if (controller_oven_finish) {
    sub_230 = sub_118;
  } else {
    sub_230 = sub_204;
  };
  sub_229 = sub_230;
  if (controller_oven_cold) {
    v_161 = sub_195;
  } else {
    v_161 = sub_229;
  };
  if (controller_c_oven) {
    sub_228 = v_161;
  } else {
    sub_228 = sub_229;
  };
  if (controller_oven_finish) {
    v_160 = sub_118;
  } else {
    v_160 = false;
  };
  if (controller_oven_temp_ok) {
    sub_232 = sub_230;
  } else {
    sub_232 = v_160;
  };
  sub_231 = sub_232;
  if (controller_v_395) {
    sub_227 = sub_231;
  } else {
    sub_227 = sub_228;
  };
  if (controller_v_394) {
    v_164 = sub_227;
  } else {
    v_164 = sub_226;
  };
  if (controller_v_393) {
    v_165 = v_164;
  } else {
    v_165 = sub_220;
  };
  if (controller_comfort_input) {
    sub_219 = sub_113;
  } else {
    sub_219 = v_165;
  };
  sub_218 = sub_219;
  if (controller_c_window) {
    sub_233 = false;
  } else {
    sub_233 = sub_219;
  };
  if (controller_push_window) {
    v_166 = sub_233;
    sub_217 = sub_218;
  } else {
    v_166 = sub_218;
    sub_217 = sub_233;
  };
  if (controller_ck_11_1) {
    sub_216 = v_166;
  } else {
    sub_216 = sub_217;
  };
  if (controller_eco_input) {
    sub_215 = sub_109;
  } else {
    sub_215 = sub_216;
  };
  if (controller_v_292) {
    sub_234 = sub_216;
  } else {
    sub_234 = sub_109;
  };
  if (controller_v_293) {
    sub_214 = sub_234;
  } else {
    sub_214 = sub_215;
  };
  if (controller_rad_down1) {
    v_179 = sub_184;
  } else {
    v_179 = sub_214;
  };
  sub_235 = sub_184;
  if (controller_rad_c1) {
    sub_183 = v_179;
  } else {
    sub_183 = sub_235;
  };
  sub_182 = sub_183;
  if (controller_v_427) {
    sub_181 = sub_182;
  } else {
    sub_181 = sub_175;
  };
  if (controller_rad_c2) {
    v_180 = sub_181;
  } else {
    v_180 = sub_174;
  };
  if (controller_rad_down2) {
    sub_172 = sub_173;
  } else {
    sub_172 = v_180;
  };
  if (controller_rad_down1) {
    sub_238 = sub_179;
  } else {
    sub_238 = sub_214;
  };
  if (controller_rad_c1) {
    v_156 = sub_235;
  } else {
    v_156 = sub_238;
  };
  if (controller_rad_up1) {
    v_157 = v_156;
  } else {
    v_157 = sub_238;
  };
  if (controller_rad_c1) {
    v_155 = sub_235;
  } else {
    v_155 = sub_178;
  };
  if (controller_rad_up1) {
    sub_239 = v_155;
  } else {
    sub_239 = sub_177;
  };
  if (controller_rad_c3) {
    sub_237 = v_157;
  } else {
    sub_237 = sub_239;
  };
  sub_242 = sub_214;
  sub_241 = sub_242;
  sub_240 = sub_241;
  if (controller_v_427) {
    v_158 = sub_240;
  } else {
    v_158 = sub_237;
  };
  sub_244 = sub_239;
  if (controller_rad_down1) {
    v_154 = sub_179;
  } else {
    v_154 = sub_184;
  };
  if (controller_rad_c1) {
    sub_246 = v_154;
  } else {
    sub_246 = sub_178;
  };
  sub_245 = sub_246;
  if (controller_v_427) {
    sub_243 = sub_245;
  } else {
    sub_243 = sub_244;
  };
  if (controller_rad_up2) {
    v_159 = v_158;
  } else {
    v_159 = sub_243;
  };
  if (controller_rad_c2) {
    sub_236 = v_159;
  } else {
    sub_236 = sub_243;
  };
  if (controller_v_426) {
    sub_171 = sub_236;
  } else {
    sub_171 = sub_172;
  };
  if (controller_ck_17_1) {
    v_182 = sub_6;
    v_181 = sub_171;
  } else {
    v_182 = sub_171;
    v_181 = sub_6;
  };
  if (controller_tv_switch) {
    v_183 = v_181;
  } else {
    v_183 = v_182;
  };
  if (controller_c1_tv) {
    sub_170 = v_183;
  } else {
    sub_170 = sub_94;
  };
  sub_248 = sub_171;
  sub_247 = sub_248;
  if (controller_ck_15_1) {
    v_185 = sub_170;
  } else {
    v_185 = sub_247;
  };
  if (controller_c1_lamp) {
    v_186 = v_185;
  } else {
    v_186 = sub_170;
  };
  if (controller_ck_15_1) {
    sub_169 = sub_247;
  } else {
    sub_169 = sub_170;
  };
  if (controller_c1_lamp) {
    v_184 = sub_169;
  } else {
    v_184 = sub_170;
  };
  if (controller_lamp_switch) {
    v_187 = v_184;
  } else {
    v_187 = v_186;
  };
  if (controller_c1_lamp) {
    sub_249 = sub_247;
  } else {
    sub_249 = sub_169;
  };
  if (controller_c2_lamp) {
    v_188 = v_187;
  } else {
    v_188 = sub_249;
  };
  if (controller_c1_tv) {
    sub_251 = sub_100;
  } else {
    sub_251 = sub_101;
  };
  if (controller_ck_15_1) {
    v_190 = sub_251;
  } else {
    v_190 = false;
  };
  if (controller_c1_lamp) {
    v_191 = v_190;
  } else {
    v_191 = sub_251;
  };
  if (controller_ck_15_1) {
    sub_250 = false;
  } else {
    sub_250 = sub_251;
  };
  if (controller_c1_lamp) {
    v_189 = sub_250;
  } else {
    v_189 = sub_251;
  };
  if (controller_lamp_switch) {
    v_192 = v_189;
  } else {
    v_192 = v_191;
  };
  if (controller_c1_lamp) {
    sub_252 = false;
  } else {
    sub_252 = sub_250;
  };
  if (controller_c2_lamp) {
    v_193 = v_192;
  } else {
    v_193 = sub_252;
  };
  if (controller_room_presence) {
    sub_168 = v_188;
  } else {
    sub_168 = v_193;
  };
  if (controller_v_427) {
    sub_258 = false;
  } else {
    sub_258 = sub_175;
  };
  if (controller_rad_c2) {
    v_145 = sub_258;
  } else {
    v_145 = sub_174;
  };
  if (controller_rad_down2) {
    sub_257 = sub_173;
  } else {
    sub_257 = v_145;
  };
  if (controller_rad_down1) {
    sub_261 = sub_179;
  } else {
    sub_261 = false;
  };
  if (controller_rad_c1) {
    v_141 = false;
  } else {
    v_141 = sub_261;
  };
  if (controller_rad_up1) {
    v_142 = v_141;
  } else {
    v_142 = sub_261;
  };
  if (controller_rad_c1) {
    v = false;
  } else {
    v = sub_178;
  };
  if (controller_rad_up1) {
    sub_262 = v;
  } else {
    sub_262 = sub_177;
  };
  if (controller_rad_c3) {
    sub_260 = v_142;
  } else {
    sub_260 = sub_262;
  };
  if (controller_v_427) {
    v_143 = false;
  } else {
    v_143 = sub_260;
  };
  sub_264 = sub_262;
  if (controller_rad_c1) {
    sub_266 = sub_261;
  } else {
    sub_266 = sub_178;
  };
  sub_265 = sub_266;
  if (controller_v_427) {
    sub_263 = sub_265;
  } else {
    sub_263 = sub_264;
  };
  if (controller_rad_up2) {
    v_144 = v_143;
  } else {
    v_144 = sub_263;
  };
  if (controller_rad_c2) {
    sub_259 = v_144;
  } else {
    sub_259 = sub_263;
  };
  if (controller_v_426) {
    sub_256 = sub_259;
  } else {
    sub_256 = sub_257;
  };
  if (controller_ck_17_1) {
    v_147 = sub_153;
    v_146 = sub_256;
  } else {
    v_147 = sub_256;
    v_146 = sub_153;
  };
  if (controller_tv_switch) {
    v_148 = v_146;
  } else {
    v_148 = v_147;
  };
  if (controller_c1_tv) {
    sub_255 = v_148;
  } else {
    sub_255 = sub_164;
  };
  sub_268 = sub_256;
  sub_267 = sub_268;
  if (controller_ck_15_1) {
    v_150 = sub_255;
  } else {
    v_150 = sub_267;
  };
  if (controller_c1_lamp) {
    v_151 = v_150;
  } else {
    v_151 = sub_255;
  };
  if (controller_ck_15_1) {
    sub_254 = sub_267;
  } else {
    sub_254 = sub_255;
  };
  if (controller_c1_lamp) {
    v_149 = sub_254;
  } else {
    v_149 = sub_255;
  };
  if (controller_lamp_switch) {
    v_152 = v_149;
  } else {
    v_152 = v_151;
  };
  if (controller_c1_lamp) {
    sub_269 = sub_267;
  } else {
    sub_269 = sub_254;
  };
  if (controller_c2_lamp) {
    v_153 = v_152;
  } else {
    v_153 = sub_269;
  };
  if (controller_room_presence) {
    sub_253 = v_153;
  } else {
    sub_253 = false;
  };
  if (controller_ck_9_1) {
    v_261 = sub_168;
    v_260 = sub_253;
  } else {
    v_261 = sub_253;
    v_260 = sub_168;
  };
  if (controller_push_door) {
    v_262 = v_260;
  } else {
    v_262 = v_261;
  };
  if (controller_c_door) {
    v_263 = v_262;
  } else {
    v_263 = sub_168;
  };
  if (p_controller_c2_tv) {
    sub_0 = v_263;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c2_tv = sub_0;;
}

void Controller_controller__controller_controller_controller_c2_lamp_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door, int controller_c1_tv,
  int controller_c1_lamp, int controller_rad_c3, int controller_rad_c2,
  int controller_rad_c1, int controller_c_oven, int controller_c_window,
  int controller_c_door,
  Controller_controller__controller_controller_controller_c2_lamp_out* _out) {
  
  int v_372;
  int v_371;
  int v_370;
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v_364;
  int v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  if (controller_c_window) {
    sub_32 = false;
  } else {
    sub_32 = sub_17;
  };
  if (controller_push_window) {
    v_359 = sub_32;
    sub_31 = sub_16;
  } else {
    v_359 = sub_16;
    sub_31 = sub_32;
  };
  if (controller_ck_11_1) {
    sub_30 = v_359;
  } else {
    sub_30 = sub_31;
  };
  if (controller_wash_end) {
    sub_46 = sub_24;
  } else {
    sub_46 = false;
  };
  if (controller_v_337) {
    sub_45 = false;
  } else {
    sub_45 = sub_46;
  };
  sub_47 = (controller_wash_start&&false);
  if (controller_v_337) {
    v_354 = sub_47;
  } else {
    v_354 = sub_23;
  };
  if (controller_v_336) {
    v_355 = v_354;
  } else {
    v_355 = sub_23;
  };
  if (controller_v_338) {
    sub_44 = v_355;
  } else {
    sub_44 = sub_45;
  };
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (controller_c_oven) {
    sub_40 = sub_41;
  } else {
    sub_40 = sub_20;
  };
  if (controller_wash_end) {
    v_352 = false;
  } else {
    v_352 = sub_24;
  };
  if (controller_v_337) {
    v_353 = v_352;
  } else {
    v_353 = sub_46;
  };
  if (controller_v_336) {
    sub_52 = v_353;
  } else {
    sub_52 = sub_23;
  };
  if (controller_v_338) {
    sub_51 = sub_23;
  } else {
    sub_51 = sub_52;
  };
  sub_50 = sub_51;
  if (controller_oven_temp_ok) {
    sub_49 = sub_22;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  if (controller_v_395) {
    sub_39 = sub_48;
  } else {
    sub_39 = sub_40;
  };
  sub_38 = sub_39;
  sub_53 = sub_41;
  if (controller_v_394) {
    sub_37 = sub_53;
  } else {
    sub_37 = sub_38;
  };
  if (controller_v_395) {
    v_351 = sub_53;
    v_350 = sub_53;
  } else {
    v_351 = sub_19;
    v_350 = sub_40;
  };
  if (controller_oven_start) {
    sub_54 = v_350;
  } else {
    sub_54 = v_351;
  };
  if (controller_oven_cold) {
    v_349 = sub_50;
  } else {
    v_349 = sub_21;
  };
  if (controller_c_oven) {
    sub_56 = v_349;
  } else {
    sub_56 = sub_20;
  };
  if (controller_oven_finish) {
    v_348 = sub_23;
  } else {
    v_348 = sub_44;
  };
  if (controller_oven_temp_ok) {
    sub_58 = sub_22;
  } else {
    sub_58 = v_348;
  };
  sub_57 = sub_58;
  if (controller_v_395) {
    sub_55 = sub_57;
  } else {
    sub_55 = sub_56;
  };
  if (controller_v_394) {
    v_356 = sub_55;
  } else {
    v_356 = sub_54;
  };
  if (controller_v_393) {
    v_357 = v_356;
  } else {
    v_357 = sub_37;
  };
  if (controller_comfort_input) {
    sub_36 = sub_18;
  } else {
    sub_36 = v_357;
  };
  sub_35 = sub_36;
  if (controller_c_window) {
    sub_59 = false;
  } else {
    sub_59 = sub_36;
  };
  if (controller_push_window) {
    v_358 = sub_59;
    sub_34 = sub_35;
  } else {
    v_358 = sub_35;
    sub_34 = sub_59;
  };
  if (controller_ck_11_1) {
    sub_33 = v_358;
  } else {
    sub_33 = sub_34;
  };
  if (controller_eco_input) {
    sub_29 = sub_30;
  } else {
    sub_29 = sub_33;
  };
  if (controller_v_292) {
    sub_60 = sub_33;
  } else {
    sub_60 = sub_30;
  };
  if (controller_v_293) {
    sub_28 = sub_60;
  } else {
    sub_28 = sub_29;
  };
  if (controller_c_oven) {
    sub_70 = false;
  } else {
    sub_70 = sub_20;
  };
  if (controller_oven_temp_ok) {
    sub_72 = sub_50;
  } else {
    sub_72 = sub_43;
  };
  sub_71 = sub_72;
  if (controller_v_395) {
    sub_69 = sub_71;
  } else {
    sub_69 = sub_70;
  };
  sub_68 = sub_69;
  if (controller_v_394) {
    sub_67 = false;
  } else {
    sub_67 = sub_68;
  };
  if (controller_v_395) {
    v_344 = false;
    v_343 = false;
  } else {
    v_344 = sub_19;
    v_343 = sub_70;
  };
  if (controller_oven_start) {
    sub_73 = v_343;
  } else {
    sub_73 = v_344;
  };
  if (controller_oven_finish) {
    sub_77 = sub_23;
  } else {
    sub_77 = sub_51;
  };
  sub_76 = sub_77;
  if (controller_oven_cold) {
    v_342 = sub_42;
  } else {
    v_342 = sub_76;
  };
  if (controller_c_oven) {
    sub_75 = v_342;
  } else {
    sub_75 = sub_76;
  };
  if (controller_oven_finish) {
    v_341 = sub_23;
  } else {
    v_341 = false;
  };
  if (controller_oven_temp_ok) {
    sub_79 = sub_77;
  } else {
    sub_79 = v_341;
  };
  sub_78 = sub_79;
  if (controller_v_395) {
    sub_74 = sub_78;
  } else {
    sub_74 = sub_75;
  };
  if (controller_v_394) {
    v_345 = sub_74;
  } else {
    v_345 = sub_73;
  };
  if (controller_v_393) {
    v_346 = v_345;
  } else {
    v_346 = sub_67;
  };
  if (controller_comfort_input) {
    sub_66 = sub_18;
  } else {
    sub_66 = v_346;
  };
  sub_65 = sub_66;
  if (controller_c_window) {
    sub_80 = false;
  } else {
    sub_80 = sub_66;
  };
  if (controller_push_window) {
    v_347 = sub_80;
    sub_64 = sub_65;
  } else {
    v_347 = sub_65;
    sub_64 = sub_80;
  };
  if (controller_ck_11_1) {
    sub_63 = v_347;
  } else {
    sub_63 = sub_64;
  };
  if (controller_eco_input) {
    sub_62 = sub_30;
  } else {
    sub_62 = sub_63;
  };
  if (controller_v_292) {
    sub_81 = sub_63;
  } else {
    sub_81 = sub_30;
  };
  if (controller_v_293) {
    sub_61 = sub_81;
  } else {
    sub_61 = sub_62;
  };
  if (controller_rad_down1) {
    v_360 = sub_28;
  } else {
    v_360 = sub_61;
  };
  sub_82 = sub_28;
  if (controller_rad_c1) {
    sub_27 = v_360;
  } else {
    sub_27 = sub_82;
  };
  sub_26 = sub_27;
  if (controller_v_427) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_10;
  };
  if (controller_rad_c2) {
    v_361 = sub_25;
  } else {
    v_361 = sub_9;
  };
  if (controller_rad_down2) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_361;
  };
  if (controller_rad_down1) {
    sub_85 = sub_14;
  } else {
    sub_85 = sub_61;
  };
  if (controller_rad_c1) {
    v_337 = sub_82;
  } else {
    v_337 = sub_85;
  };
  if (controller_rad_up1) {
    v_338 = v_337;
  } else {
    v_338 = sub_85;
  };
  if (controller_rad_c1) {
    v_336 = sub_82;
  } else {
    v_336 = sub_13;
  };
  if (controller_rad_up1) {
    sub_86 = v_336;
  } else {
    sub_86 = sub_12;
  };
  if (controller_rad_c3) {
    sub_84 = v_338;
  } else {
    sub_84 = sub_86;
  };
  sub_89 = sub_61;
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (controller_v_427) {
    v_339 = sub_87;
  } else {
    v_339 = sub_84;
  };
  sub_91 = sub_86;
  if (controller_rad_down1) {
    v_335 = sub_14;
  } else {
    v_335 = sub_28;
  };
  if (controller_rad_c1) {
    sub_93 = v_335;
  } else {
    sub_93 = sub_13;
  };
  sub_92 = sub_93;
  if (controller_v_427) {
    sub_90 = sub_92;
  } else {
    sub_90 = sub_91;
  };
  if (controller_rad_up2) {
    v_340 = v_339;
  } else {
    v_340 = sub_90;
  };
  if (controller_rad_c2) {
    sub_83 = v_340;
  } else {
    sub_83 = sub_90;
  };
  if (controller_v_426) {
    sub_6 = sub_83;
  } else {
    sub_6 = sub_7;
  };
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (controller_ck_17_1) {
    sub_95 = sub_6;
  } else {
    sub_95 = false;
  };
  if (controller_c1_tv) {
    sub_94 = sub_5;
  } else {
    sub_94 = sub_95;
  };
  if (controller_ck_15_1) {
    v_362 = sub_4;
  } else {
    v_362 = sub_94;
  };
  if (controller_c1_lamp) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_362;
  };
  sub_116 = true;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  if (controller_c_window) {
    sub_117 = false;
  } else {
    sub_117 = sub_109;
  };
  if (controller_push_window) {
    v_330 = sub_117;
    sub_107 = sub_108;
  } else {
    v_330 = sub_108;
    sub_107 = sub_117;
  };
  if (controller_ck_11_1) {
    sub_106 = v_330;
  } else {
    sub_106 = sub_107;
  };
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  if (controller_v_427) {
    sub_118 = false;
  } else {
    sub_118 = sub_101;
  };
  if (controller_rad_c2) {
    v_331 = sub_118;
  } else {
    v_331 = sub_100;
  };
  if (controller_rad_down2) {
    sub_99 = sub_100;
  } else {
    sub_99 = v_331;
  };
  if (controller_rad_down1) {
    sub_121 = sub_105;
  } else {
    sub_121 = false;
  };
  if (controller_rad_c1) {
    v_326 = false;
  } else {
    v_326 = sub_121;
  };
  if (controller_rad_up1) {
    v_327 = v_326;
  } else {
    v_327 = sub_121;
  };
  if (controller_rad_c1) {
    v_325 = false;
  } else {
    v_325 = sub_104;
  };
  if (controller_rad_up1) {
    sub_122 = v_325;
  } else {
    sub_122 = sub_103;
  };
  if (controller_rad_c3) {
    sub_120 = v_327;
  } else {
    sub_120 = sub_122;
  };
  if (controller_v_427) {
    v_328 = false;
  } else {
    v_328 = sub_120;
  };
  sub_124 = sub_122;
  if (controller_rad_c1) {
    sub_126 = sub_121;
  } else {
    sub_126 = sub_104;
  };
  sub_125 = sub_126;
  if (controller_v_427) {
    sub_123 = sub_125;
  } else {
    sub_123 = sub_124;
  };
  if (controller_rad_up2) {
    v_329 = v_328;
  } else {
    v_329 = sub_123;
  };
  if (controller_rad_c2) {
    sub_119 = v_329;
  } else {
    sub_119 = sub_123;
  };
  if (controller_v_426) {
    sub_98 = sub_119;
  } else {
    sub_98 = sub_99;
  };
  if (controller_ck_17_1) {
    v_333 = sub_98;
    v_332 = false;
  } else {
    v_333 = false;
    v_332 = sub_98;
  };
  if (controller_tv_switch) {
    v_334 = v_332;
  } else {
    v_334 = v_333;
  };
  if (controller_c1_tv) {
    sub_97 = v_334;
  } else {
    sub_97 = sub_98;
  };
  if (controller_ck_15_1) {
    sub_96 = false;
  } else {
    sub_96 = sub_97;
  };
  sub_136 = sub_30;
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  if (controller_v_427) {
    sub_137 = false;
  } else {
    sub_137 = sub_132;
  };
  if (controller_rad_c2) {
    v_321 = sub_137;
  } else {
    v_321 = sub_131;
  };
  if (controller_rad_down2) {
    sub_130 = sub_131;
  } else {
    sub_130 = v_321;
  };
  if (controller_rad_down1) {
    sub_140 = sub_136;
  } else {
    sub_140 = false;
  };
  if (controller_rad_c1) {
    v_317 = false;
  } else {
    v_317 = sub_140;
  };
  if (controller_rad_up1) {
    v_318 = v_317;
  } else {
    v_318 = sub_140;
  };
  if (controller_rad_c1) {
    v_316 = false;
  } else {
    v_316 = sub_135;
  };
  if (controller_rad_up1) {
    sub_141 = v_316;
  } else {
    sub_141 = sub_134;
  };
  if (controller_rad_c3) {
    sub_139 = v_318;
  } else {
    sub_139 = sub_141;
  };
  if (controller_v_427) {
    v_319 = false;
  } else {
    v_319 = sub_139;
  };
  sub_143 = sub_141;
  if (controller_rad_c1) {
    sub_145 = sub_140;
  } else {
    sub_145 = sub_135;
  };
  sub_144 = sub_145;
  if (controller_v_427) {
    sub_142 = sub_144;
  } else {
    sub_142 = sub_143;
  };
  if (controller_rad_up2) {
    v_320 = v_319;
  } else {
    v_320 = sub_142;
  };
  if (controller_rad_c2) {
    sub_138 = v_320;
  } else {
    sub_138 = sub_142;
  };
  if (controller_v_426) {
    sub_129 = sub_138;
  } else {
    sub_129 = sub_130;
  };
  if (controller_ck_17_1) {
    v_323 = sub_129;
    v_322 = false;
  } else {
    v_323 = false;
    v_322 = sub_129;
  };
  if (controller_tv_switch) {
    v_324 = v_322;
  } else {
    v_324 = v_323;
  };
  if (controller_c1_tv) {
    sub_128 = v_324;
  } else {
    sub_128 = sub_129;
  };
  if (controller_ck_15_1) {
    sub_127 = sub_97;
  } else {
    sub_127 = sub_128;
  };
  if (controller_c1_lamp) {
    v_363 = sub_96;
  } else {
    v_363 = sub_127;
  };
  if (controller_ck_15_1) {
    sub_146 = sub_97;
  } else {
    sub_146 = false;
  };
  if (controller_c1_lamp) {
    v_364 = sub_146;
  } else {
    v_364 = sub_127;
  };
  if (controller_lamp_switch) {
    v_365 = v_363;
  } else {
    v_365 = v_364;
  };
  if (controller_room_presence) {
    sub_2 = sub_3;
  } else {
    sub_2 = v_365;
  };
  if (controller_v_427) {
    sub_153 = false;
  } else {
    sub_153 = sub_10;
  };
  if (controller_rad_c2) {
    v_314 = sub_153;
  } else {
    v_314 = sub_9;
  };
  if (controller_rad_down2) {
    sub_152 = sub_8;
  } else {
    sub_152 = v_314;
  };
  if (controller_rad_down1) {
    sub_156 = sub_14;
  } else {
    sub_156 = false;
  };
  if (controller_rad_c1) {
    v_310 = false;
  } else {
    v_310 = sub_156;
  };
  if (controller_rad_up1) {
    v_311 = v_310;
  } else {
    v_311 = sub_156;
  };
  if (controller_rad_c1) {
    v_309 = false;
  } else {
    v_309 = sub_13;
  };
  if (controller_rad_up1) {
    sub_157 = v_309;
  } else {
    sub_157 = sub_12;
  };
  if (controller_rad_c3) {
    sub_155 = v_311;
  } else {
    sub_155 = sub_157;
  };
  if (controller_v_427) {
    v_312 = false;
  } else {
    v_312 = sub_155;
  };
  sub_159 = sub_157;
  if (controller_rad_c1) {
    sub_161 = sub_156;
  } else {
    sub_161 = sub_13;
  };
  sub_160 = sub_161;
  if (controller_v_427) {
    sub_158 = sub_160;
  } else {
    sub_158 = sub_159;
  };
  if (controller_rad_up2) {
    v_313 = v_312;
  } else {
    v_313 = sub_158;
  };
  if (controller_rad_c2) {
    sub_154 = v_313;
  } else {
    sub_154 = sub_158;
  };
  if (controller_v_426) {
    sub_151 = sub_154;
  } else {
    sub_151 = sub_152;
  };
  sub_150 = sub_151;
  sub_149 = sub_150;
  if (controller_ck_17_1) {
    sub_163 = sub_151;
  } else {
    sub_163 = false;
  };
  if (controller_c1_tv) {
    sub_162 = sub_150;
  } else {
    sub_162 = sub_163;
  };
  if (controller_ck_15_1) {
    v_315 = sub_149;
  } else {
    v_315 = sub_162;
  };
  if (controller_c1_lamp) {
    sub_148 = sub_149;
  } else {
    sub_148 = v_315;
  };
  if (controller_room_presence) {
    sub_147 = sub_148;
  } else {
    sub_147 = false;
  };
  if (controller_ck_9_1) {
    v_367 = sub_2;
    v_366 = sub_147;
  } else {
    v_367 = sub_147;
    v_366 = sub_2;
  };
  if (controller_push_door) {
    v_368 = v_366;
  } else {
    v_368 = v_367;
  };
  if (controller_c_door) {
    sub_1 = v_368;
  } else {
    sub_1 = sub_2;
  };
  if (controller_c1_lamp) {
    v_307 = sub_146;
    v_306 = sub_96;
  } else {
    v_307 = sub_97;
    v_306 = sub_97;
  };
  if (controller_lamp_switch) {
    v_308 = v_306;
  } else {
    v_308 = v_307;
  };
  sub_176 = sub_108;
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  sub_172 = sub_173;
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  if (controller_wash_end) {
    sub_195 = sub_116;
  } else {
    sub_195 = false;
  };
  if (controller_v_337) {
    sub_194 = false;
  } else {
    sub_194 = sub_195;
  };
  v_293 = !(controller_wash_start);
  sub_196 = (v_293||false);
  if (controller_v_337) {
    v_294 = sub_196;
  } else {
    v_294 = sub_115;
  };
  if (controller_v_336) {
    v_295 = v_294;
  } else {
    v_295 = sub_115;
  };
  if (controller_v_338) {
    sub_193 = v_295;
  } else {
    sub_193 = sub_194;
  };
  sub_192 = sub_193;
  sub_191 = sub_192;
  sub_190 = sub_191;
  if (controller_c_oven) {
    sub_189 = sub_190;
  } else {
    sub_189 = sub_112;
  };
  if (controller_wash_end) {
    v_291 = false;
  } else {
    v_291 = sub_116;
  };
  if (controller_v_337) {
    v_292 = v_291;
  } else {
    v_292 = sub_195;
  };
  if (controller_v_336) {
    sub_201 = v_292;
  } else {
    sub_201 = sub_115;
  };
  if (controller_v_338) {
    sub_200 = sub_115;
  } else {
    sub_200 = sub_201;
  };
  sub_199 = sub_200;
  if (controller_oven_temp_ok) {
    sub_198 = sub_114;
  } else {
    sub_198 = sub_199;
  };
  sub_197 = sub_198;
  if (controller_v_395) {
    sub_188 = sub_197;
  } else {
    sub_188 = sub_189;
  };
  sub_187 = sub_188;
  sub_202 = sub_190;
  if (controller_v_394) {
    sub_186 = sub_202;
  } else {
    sub_186 = sub_187;
  };
  if (controller_v_395) {
    v_290 = sub_202;
    v_289 = sub_202;
  } else {
    v_290 = sub_111;
    v_289 = sub_189;
  };
  if (controller_oven_start) {
    sub_203 = v_289;
  } else {
    sub_203 = v_290;
  };
  if (controller_oven_cold) {
    v_288 = sub_199;
  } else {
    v_288 = sub_113;
  };
  if (controller_c_oven) {
    sub_205 = v_288;
  } else {
    sub_205 = sub_112;
  };
  if (controller_oven_finish) {
    v_287 = sub_115;
  } else {
    v_287 = sub_193;
  };
  if (controller_oven_temp_ok) {
    sub_207 = sub_114;
  } else {
    sub_207 = v_287;
  };
  sub_206 = sub_207;
  if (controller_v_395) {
    sub_204 = sub_206;
  } else {
    sub_204 = sub_205;
  };
  if (controller_v_394) {
    v_296 = sub_204;
  } else {
    v_296 = sub_203;
  };
  if (controller_v_393) {
    v_297 = v_296;
  } else {
    v_297 = sub_186;
  };
  if (controller_comfort_input) {
    sub_185 = sub_110;
  } else {
    sub_185 = v_297;
  };
  sub_184 = sub_185;
  if (controller_c_window) {
    sub_208 = false;
  } else {
    sub_208 = sub_185;
  };
  if (controller_push_window) {
    v_298 = sub_208;
    sub_183 = sub_184;
  } else {
    v_298 = sub_184;
    sub_183 = sub_208;
  };
  if (controller_ck_11_1) {
    sub_182 = v_298;
  } else {
    sub_182 = sub_183;
  };
  if (controller_eco_input) {
    sub_181 = sub_106;
  } else {
    sub_181 = sub_182;
  };
  if (controller_v_292) {
    sub_209 = sub_182;
  } else {
    sub_209 = sub_106;
  };
  if (controller_v_293) {
    sub_180 = sub_209;
  } else {
    sub_180 = sub_181;
  };
  if (controller_c_oven) {
    sub_219 = false;
  } else {
    sub_219 = sub_112;
  };
  if (controller_oven_temp_ok) {
    sub_221 = sub_199;
  } else {
    sub_221 = sub_192;
  };
  sub_220 = sub_221;
  if (controller_v_395) {
    sub_218 = sub_220;
  } else {
    sub_218 = sub_219;
  };
  sub_217 = sub_218;
  if (controller_v_394) {
    sub_216 = false;
  } else {
    sub_216 = sub_217;
  };
  if (controller_v_395) {
    v_283 = false;
    v_282 = false;
  } else {
    v_283 = sub_111;
    v_282 = sub_219;
  };
  if (controller_oven_start) {
    sub_222 = v_282;
  } else {
    sub_222 = v_283;
  };
  if (controller_oven_finish) {
    sub_226 = sub_115;
  } else {
    sub_226 = sub_200;
  };
  sub_225 = sub_226;
  if (controller_oven_cold) {
    v_281 = sub_191;
  } else {
    v_281 = sub_225;
  };
  if (controller_c_oven) {
    sub_224 = v_281;
  } else {
    sub_224 = sub_225;
  };
  if (controller_oven_finish) {
    v_280 = sub_115;
  } else {
    v_280 = false;
  };
  if (controller_oven_temp_ok) {
    sub_228 = sub_226;
  } else {
    sub_228 = v_280;
  };
  sub_227 = sub_228;
  if (controller_v_395) {
    sub_223 = sub_227;
  } else {
    sub_223 = sub_224;
  };
  if (controller_v_394) {
    v_284 = sub_223;
  } else {
    v_284 = sub_222;
  };
  if (controller_v_393) {
    v_285 = v_284;
  } else {
    v_285 = sub_216;
  };
  if (controller_comfort_input) {
    sub_215 = sub_110;
  } else {
    sub_215 = v_285;
  };
  sub_214 = sub_215;
  if (controller_c_window) {
    sub_229 = false;
  } else {
    sub_229 = sub_215;
  };
  if (controller_push_window) {
    v_286 = sub_229;
    sub_213 = sub_214;
  } else {
    v_286 = sub_214;
    sub_213 = sub_229;
  };
  if (controller_ck_11_1) {
    sub_212 = v_286;
  } else {
    sub_212 = sub_213;
  };
  if (controller_eco_input) {
    sub_211 = sub_106;
  } else {
    sub_211 = sub_212;
  };
  if (controller_v_292) {
    sub_230 = sub_212;
  } else {
    sub_230 = sub_106;
  };
  if (controller_v_293) {
    sub_210 = sub_230;
  } else {
    sub_210 = sub_211;
  };
  if (controller_rad_down1) {
    v_299 = sub_180;
  } else {
    v_299 = sub_210;
  };
  sub_231 = sub_180;
  if (controller_rad_c1) {
    sub_179 = v_299;
  } else {
    sub_179 = sub_231;
  };
  sub_178 = sub_179;
  if (controller_v_427) {
    sub_177 = sub_178;
  } else {
    sub_177 = sub_171;
  };
  if (controller_rad_c2) {
    v_300 = sub_177;
  } else {
    v_300 = sub_170;
  };
  if (controller_rad_down2) {
    sub_168 = sub_169;
  } else {
    sub_168 = v_300;
  };
  if (controller_rad_down1) {
    sub_234 = sub_175;
  } else {
    sub_234 = sub_210;
  };
  if (controller_rad_c1) {
    v_276 = sub_231;
  } else {
    v_276 = sub_234;
  };
  if (controller_rad_up1) {
    v_277 = v_276;
  } else {
    v_277 = sub_234;
  };
  if (controller_rad_c1) {
    v_275 = sub_231;
  } else {
    v_275 = sub_174;
  };
  if (controller_rad_up1) {
    sub_235 = v_275;
  } else {
    sub_235 = sub_173;
  };
  if (controller_rad_c3) {
    sub_233 = v_277;
  } else {
    sub_233 = sub_235;
  };
  sub_238 = sub_210;
  sub_237 = sub_238;
  sub_236 = sub_237;
  if (controller_v_427) {
    v_278 = sub_236;
  } else {
    v_278 = sub_233;
  };
  sub_240 = sub_235;
  if (controller_rad_down1) {
    v_274 = sub_175;
  } else {
    v_274 = sub_180;
  };
  if (controller_rad_c1) {
    sub_242 = v_274;
  } else {
    sub_242 = sub_174;
  };
  sub_241 = sub_242;
  if (controller_v_427) {
    sub_239 = sub_241;
  } else {
    sub_239 = sub_240;
  };
  if (controller_rad_up2) {
    v_279 = v_278;
  } else {
    v_279 = sub_239;
  };
  if (controller_rad_c2) {
    sub_232 = v_279;
  } else {
    sub_232 = sub_239;
  };
  if (controller_v_426) {
    sub_167 = sub_232;
  } else {
    sub_167 = sub_168;
  };
  sub_166 = sub_167;
  if (controller_ck_17_1) {
    sub_243 = sub_167;
  } else {
    sub_243 = sub_6;
  };
  if (controller_c1_tv) {
    sub_165 = sub_166;
  } else {
    sub_165 = sub_243;
  };
  sub_244 = sub_166;
  if (controller_ck_15_1) {
    v_303 = sub_165;
    v_301 = sub_244;
  } else {
    v_303 = sub_244;
    v_301 = sub_165;
  };
  if (controller_ck_17_1) {
    sub_247 = sub_167;
  } else {
    sub_247 = false;
  };
  if (controller_c1_tv) {
    sub_246 = sub_166;
  } else {
    sub_246 = sub_247;
  };
  if (controller_ck_15_1) {
    sub_245 = sub_165;
  } else {
    sub_245 = sub_246;
  };
  if (controller_c1_lamp) {
    v_304 = v_303;
    v_302 = v_301;
  } else {
    v_304 = sub_245;
    v_302 = sub_245;
  };
  if (controller_lamp_switch) {
    v_305 = v_302;
  } else {
    v_305 = v_304;
  };
  if (controller_room_presence) {
    sub_164 = v_305;
  } else {
    sub_164 = v_308;
  };
  if (controller_v_427) {
    sub_253 = false;
  } else {
    sub_253 = sub_171;
  };
  if (controller_rad_c2) {
    v_268 = sub_253;
  } else {
    v_268 = sub_170;
  };
  if (controller_rad_down2) {
    sub_252 = sub_169;
  } else {
    sub_252 = v_268;
  };
  if (controller_rad_down1) {
    sub_256 = sub_175;
  } else {
    sub_256 = false;
  };
  if (controller_rad_c1) {
    v_264 = false;
  } else {
    v_264 = sub_256;
  };
  if (controller_rad_up1) {
    v_265 = v_264;
  } else {
    v_265 = sub_256;
  };
  if (controller_rad_c1) {
    v = false;
  } else {
    v = sub_174;
  };
  if (controller_rad_up1) {
    sub_257 = v;
  } else {
    sub_257 = sub_173;
  };
  if (controller_rad_c3) {
    sub_255 = v_265;
  } else {
    sub_255 = sub_257;
  };
  if (controller_v_427) {
    v_266 = false;
  } else {
    v_266 = sub_255;
  };
  sub_259 = sub_257;
  if (controller_rad_c1) {
    sub_261 = sub_256;
  } else {
    sub_261 = sub_174;
  };
  sub_260 = sub_261;
  if (controller_v_427) {
    sub_258 = sub_260;
  } else {
    sub_258 = sub_259;
  };
  if (controller_rad_up2) {
    v_267 = v_266;
  } else {
    v_267 = sub_258;
  };
  if (controller_rad_c2) {
    sub_254 = v_267;
  } else {
    sub_254 = sub_258;
  };
  if (controller_v_426) {
    sub_251 = sub_254;
  } else {
    sub_251 = sub_252;
  };
  sub_250 = sub_251;
  if (controller_ck_17_1) {
    sub_262 = sub_251;
  } else {
    sub_262 = sub_151;
  };
  if (controller_c1_tv) {
    sub_249 = sub_250;
  } else {
    sub_249 = sub_262;
  };
  sub_263 = sub_250;
  if (controller_ck_15_1) {
    v_271 = sub_249;
    v_269 = sub_263;
  } else {
    v_271 = sub_263;
    v_269 = sub_249;
  };
  if (controller_ck_17_1) {
    sub_266 = sub_251;
  } else {
    sub_266 = false;
  };
  if (controller_c1_tv) {
    sub_265 = sub_250;
  } else {
    sub_265 = sub_266;
  };
  if (controller_ck_15_1) {
    sub_264 = sub_249;
  } else {
    sub_264 = sub_265;
  };
  if (controller_c1_lamp) {
    v_272 = v_271;
    v_270 = v_269;
  } else {
    v_272 = sub_264;
    v_270 = sub_264;
  };
  if (controller_lamp_switch) {
    v_273 = v_270;
  } else {
    v_273 = v_272;
  };
  if (controller_room_presence) {
    sub_248 = v_273;
  } else {
    sub_248 = false;
  };
  if (controller_ck_9_1) {
    v_370 = sub_164;
    v_369 = sub_248;
  } else {
    v_370 = sub_248;
    v_369 = sub_164;
  };
  if (controller_push_door) {
    v_371 = v_369;
  } else {
    v_371 = v_370;
  };
  if (controller_c_door) {
    v_372 = v_371;
  } else {
    v_372 = sub_164;
  };
  if (p_controller_c2_lamp) {
    sub_0 = v_372;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c2_lamp = sub_0;;
}

void Controller_controller__controller_controller_controller_c1_tv_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door, int controller_c1_lamp,
  int controller_rad_c3, int controller_rad_c2, int controller_rad_c1,
  int controller_c_oven, int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_c1_tv_out* _out) {
  
  int v_471;
  int v_470;
  int v_469;
  int v_468;
  int v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int v_450;
  int v_449;
  int v_448;
  int v_447;
  int v_446;
  int v_445;
  int v_444;
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
  int v_407;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
  int v_385;
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  sub_23 = false;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  if (controller_c_window) {
    sub_31 = false;
  } else {
    sub_31 = sub_16;
  };
  if (controller_push_window) {
    v_456 = sub_31;
    sub_30 = sub_15;
  } else {
    v_456 = sub_15;
    sub_30 = sub_31;
  };
  if (controller_ck_11_1) {
    sub_29 = v_456;
  } else {
    sub_29 = sub_30;
  };
  if (controller_wash_end) {
    sub_45 = sub_23;
  } else {
    sub_45 = false;
  };
  if (controller_v_337) {
    sub_44 = false;
  } else {
    sub_44 = sub_45;
  };
  sub_46 = (controller_wash_start&&false);
  if (controller_v_337) {
    v_451 = sub_46;
  } else {
    v_451 = sub_22;
  };
  if (controller_v_336) {
    v_452 = v_451;
  } else {
    v_452 = sub_22;
  };
  if (controller_v_338) {
    sub_43 = v_452;
  } else {
    sub_43 = sub_44;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  if (controller_c_oven) {
    sub_39 = sub_40;
  } else {
    sub_39 = sub_19;
  };
  if (controller_wash_end) {
    v_449 = false;
  } else {
    v_449 = sub_23;
  };
  if (controller_v_337) {
    v_450 = v_449;
  } else {
    v_450 = sub_45;
  };
  if (controller_v_336) {
    sub_51 = v_450;
  } else {
    sub_51 = sub_22;
  };
  if (controller_v_338) {
    sub_50 = sub_22;
  } else {
    sub_50 = sub_51;
  };
  sub_49 = sub_50;
  if (controller_oven_temp_ok) {
    sub_48 = sub_21;
  } else {
    sub_48 = sub_49;
  };
  sub_47 = sub_48;
  if (controller_v_395) {
    sub_38 = sub_47;
  } else {
    sub_38 = sub_39;
  };
  sub_37 = sub_38;
  sub_52 = sub_40;
  if (controller_v_394) {
    sub_36 = sub_52;
  } else {
    sub_36 = sub_37;
  };
  if (controller_v_395) {
    v_448 = sub_52;
    v_447 = sub_52;
  } else {
    v_448 = sub_18;
    v_447 = sub_39;
  };
  if (controller_oven_start) {
    sub_53 = v_447;
  } else {
    sub_53 = v_448;
  };
  if (controller_oven_cold) {
    v_446 = sub_49;
  } else {
    v_446 = sub_20;
  };
  if (controller_c_oven) {
    sub_55 = v_446;
  } else {
    sub_55 = sub_19;
  };
  if (controller_oven_finish) {
    v_445 = sub_22;
  } else {
    v_445 = sub_43;
  };
  if (controller_oven_temp_ok) {
    sub_57 = sub_21;
  } else {
    sub_57 = v_445;
  };
  sub_56 = sub_57;
  if (controller_v_395) {
    sub_54 = sub_56;
  } else {
    sub_54 = sub_55;
  };
  if (controller_v_394) {
    v_453 = sub_54;
  } else {
    v_453 = sub_53;
  };
  if (controller_v_393) {
    v_454 = v_453;
  } else {
    v_454 = sub_36;
  };
  if (controller_comfort_input) {
    sub_35 = sub_17;
  } else {
    sub_35 = v_454;
  };
  sub_34 = sub_35;
  if (controller_c_window) {
    sub_58 = false;
  } else {
    sub_58 = sub_35;
  };
  if (controller_push_window) {
    v_455 = sub_58;
    sub_33 = sub_34;
  } else {
    v_455 = sub_34;
    sub_33 = sub_58;
  };
  if (controller_ck_11_1) {
    sub_32 = v_455;
  } else {
    sub_32 = sub_33;
  };
  if (controller_eco_input) {
    sub_28 = sub_29;
  } else {
    sub_28 = sub_32;
  };
  if (controller_v_292) {
    sub_59 = sub_32;
  } else {
    sub_59 = sub_29;
  };
  if (controller_v_293) {
    sub_27 = sub_59;
  } else {
    sub_27 = sub_28;
  };
  if (controller_c_oven) {
    sub_69 = false;
  } else {
    sub_69 = sub_19;
  };
  if (controller_oven_temp_ok) {
    sub_71 = sub_49;
  } else {
    sub_71 = sub_42;
  };
  sub_70 = sub_71;
  if (controller_v_395) {
    sub_68 = sub_70;
  } else {
    sub_68 = sub_69;
  };
  sub_67 = sub_68;
  if (controller_v_394) {
    sub_66 = false;
  } else {
    sub_66 = sub_67;
  };
  if (controller_v_395) {
    v_441 = false;
    v_440 = false;
  } else {
    v_441 = sub_18;
    v_440 = sub_69;
  };
  if (controller_oven_start) {
    sub_72 = v_440;
  } else {
    sub_72 = v_441;
  };
  if (controller_oven_finish) {
    sub_76 = sub_22;
  } else {
    sub_76 = sub_50;
  };
  sub_75 = sub_76;
  if (controller_oven_cold) {
    v_439 = sub_41;
  } else {
    v_439 = sub_75;
  };
  if (controller_c_oven) {
    sub_74 = v_439;
  } else {
    sub_74 = sub_75;
  };
  if (controller_oven_finish) {
    v_438 = sub_22;
  } else {
    v_438 = false;
  };
  if (controller_oven_temp_ok) {
    sub_78 = sub_76;
  } else {
    sub_78 = v_438;
  };
  sub_77 = sub_78;
  if (controller_v_395) {
    sub_73 = sub_77;
  } else {
    sub_73 = sub_74;
  };
  if (controller_v_394) {
    v_442 = sub_73;
  } else {
    v_442 = sub_72;
  };
  if (controller_v_393) {
    v_443 = v_442;
  } else {
    v_443 = sub_66;
  };
  if (controller_comfort_input) {
    sub_65 = sub_17;
  } else {
    sub_65 = v_443;
  };
  sub_64 = sub_65;
  if (controller_c_window) {
    sub_79 = false;
  } else {
    sub_79 = sub_65;
  };
  if (controller_push_window) {
    v_444 = sub_79;
    sub_63 = sub_64;
  } else {
    v_444 = sub_64;
    sub_63 = sub_79;
  };
  if (controller_ck_11_1) {
    sub_62 = v_444;
  } else {
    sub_62 = sub_63;
  };
  if (controller_eco_input) {
    sub_61 = sub_29;
  } else {
    sub_61 = sub_62;
  };
  if (controller_v_292) {
    sub_80 = sub_62;
  } else {
    sub_80 = sub_29;
  };
  if (controller_v_293) {
    sub_60 = sub_80;
  } else {
    sub_60 = sub_61;
  };
  if (controller_rad_down1) {
    v_457 = sub_27;
  } else {
    v_457 = sub_60;
  };
  sub_81 = sub_27;
  if (controller_rad_c1) {
    sub_26 = v_457;
  } else {
    sub_26 = sub_81;
  };
  sub_25 = sub_26;
  if (controller_v_427) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_9;
  };
  if (controller_rad_c2) {
    v_458 = sub_24;
  } else {
    v_458 = sub_8;
  };
  if (controller_rad_down2) {
    sub_6 = sub_7;
  } else {
    sub_6 = v_458;
  };
  if (controller_rad_down1) {
    sub_84 = sub_13;
  } else {
    sub_84 = sub_60;
  };
  if (controller_rad_c1) {
    v_434 = sub_81;
  } else {
    v_434 = sub_84;
  };
  if (controller_rad_up1) {
    v_435 = v_434;
  } else {
    v_435 = sub_84;
  };
  if (controller_rad_c1) {
    v_433 = sub_81;
  } else {
    v_433 = sub_12;
  };
  if (controller_rad_up1) {
    sub_85 = v_433;
  } else {
    sub_85 = sub_11;
  };
  if (controller_rad_c3) {
    sub_83 = v_435;
  } else {
    sub_83 = sub_85;
  };
  sub_88 = sub_60;
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (controller_v_427) {
    v_436 = sub_86;
  } else {
    v_436 = sub_83;
  };
  sub_90 = sub_85;
  if (controller_rad_down1) {
    v_432 = sub_13;
  } else {
    v_432 = sub_27;
  };
  if (controller_rad_c1) {
    sub_92 = v_432;
  } else {
    sub_92 = sub_12;
  };
  sub_91 = sub_92;
  if (controller_v_427) {
    sub_89 = sub_91;
  } else {
    sub_89 = sub_90;
  };
  if (controller_rad_up2) {
    v_437 = v_436;
  } else {
    v_437 = sub_89;
  };
  if (controller_rad_c2) {
    sub_82 = v_437;
  } else {
    sub_82 = sub_89;
  };
  if (controller_v_426) {
    sub_5 = sub_82;
  } else {
    sub_5 = sub_6;
  };
  sub_4 = sub_5;
  sub_113 = true;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  if (controller_c_window) {
    sub_121 = false;
  } else {
    sub_121 = sub_106;
  };
  if (controller_push_window) {
    v_429 = sub_121;
    sub_120 = sub_105;
  } else {
    v_429 = sub_105;
    sub_120 = sub_121;
  };
  if (controller_ck_11_1) {
    sub_119 = v_429;
  } else {
    sub_119 = sub_120;
  };
  if (controller_wash_end) {
    sub_135 = sub_113;
  } else {
    sub_135 = false;
  };
  if (controller_v_337) {
    sub_134 = false;
  } else {
    sub_134 = sub_135;
  };
  v_423 = !(controller_wash_start);
  sub_136 = (v_423||false);
  if (controller_v_337) {
    v_424 = sub_136;
  } else {
    v_424 = sub_112;
  };
  if (controller_v_336) {
    v_425 = v_424;
  } else {
    v_425 = sub_112;
  };
  if (controller_v_338) {
    sub_133 = v_425;
  } else {
    sub_133 = sub_134;
  };
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  if (controller_c_oven) {
    sub_129 = sub_130;
  } else {
    sub_129 = sub_109;
  };
  if (controller_wash_end) {
    v_421 = false;
  } else {
    v_421 = sub_113;
  };
  if (controller_v_337) {
    v_422 = v_421;
  } else {
    v_422 = sub_135;
  };
  if (controller_v_336) {
    sub_141 = v_422;
  } else {
    sub_141 = sub_112;
  };
  if (controller_v_338) {
    sub_140 = sub_112;
  } else {
    sub_140 = sub_141;
  };
  sub_139 = sub_140;
  if (controller_oven_temp_ok) {
    sub_138 = sub_111;
  } else {
    sub_138 = sub_139;
  };
  sub_137 = sub_138;
  if (controller_v_395) {
    sub_128 = sub_137;
  } else {
    sub_128 = sub_129;
  };
  sub_127 = sub_128;
  sub_142 = sub_130;
  if (controller_v_394) {
    sub_126 = sub_142;
  } else {
    sub_126 = sub_127;
  };
  if (controller_v_395) {
    v_420 = sub_142;
    v_419 = sub_142;
  } else {
    v_420 = sub_108;
    v_419 = sub_129;
  };
  if (controller_oven_start) {
    sub_143 = v_419;
  } else {
    sub_143 = v_420;
  };
  if (controller_oven_cold) {
    v_418 = sub_139;
  } else {
    v_418 = sub_110;
  };
  if (controller_c_oven) {
    sub_145 = v_418;
  } else {
    sub_145 = sub_109;
  };
  if (controller_oven_finish) {
    v_417 = sub_112;
  } else {
    v_417 = sub_133;
  };
  if (controller_oven_temp_ok) {
    sub_147 = sub_111;
  } else {
    sub_147 = v_417;
  };
  sub_146 = sub_147;
  if (controller_v_395) {
    sub_144 = sub_146;
  } else {
    sub_144 = sub_145;
  };
  if (controller_v_394) {
    v_426 = sub_144;
  } else {
    v_426 = sub_143;
  };
  if (controller_v_393) {
    v_427 = v_426;
  } else {
    v_427 = sub_126;
  };
  if (controller_comfort_input) {
    sub_125 = sub_107;
  } else {
    sub_125 = v_427;
  };
  sub_124 = sub_125;
  if (controller_c_window) {
    sub_148 = false;
  } else {
    sub_148 = sub_125;
  };
  if (controller_push_window) {
    v_428 = sub_148;
    sub_123 = sub_124;
  } else {
    v_428 = sub_124;
    sub_123 = sub_148;
  };
  if (controller_ck_11_1) {
    sub_122 = v_428;
  } else {
    sub_122 = sub_123;
  };
  if (controller_eco_input) {
    sub_118 = sub_119;
  } else {
    sub_118 = sub_122;
  };
  if (controller_v_292) {
    sub_149 = sub_122;
  } else {
    sub_149 = sub_119;
  };
  if (controller_v_293) {
    sub_117 = sub_149;
  } else {
    sub_117 = sub_118;
  };
  if (controller_c_oven) {
    sub_159 = false;
  } else {
    sub_159 = sub_109;
  };
  if (controller_oven_temp_ok) {
    sub_161 = sub_139;
  } else {
    sub_161 = sub_132;
  };
  sub_160 = sub_161;
  if (controller_v_395) {
    sub_158 = sub_160;
  } else {
    sub_158 = sub_159;
  };
  sub_157 = sub_158;
  if (controller_v_394) {
    sub_156 = false;
  } else {
    sub_156 = sub_157;
  };
  if (controller_v_395) {
    v_413 = false;
    v_412 = false;
  } else {
    v_413 = sub_108;
    v_412 = sub_159;
  };
  if (controller_oven_start) {
    sub_162 = v_412;
  } else {
    sub_162 = v_413;
  };
  if (controller_oven_finish) {
    sub_166 = sub_112;
  } else {
    sub_166 = sub_140;
  };
  sub_165 = sub_166;
  if (controller_oven_cold) {
    v_411 = sub_131;
  } else {
    v_411 = sub_165;
  };
  if (controller_c_oven) {
    sub_164 = v_411;
  } else {
    sub_164 = sub_165;
  };
  if (controller_oven_finish) {
    v_410 = sub_112;
  } else {
    v_410 = false;
  };
  if (controller_oven_temp_ok) {
    sub_168 = sub_166;
  } else {
    sub_168 = v_410;
  };
  sub_167 = sub_168;
  if (controller_v_395) {
    sub_163 = sub_167;
  } else {
    sub_163 = sub_164;
  };
  if (controller_v_394) {
    v_414 = sub_163;
  } else {
    v_414 = sub_162;
  };
  if (controller_v_393) {
    v_415 = v_414;
  } else {
    v_415 = sub_156;
  };
  if (controller_comfort_input) {
    sub_155 = sub_107;
  } else {
    sub_155 = v_415;
  };
  sub_154 = sub_155;
  if (controller_c_window) {
    sub_169 = false;
  } else {
    sub_169 = sub_155;
  };
  if (controller_push_window) {
    v_416 = sub_169;
    sub_153 = sub_154;
  } else {
    v_416 = sub_154;
    sub_153 = sub_169;
  };
  if (controller_ck_11_1) {
    sub_152 = v_416;
  } else {
    sub_152 = sub_153;
  };
  if (controller_eco_input) {
    sub_151 = sub_119;
  } else {
    sub_151 = sub_152;
  };
  if (controller_v_292) {
    sub_170 = sub_152;
  } else {
    sub_170 = sub_119;
  };
  if (controller_v_293) {
    sub_150 = sub_170;
  } else {
    sub_150 = sub_151;
  };
  if (controller_rad_down1) {
    v_430 = sub_117;
  } else {
    v_430 = sub_150;
  };
  sub_171 = sub_117;
  if (controller_rad_c1) {
    sub_116 = v_430;
  } else {
    sub_116 = sub_171;
  };
  sub_115 = sub_116;
  if (controller_v_427) {
    sub_114 = sub_115;
  } else {
    sub_114 = sub_99;
  };
  if (controller_rad_c2) {
    v_431 = sub_114;
  } else {
    v_431 = sub_98;
  };
  if (controller_rad_down2) {
    sub_96 = sub_97;
  } else {
    sub_96 = v_431;
  };
  if (controller_rad_down1) {
    sub_174 = sub_103;
  } else {
    sub_174 = sub_150;
  };
  if (controller_rad_c1) {
    v_406 = sub_171;
  } else {
    v_406 = sub_174;
  };
  if (controller_rad_up1) {
    v_407 = v_406;
  } else {
    v_407 = sub_174;
  };
  if (controller_rad_c1) {
    v_405 = sub_171;
  } else {
    v_405 = sub_102;
  };
  if (controller_rad_up1) {
    sub_175 = v_405;
  } else {
    sub_175 = sub_101;
  };
  if (controller_rad_c3) {
    sub_173 = v_407;
  } else {
    sub_173 = sub_175;
  };
  sub_178 = sub_150;
  sub_177 = sub_178;
  sub_176 = sub_177;
  if (controller_v_427) {
    v_408 = sub_176;
  } else {
    v_408 = sub_173;
  };
  sub_180 = sub_175;
  if (controller_rad_down1) {
    v_404 = sub_103;
  } else {
    v_404 = sub_117;
  };
  if (controller_rad_c1) {
    sub_182 = v_404;
  } else {
    sub_182 = sub_102;
  };
  sub_181 = sub_182;
  if (controller_v_427) {
    sub_179 = sub_181;
  } else {
    sub_179 = sub_180;
  };
  if (controller_rad_up2) {
    v_409 = v_408;
  } else {
    v_409 = sub_179;
  };
  if (controller_rad_c2) {
    sub_172 = v_409;
  } else {
    sub_172 = sub_179;
  };
  if (controller_v_426) {
    sub_95 = sub_172;
  } else {
    sub_95 = sub_96;
  };
  if (controller_ck_17_1) {
    sub_94 = sub_5;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  if (controller_ck_15_1) {
    v_459 = sub_4;
  } else {
    v_459 = sub_93;
  };
  if (controller_c1_lamp) {
    sub_3 = sub_4;
  } else {
    sub_3 = v_459;
  };
  sub_191 = sub_29;
  sub_190 = sub_191;
  sub_189 = sub_190;
  sub_188 = sub_189;
  sub_187 = sub_188;
  sub_186 = sub_187;
  if (controller_v_427) {
    sub_192 = false;
  } else {
    sub_192 = sub_187;
  };
  if (controller_rad_c2) {
    v_403 = sub_192;
  } else {
    v_403 = sub_186;
  };
  if (controller_rad_down2) {
    sub_185 = sub_186;
  } else {
    sub_185 = v_403;
  };
  if (controller_rad_down1) {
    sub_195 = sub_191;
  } else {
    sub_195 = false;
  };
  if (controller_rad_c1) {
    v_399 = false;
  } else {
    v_399 = sub_195;
  };
  if (controller_rad_up1) {
    v_400 = v_399;
  } else {
    v_400 = sub_195;
  };
  if (controller_rad_c1) {
    v_398 = false;
  } else {
    v_398 = sub_190;
  };
  if (controller_rad_up1) {
    sub_196 = v_398;
  } else {
    sub_196 = sub_189;
  };
  if (controller_rad_c3) {
    sub_194 = v_400;
  } else {
    sub_194 = sub_196;
  };
  if (controller_v_427) {
    v_401 = false;
  } else {
    v_401 = sub_194;
  };
  sub_198 = sub_196;
  if (controller_rad_c1) {
    sub_200 = sub_195;
  } else {
    sub_200 = sub_190;
  };
  sub_199 = sub_200;
  if (controller_v_427) {
    sub_197 = sub_199;
  } else {
    sub_197 = sub_198;
  };
  if (controller_rad_up2) {
    v_402 = v_401;
  } else {
    v_402 = sub_197;
  };
  if (controller_rad_c2) {
    sub_193 = v_402;
  } else {
    sub_193 = sub_197;
  };
  if (controller_v_426) {
    sub_184 = sub_193;
  } else {
    sub_184 = sub_185;
  };
  sub_183 = sub_184;
  if (controller_ck_15_1) {
    v_462 = sub_183;
  } else {
    v_462 = false;
  };
  if (controller_c1_lamp) {
    v_463 = v_462;
  } else {
    v_463 = sub_183;
  };
  if (controller_ck_15_1) {
    v_460 = false;
  } else {
    v_460 = sub_183;
  };
  if (controller_c1_lamp) {
    v_461 = v_460;
  } else {
    v_461 = sub_183;
  };
  if (controller_lamp_switch) {
    v_464 = v_461;
  } else {
    v_464 = v_463;
  };
  if (controller_room_presence) {
    sub_2 = sub_3;
  } else {
    sub_2 = v_464;
  };
  if (controller_v_427) {
    sub_206 = false;
  } else {
    sub_206 = sub_9;
  };
  if (controller_rad_c2) {
    v_396 = sub_206;
  } else {
    v_396 = sub_8;
  };
  if (controller_rad_down2) {
    sub_205 = sub_7;
  } else {
    sub_205 = v_396;
  };
  if (controller_rad_down1) {
    sub_209 = sub_13;
  } else {
    sub_209 = false;
  };
  if (controller_rad_c1) {
    v_392 = false;
  } else {
    v_392 = sub_209;
  };
  if (controller_rad_up1) {
    v_393 = v_392;
  } else {
    v_393 = sub_209;
  };
  if (controller_rad_c1) {
    v_391 = false;
  } else {
    v_391 = sub_12;
  };
  if (controller_rad_up1) {
    sub_210 = v_391;
  } else {
    sub_210 = sub_11;
  };
  if (controller_rad_c3) {
    sub_208 = v_393;
  } else {
    sub_208 = sub_210;
  };
  if (controller_v_427) {
    v_394 = false;
  } else {
    v_394 = sub_208;
  };
  sub_212 = sub_210;
  if (controller_rad_c1) {
    sub_214 = sub_209;
  } else {
    sub_214 = sub_12;
  };
  sub_213 = sub_214;
  if (controller_v_427) {
    sub_211 = sub_213;
  } else {
    sub_211 = sub_212;
  };
  if (controller_rad_up2) {
    v_395 = v_394;
  } else {
    v_395 = sub_211;
  };
  if (controller_rad_c2) {
    sub_207 = v_395;
  } else {
    sub_207 = sub_211;
  };
  if (controller_v_426) {
    sub_204 = sub_207;
  } else {
    sub_204 = sub_205;
  };
  sub_203 = sub_204;
  if (controller_v_427) {
    sub_219 = false;
  } else {
    sub_219 = sub_99;
  };
  if (controller_rad_c2) {
    v_390 = sub_219;
  } else {
    v_390 = sub_98;
  };
  if (controller_rad_down2) {
    sub_218 = sub_97;
  } else {
    sub_218 = v_390;
  };
  if (controller_rad_down1) {
    sub_222 = sub_103;
  } else {
    sub_222 = false;
  };
  if (controller_rad_c1) {
    v_386 = false;
  } else {
    v_386 = sub_222;
  };
  if (controller_rad_up1) {
    v_387 = v_386;
  } else {
    v_387 = sub_222;
  };
  if (controller_rad_c1) {
    v_385 = false;
  } else {
    v_385 = sub_102;
  };
  if (controller_rad_up1) {
    sub_223 = v_385;
  } else {
    sub_223 = sub_101;
  };
  if (controller_rad_c3) {
    sub_221 = v_387;
  } else {
    sub_221 = sub_223;
  };
  if (controller_v_427) {
    v_388 = false;
  } else {
    v_388 = sub_221;
  };
  sub_225 = sub_223;
  if (controller_rad_c1) {
    sub_227 = sub_222;
  } else {
    sub_227 = sub_102;
  };
  sub_226 = sub_227;
  if (controller_v_427) {
    sub_224 = sub_226;
  } else {
    sub_224 = sub_225;
  };
  if (controller_rad_up2) {
    v_389 = v_388;
  } else {
    v_389 = sub_224;
  };
  if (controller_rad_c2) {
    sub_220 = v_389;
  } else {
    sub_220 = sub_224;
  };
  if (controller_v_426) {
    sub_217 = sub_220;
  } else {
    sub_217 = sub_218;
  };
  if (controller_ck_17_1) {
    sub_216 = sub_204;
  } else {
    sub_216 = sub_217;
  };
  sub_215 = sub_216;
  if (controller_ck_15_1) {
    v_397 = sub_203;
  } else {
    v_397 = sub_215;
  };
  if (controller_c1_lamp) {
    sub_202 = sub_203;
  } else {
    sub_202 = v_397;
  };
  if (controller_room_presence) {
    sub_201 = sub_202;
  } else {
    sub_201 = false;
  };
  if (controller_ck_9_1) {
    v_466 = sub_2;
    v_465 = sub_201;
  } else {
    v_466 = sub_201;
    v_465 = sub_2;
  };
  if (controller_push_door) {
    v_467 = v_465;
  } else {
    v_467 = v_466;
  };
  if (controller_c_door) {
    sub_1 = v_467;
  } else {
    sub_1 = sub_2;
  };
  sub_230 = sub_95;
  sub_229 = sub_230;
  sub_239 = sub_119;
  sub_238 = sub_239;
  sub_237 = sub_238;
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  if (controller_v_427) {
    sub_240 = false;
  } else {
    sub_240 = sub_235;
  };
  if (controller_rad_c2) {
    v_377 = sub_240;
  } else {
    v_377 = sub_234;
  };
  if (controller_rad_down2) {
    sub_233 = sub_234;
  } else {
    sub_233 = v_377;
  };
  if (controller_rad_down1) {
    sub_243 = sub_239;
  } else {
    sub_243 = false;
  };
  if (controller_rad_c1) {
    v_373 = false;
  } else {
    v_373 = sub_243;
  };
  if (controller_rad_up1) {
    v_374 = v_373;
  } else {
    v_374 = sub_243;
  };
  if (controller_rad_c1) {
    v = false;
  } else {
    v = sub_238;
  };
  if (controller_rad_up1) {
    sub_244 = v;
  } else {
    sub_244 = sub_237;
  };
  if (controller_rad_c3) {
    sub_242 = v_374;
  } else {
    sub_242 = sub_244;
  };
  if (controller_v_427) {
    v_375 = false;
  } else {
    v_375 = sub_242;
  };
  sub_246 = sub_244;
  if (controller_rad_c1) {
    sub_248 = sub_243;
  } else {
    sub_248 = sub_238;
  };
  sub_247 = sub_248;
  if (controller_v_427) {
    sub_245 = sub_247;
  } else {
    sub_245 = sub_246;
  };
  if (controller_rad_up2) {
    v_376 = v_375;
  } else {
    v_376 = sub_245;
  };
  if (controller_rad_c2) {
    sub_241 = v_376;
  } else {
    sub_241 = sub_245;
  };
  if (controller_v_426) {
    sub_232 = sub_241;
  } else {
    sub_232 = sub_233;
  };
  if (controller_ck_17_1) {
    v_379 = sub_232;
    v_378 = sub_184;
  } else {
    v_379 = sub_184;
    v_378 = sub_232;
  };
  if (controller_tv_switch) {
    sub_231 = v_378;
  } else {
    sub_231 = v_379;
  };
  if (controller_ck_15_1) {
    v_382 = sub_231;
  } else {
    v_382 = false;
  };
  if (controller_c1_lamp) {
    v_383 = v_382;
  } else {
    v_383 = sub_231;
  };
  if (controller_ck_15_1) {
    v_380 = false;
  } else {
    v_380 = sub_231;
  };
  if (controller_c1_lamp) {
    v_381 = v_380;
  } else {
    v_381 = sub_231;
  };
  if (controller_lamp_switch) {
    v_384 = v_381;
  } else {
    v_384 = v_383;
  };
  if (controller_room_presence) {
    sub_228 = sub_229;
  } else {
    sub_228 = v_384;
  };
  sub_251 = sub_217;
  sub_250 = sub_251;
  if (controller_room_presence) {
    sub_249 = sub_250;
  } else {
    sub_249 = false;
  };
  if (controller_ck_9_1) {
    v_469 = sub_228;
    v_468 = sub_249;
  } else {
    v_469 = sub_249;
    v_468 = sub_228;
  };
  if (controller_push_door) {
    v_470 = v_468;
  } else {
    v_470 = v_469;
  };
  if (controller_c_door) {
    v_471 = v_470;
  } else {
    v_471 = sub_228;
  };
  if (p_controller_c1_tv) {
    sub_0 = v_471;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c1_tv = sub_0;;
}

void Controller_controller__controller_controller_controller_c1_lamp_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door, int controller_rad_c3,
  int controller_rad_c2, int controller_rad_c1, int controller_c_oven,
  int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_c1_lamp_out* _out) {
  
  int v_559;
  int v_558;
  int v_557;
  int v_556;
  int v_555;
  int v_554;
  int v_553;
  int v_552;
  int v_551;
  int v_550;
  int v_549;
  int v_548;
  int v_547;
  int v_546;
  int v_545;
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int v_540;
  int v_539;
  int v_538;
  int v_537;
  int v_536;
  int v_535;
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int v_528;
  int v_527;
  int v_526;
  int v_525;
  int v_524;
  int v_523;
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v_508;
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_499;
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_484;
  int v_483;
  int v_482;
  int v_481;
  int v_480;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  sub_22 = false;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_c_window) {
    sub_30 = false;
  } else {
    sub_30 = sub_15;
  };
  if (controller_push_window) {
    v_550 = sub_30;
    sub_29 = sub_14;
  } else {
    v_550 = sub_14;
    sub_29 = sub_30;
  };
  if (controller_ck_11_1) {
    sub_28 = v_550;
  } else {
    sub_28 = sub_29;
  };
  if (controller_wash_end) {
    sub_44 = sub_22;
  } else {
    sub_44 = false;
  };
  if (controller_v_337) {
    sub_43 = false;
  } else {
    sub_43 = sub_44;
  };
  sub_45 = (controller_wash_start&&false);
  if (controller_v_337) {
    v_545 = sub_45;
  } else {
    v_545 = sub_21;
  };
  if (controller_v_336) {
    v_546 = v_545;
  } else {
    v_546 = sub_21;
  };
  if (controller_v_338) {
    sub_42 = v_546;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (controller_c_oven) {
    sub_38 = sub_39;
  } else {
    sub_38 = sub_18;
  };
  if (controller_wash_end) {
    v_543 = false;
  } else {
    v_543 = sub_22;
  };
  if (controller_v_337) {
    v_544 = v_543;
  } else {
    v_544 = sub_44;
  };
  if (controller_v_336) {
    sub_50 = v_544;
  } else {
    sub_50 = sub_21;
  };
  if (controller_v_338) {
    sub_49 = sub_21;
  } else {
    sub_49 = sub_50;
  };
  sub_48 = sub_49;
  if (controller_oven_temp_ok) {
    sub_47 = sub_20;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  if (controller_v_395) {
    sub_37 = sub_46;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_51 = sub_39;
  if (controller_v_394) {
    sub_35 = sub_51;
  } else {
    sub_35 = sub_36;
  };
  if (controller_v_395) {
    v_542 = sub_51;
    v_541 = sub_51;
  } else {
    v_542 = sub_17;
    v_541 = sub_38;
  };
  if (controller_oven_start) {
    sub_52 = v_541;
  } else {
    sub_52 = v_542;
  };
  if (controller_oven_cold) {
    v_540 = sub_48;
  } else {
    v_540 = sub_19;
  };
  if (controller_c_oven) {
    sub_54 = v_540;
  } else {
    sub_54 = sub_18;
  };
  if (controller_oven_finish) {
    v_539 = sub_21;
  } else {
    v_539 = sub_42;
  };
  if (controller_oven_temp_ok) {
    sub_56 = sub_20;
  } else {
    sub_56 = v_539;
  };
  sub_55 = sub_56;
  if (controller_v_395) {
    sub_53 = sub_55;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_394) {
    v_547 = sub_53;
  } else {
    v_547 = sub_52;
  };
  if (controller_v_393) {
    v_548 = v_547;
  } else {
    v_548 = sub_35;
  };
  if (controller_comfort_input) {
    sub_34 = sub_16;
  } else {
    sub_34 = v_548;
  };
  sub_33 = sub_34;
  if (controller_c_window) {
    sub_57 = false;
  } else {
    sub_57 = sub_34;
  };
  if (controller_push_window) {
    v_549 = sub_57;
    sub_32 = sub_33;
  } else {
    v_549 = sub_33;
    sub_32 = sub_57;
  };
  if (controller_ck_11_1) {
    sub_31 = v_549;
  } else {
    sub_31 = sub_32;
  };
  if (controller_eco_input) {
    sub_27 = sub_28;
  } else {
    sub_27 = sub_31;
  };
  if (controller_v_292) {
    sub_58 = sub_31;
  } else {
    sub_58 = sub_28;
  };
  if (controller_v_293) {
    sub_26 = sub_58;
  } else {
    sub_26 = sub_27;
  };
  if (controller_c_oven) {
    sub_68 = false;
  } else {
    sub_68 = sub_18;
  };
  if (controller_oven_temp_ok) {
    sub_70 = sub_48;
  } else {
    sub_70 = sub_41;
  };
  sub_69 = sub_70;
  if (controller_v_395) {
    sub_67 = sub_69;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  if (controller_v_394) {
    sub_65 = false;
  } else {
    sub_65 = sub_66;
  };
  if (controller_v_395) {
    v_535 = false;
    v_534 = false;
  } else {
    v_535 = sub_17;
    v_534 = sub_68;
  };
  if (controller_oven_start) {
    sub_71 = v_534;
  } else {
    sub_71 = v_535;
  };
  if (controller_oven_finish) {
    sub_75 = sub_21;
  } else {
    sub_75 = sub_49;
  };
  sub_74 = sub_75;
  if (controller_oven_cold) {
    v_533 = sub_40;
  } else {
    v_533 = sub_74;
  };
  if (controller_c_oven) {
    sub_73 = v_533;
  } else {
    sub_73 = sub_74;
  };
  if (controller_oven_finish) {
    v_532 = sub_21;
  } else {
    v_532 = false;
  };
  if (controller_oven_temp_ok) {
    sub_77 = sub_75;
  } else {
    sub_77 = v_532;
  };
  sub_76 = sub_77;
  if (controller_v_395) {
    sub_72 = sub_76;
  } else {
    sub_72 = sub_73;
  };
  if (controller_v_394) {
    v_536 = sub_72;
  } else {
    v_536 = sub_71;
  };
  if (controller_v_393) {
    v_537 = v_536;
  } else {
    v_537 = sub_65;
  };
  if (controller_comfort_input) {
    sub_64 = sub_16;
  } else {
    sub_64 = v_537;
  };
  sub_63 = sub_64;
  if (controller_c_window) {
    sub_78 = false;
  } else {
    sub_78 = sub_64;
  };
  if (controller_push_window) {
    v_538 = sub_78;
    sub_62 = sub_63;
  } else {
    v_538 = sub_63;
    sub_62 = sub_78;
  };
  if (controller_ck_11_1) {
    sub_61 = v_538;
  } else {
    sub_61 = sub_62;
  };
  if (controller_eco_input) {
    sub_60 = sub_28;
  } else {
    sub_60 = sub_61;
  };
  if (controller_v_292) {
    sub_79 = sub_61;
  } else {
    sub_79 = sub_28;
  };
  if (controller_v_293) {
    sub_59 = sub_79;
  } else {
    sub_59 = sub_60;
  };
  if (controller_rad_down1) {
    v_551 = sub_26;
  } else {
    v_551 = sub_59;
  };
  sub_80 = sub_26;
  if (controller_rad_c1) {
    sub_25 = v_551;
  } else {
    sub_25 = sub_80;
  };
  sub_24 = sub_25;
  if (controller_v_427) {
    sub_23 = sub_24;
  } else {
    sub_23 = sub_8;
  };
  if (controller_rad_c2) {
    v_552 = sub_23;
  } else {
    v_552 = sub_7;
  };
  if (controller_rad_down2) {
    sub_5 = sub_6;
  } else {
    sub_5 = v_552;
  };
  if (controller_rad_down1) {
    sub_83 = sub_12;
  } else {
    sub_83 = sub_59;
  };
  if (controller_rad_c1) {
    v_528 = sub_80;
  } else {
    v_528 = sub_83;
  };
  if (controller_rad_up1) {
    v_529 = v_528;
  } else {
    v_529 = sub_83;
  };
  if (controller_rad_c1) {
    v_527 = sub_80;
  } else {
    v_527 = sub_11;
  };
  if (controller_rad_up1) {
    sub_84 = v_527;
  } else {
    sub_84 = sub_10;
  };
  if (controller_rad_c3) {
    sub_82 = v_529;
  } else {
    sub_82 = sub_84;
  };
  sub_87 = sub_59;
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (controller_v_427) {
    v_530 = sub_85;
  } else {
    v_530 = sub_82;
  };
  sub_89 = sub_84;
  if (controller_rad_down1) {
    v_526 = sub_12;
  } else {
    v_526 = sub_26;
  };
  if (controller_rad_c1) {
    sub_91 = v_526;
  } else {
    sub_91 = sub_11;
  };
  sub_90 = sub_91;
  if (controller_v_427) {
    sub_88 = sub_90;
  } else {
    sub_88 = sub_89;
  };
  if (controller_rad_up2) {
    v_531 = v_530;
  } else {
    v_531 = sub_88;
  };
  if (controller_rad_c2) {
    sub_81 = v_531;
  } else {
    sub_81 = sub_88;
  };
  if (controller_v_426) {
    sub_4 = sub_81;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_100 = sub_28;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  if (controller_v_427) {
    sub_101 = false;
  } else {
    sub_101 = sub_96;
  };
  if (controller_rad_c2) {
    v_525 = sub_101;
  } else {
    v_525 = sub_95;
  };
  if (controller_rad_down2) {
    sub_94 = sub_95;
  } else {
    sub_94 = v_525;
  };
  if (controller_rad_down1) {
    sub_104 = sub_100;
  } else {
    sub_104 = false;
  };
  if (controller_rad_c1) {
    v_521 = false;
  } else {
    v_521 = sub_104;
  };
  if (controller_rad_up1) {
    v_522 = v_521;
  } else {
    v_522 = sub_104;
  };
  if (controller_rad_c1) {
    v_520 = false;
  } else {
    v_520 = sub_99;
  };
  if (controller_rad_up1) {
    sub_105 = v_520;
  } else {
    sub_105 = sub_98;
  };
  if (controller_rad_c3) {
    sub_103 = v_522;
  } else {
    sub_103 = sub_105;
  };
  if (controller_v_427) {
    v_523 = false;
  } else {
    v_523 = sub_103;
  };
  sub_107 = sub_105;
  if (controller_rad_c1) {
    sub_109 = sub_104;
  } else {
    sub_109 = sub_99;
  };
  sub_108 = sub_109;
  if (controller_v_427) {
    sub_106 = sub_108;
  } else {
    sub_106 = sub_107;
  };
  if (controller_rad_up2) {
    v_524 = v_523;
  } else {
    v_524 = sub_106;
  };
  if (controller_rad_c2) {
    sub_102 = v_524;
  } else {
    sub_102 = sub_106;
  };
  if (controller_v_426) {
    sub_93 = sub_102;
  } else {
    sub_93 = sub_94;
  };
  sub_92 = sub_93;
  if (controller_room_presence) {
    sub_2 = sub_3;
  } else {
    sub_2 = sub_92;
  };
  if (controller_v_427) {
    sub_114 = false;
  } else {
    sub_114 = sub_8;
  };
  if (controller_rad_c2) {
    v_519 = sub_114;
  } else {
    v_519 = sub_7;
  };
  if (controller_rad_down2) {
    sub_113 = sub_6;
  } else {
    sub_113 = v_519;
  };
  if (controller_rad_down1) {
    sub_117 = sub_12;
  } else {
    sub_117 = false;
  };
  if (controller_rad_c1) {
    v_515 = false;
  } else {
    v_515 = sub_117;
  };
  if (controller_rad_up1) {
    v_516 = v_515;
  } else {
    v_516 = sub_117;
  };
  if (controller_rad_c1) {
    v_514 = false;
  } else {
    v_514 = sub_11;
  };
  if (controller_rad_up1) {
    sub_118 = v_514;
  } else {
    sub_118 = sub_10;
  };
  if (controller_rad_c3) {
    sub_116 = v_516;
  } else {
    sub_116 = sub_118;
  };
  if (controller_v_427) {
    v_517 = false;
  } else {
    v_517 = sub_116;
  };
  sub_120 = sub_118;
  if (controller_rad_c1) {
    sub_122 = sub_117;
  } else {
    sub_122 = sub_11;
  };
  sub_121 = sub_122;
  if (controller_v_427) {
    sub_119 = sub_121;
  } else {
    sub_119 = sub_120;
  };
  if (controller_rad_up2) {
    v_518 = v_517;
  } else {
    v_518 = sub_119;
  };
  if (controller_rad_c2) {
    sub_115 = v_518;
  } else {
    sub_115 = sub_119;
  };
  if (controller_v_426) {
    sub_112 = sub_115;
  } else {
    sub_112 = sub_113;
  };
  sub_111 = sub_112;
  if (controller_room_presence) {
    sub_110 = sub_111;
  } else {
    sub_110 = false;
  };
  if (controller_ck_9_1) {
    v_554 = sub_2;
    v_553 = sub_110;
  } else {
    v_554 = sub_110;
    v_553 = sub_2;
  };
  if (controller_push_door) {
    v_555 = v_553;
  } else {
    v_555 = v_554;
  };
  if (controller_c_door) {
    sub_1 = v_555;
  } else {
    sub_1 = sub_2;
  };
  sub_143 = true;
  sub_142 = sub_143;
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_139 = sub_140;
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  if (controller_c_window) {
    sub_151 = false;
  } else {
    sub_151 = sub_136;
  };
  if (controller_push_window) {
    v_508 = sub_151;
    sub_150 = sub_135;
  } else {
    v_508 = sub_135;
    sub_150 = sub_151;
  };
  if (controller_ck_11_1) {
    sub_149 = v_508;
  } else {
    sub_149 = sub_150;
  };
  if (controller_wash_end) {
    sub_165 = sub_143;
  } else {
    sub_165 = false;
  };
  if (controller_v_337) {
    sub_164 = false;
  } else {
    sub_164 = sub_165;
  };
  v_502 = !(controller_wash_start);
  sub_166 = (v_502||false);
  if (controller_v_337) {
    v_503 = sub_166;
  } else {
    v_503 = sub_142;
  };
  if (controller_v_336) {
    v_504 = v_503;
  } else {
    v_504 = sub_142;
  };
  if (controller_v_338) {
    sub_163 = v_504;
  } else {
    sub_163 = sub_164;
  };
  sub_162 = sub_163;
  sub_161 = sub_162;
  sub_160 = sub_161;
  if (controller_c_oven) {
    sub_159 = sub_160;
  } else {
    sub_159 = sub_139;
  };
  if (controller_wash_end) {
    v_500 = false;
  } else {
    v_500 = sub_143;
  };
  if (controller_v_337) {
    v_501 = v_500;
  } else {
    v_501 = sub_165;
  };
  if (controller_v_336) {
    sub_171 = v_501;
  } else {
    sub_171 = sub_142;
  };
  if (controller_v_338) {
    sub_170 = sub_142;
  } else {
    sub_170 = sub_171;
  };
  sub_169 = sub_170;
  if (controller_oven_temp_ok) {
    sub_168 = sub_141;
  } else {
    sub_168 = sub_169;
  };
  sub_167 = sub_168;
  if (controller_v_395) {
    sub_158 = sub_167;
  } else {
    sub_158 = sub_159;
  };
  sub_157 = sub_158;
  sub_172 = sub_160;
  if (controller_v_394) {
    sub_156 = sub_172;
  } else {
    sub_156 = sub_157;
  };
  if (controller_v_395) {
    v_499 = sub_172;
    v_498 = sub_172;
  } else {
    v_499 = sub_138;
    v_498 = sub_159;
  };
  if (controller_oven_start) {
    sub_173 = v_498;
  } else {
    sub_173 = v_499;
  };
  if (controller_oven_cold) {
    v_497 = sub_169;
  } else {
    v_497 = sub_140;
  };
  if (controller_c_oven) {
    sub_175 = v_497;
  } else {
    sub_175 = sub_139;
  };
  if (controller_oven_finish) {
    v_496 = sub_142;
  } else {
    v_496 = sub_163;
  };
  if (controller_oven_temp_ok) {
    sub_177 = sub_141;
  } else {
    sub_177 = v_496;
  };
  sub_176 = sub_177;
  if (controller_v_395) {
    sub_174 = sub_176;
  } else {
    sub_174 = sub_175;
  };
  if (controller_v_394) {
    v_505 = sub_174;
  } else {
    v_505 = sub_173;
  };
  if (controller_v_393) {
    v_506 = v_505;
  } else {
    v_506 = sub_156;
  };
  if (controller_comfort_input) {
    sub_155 = sub_137;
  } else {
    sub_155 = v_506;
  };
  sub_154 = sub_155;
  if (controller_c_window) {
    sub_178 = false;
  } else {
    sub_178 = sub_155;
  };
  if (controller_push_window) {
    v_507 = sub_178;
    sub_153 = sub_154;
  } else {
    v_507 = sub_154;
    sub_153 = sub_178;
  };
  if (controller_ck_11_1) {
    sub_152 = v_507;
  } else {
    sub_152 = sub_153;
  };
  if (controller_eco_input) {
    sub_148 = sub_149;
  } else {
    sub_148 = sub_152;
  };
  if (controller_v_292) {
    sub_179 = sub_152;
  } else {
    sub_179 = sub_149;
  };
  if (controller_v_293) {
    sub_147 = sub_179;
  } else {
    sub_147 = sub_148;
  };
  if (controller_c_oven) {
    sub_189 = false;
  } else {
    sub_189 = sub_139;
  };
  if (controller_oven_temp_ok) {
    sub_191 = sub_169;
  } else {
    sub_191 = sub_162;
  };
  sub_190 = sub_191;
  if (controller_v_395) {
    sub_188 = sub_190;
  } else {
    sub_188 = sub_189;
  };
  sub_187 = sub_188;
  if (controller_v_394) {
    sub_186 = false;
  } else {
    sub_186 = sub_187;
  };
  if (controller_v_395) {
    v_492 = false;
    v_491 = false;
  } else {
    v_492 = sub_138;
    v_491 = sub_189;
  };
  if (controller_oven_start) {
    sub_192 = v_491;
  } else {
    sub_192 = v_492;
  };
  if (controller_oven_finish) {
    sub_196 = sub_142;
  } else {
    sub_196 = sub_170;
  };
  sub_195 = sub_196;
  if (controller_oven_cold) {
    v_490 = sub_161;
  } else {
    v_490 = sub_195;
  };
  if (controller_c_oven) {
    sub_194 = v_490;
  } else {
    sub_194 = sub_195;
  };
  if (controller_oven_finish) {
    v_489 = sub_142;
  } else {
    v_489 = false;
  };
  if (controller_oven_temp_ok) {
    sub_198 = sub_196;
  } else {
    sub_198 = v_489;
  };
  sub_197 = sub_198;
  if (controller_v_395) {
    sub_193 = sub_197;
  } else {
    sub_193 = sub_194;
  };
  if (controller_v_394) {
    v_493 = sub_193;
  } else {
    v_493 = sub_192;
  };
  if (controller_v_393) {
    v_494 = v_493;
  } else {
    v_494 = sub_186;
  };
  if (controller_comfort_input) {
    sub_185 = sub_137;
  } else {
    sub_185 = v_494;
  };
  sub_184 = sub_185;
  if (controller_c_window) {
    sub_199 = false;
  } else {
    sub_199 = sub_185;
  };
  if (controller_push_window) {
    v_495 = sub_199;
    sub_183 = sub_184;
  } else {
    v_495 = sub_184;
    sub_183 = sub_199;
  };
  if (controller_ck_11_1) {
    sub_182 = v_495;
  } else {
    sub_182 = sub_183;
  };
  if (controller_eco_input) {
    sub_181 = sub_149;
  } else {
    sub_181 = sub_182;
  };
  if (controller_v_292) {
    sub_200 = sub_182;
  } else {
    sub_200 = sub_149;
  };
  if (controller_v_293) {
    sub_180 = sub_200;
  } else {
    sub_180 = sub_181;
  };
  if (controller_rad_down1) {
    v_509 = sub_147;
  } else {
    v_509 = sub_180;
  };
  sub_201 = sub_147;
  if (controller_rad_c1) {
    sub_146 = v_509;
  } else {
    sub_146 = sub_201;
  };
  sub_145 = sub_146;
  if (controller_v_427) {
    sub_144 = sub_145;
  } else {
    sub_144 = sub_129;
  };
  if (controller_rad_c2) {
    v_510 = sub_144;
  } else {
    v_510 = sub_128;
  };
  if (controller_rad_down2) {
    sub_126 = sub_127;
  } else {
    sub_126 = v_510;
  };
  if (controller_rad_down1) {
    sub_204 = sub_133;
  } else {
    sub_204 = sub_180;
  };
  if (controller_rad_c1) {
    v_485 = sub_201;
  } else {
    v_485 = sub_204;
  };
  if (controller_rad_up1) {
    v_486 = v_485;
  } else {
    v_486 = sub_204;
  };
  if (controller_rad_c1) {
    v_484 = sub_201;
  } else {
    v_484 = sub_132;
  };
  if (controller_rad_up1) {
    sub_205 = v_484;
  } else {
    sub_205 = sub_131;
  };
  if (controller_rad_c3) {
    sub_203 = v_486;
  } else {
    sub_203 = sub_205;
  };
  sub_208 = sub_180;
  sub_207 = sub_208;
  sub_206 = sub_207;
  if (controller_v_427) {
    v_487 = sub_206;
  } else {
    v_487 = sub_203;
  };
  sub_210 = sub_205;
  if (controller_rad_down1) {
    v_483 = sub_133;
  } else {
    v_483 = sub_147;
  };
  if (controller_rad_c1) {
    sub_212 = v_483;
  } else {
    sub_212 = sub_132;
  };
  sub_211 = sub_212;
  if (controller_v_427) {
    sub_209 = sub_211;
  } else {
    sub_209 = sub_210;
  };
  if (controller_rad_up2) {
    v_488 = v_487;
  } else {
    v_488 = sub_209;
  };
  if (controller_rad_c2) {
    sub_202 = v_488;
  } else {
    sub_202 = sub_209;
  };
  if (controller_v_426) {
    sub_125 = sub_202;
  } else {
    sub_125 = sub_126;
  };
  sub_124 = sub_125;
  sub_221 = sub_149;
  sub_220 = sub_221;
  sub_219 = sub_220;
  sub_218 = sub_219;
  sub_217 = sub_218;
  sub_216 = sub_217;
  if (controller_v_427) {
    sub_222 = false;
  } else {
    sub_222 = sub_217;
  };
  if (controller_rad_c2) {
    v_482 = sub_222;
  } else {
    v_482 = sub_216;
  };
  if (controller_rad_down2) {
    sub_215 = sub_216;
  } else {
    sub_215 = v_482;
  };
  if (controller_rad_down1) {
    sub_225 = sub_221;
  } else {
    sub_225 = false;
  };
  if (controller_rad_c1) {
    v_478 = false;
  } else {
    v_478 = sub_225;
  };
  if (controller_rad_up1) {
    v_479 = v_478;
  } else {
    v_479 = sub_225;
  };
  if (controller_rad_c1) {
    v_477 = false;
  } else {
    v_477 = sub_220;
  };
  if (controller_rad_up1) {
    sub_226 = v_477;
  } else {
    sub_226 = sub_219;
  };
  if (controller_rad_c3) {
    sub_224 = v_479;
  } else {
    sub_224 = sub_226;
  };
  if (controller_v_427) {
    v_480 = false;
  } else {
    v_480 = sub_224;
  };
  sub_228 = sub_226;
  if (controller_rad_c1) {
    sub_230 = sub_225;
  } else {
    sub_230 = sub_220;
  };
  sub_229 = sub_230;
  if (controller_v_427) {
    sub_227 = sub_229;
  } else {
    sub_227 = sub_228;
  };
  if (controller_rad_up2) {
    v_481 = v_480;
  } else {
    v_481 = sub_227;
  };
  if (controller_rad_c2) {
    sub_223 = v_481;
  } else {
    sub_223 = sub_227;
  };
  if (controller_v_426) {
    sub_214 = sub_223;
  } else {
    sub_214 = sub_215;
  };
  sub_213 = sub_214;
  if (controller_ck_15_1) {
    v_512 = sub_213;
    v_511 = sub_92;
  } else {
    v_512 = sub_92;
    v_511 = sub_213;
  };
  if (controller_lamp_switch) {
    v_513 = v_511;
  } else {
    v_513 = v_512;
  };
  if (controller_room_presence) {
    sub_123 = sub_124;
  } else {
    sub_123 = v_513;
  };
  if (controller_v_427) {
    sub_235 = false;
  } else {
    sub_235 = sub_129;
  };
  if (controller_rad_c2) {
    v_476 = sub_235;
  } else {
    v_476 = sub_128;
  };
  if (controller_rad_down2) {
    sub_234 = sub_127;
  } else {
    sub_234 = v_476;
  };
  if (controller_rad_down1) {
    sub_238 = sub_133;
  } else {
    sub_238 = false;
  };
  if (controller_rad_c1) {
    v_472 = false;
  } else {
    v_472 = sub_238;
  };
  if (controller_rad_up1) {
    v_473 = v_472;
  } else {
    v_473 = sub_238;
  };
  if (controller_rad_c1) {
    v = false;
  } else {
    v = sub_132;
  };
  if (controller_rad_up1) {
    sub_239 = v;
  } else {
    sub_239 = sub_131;
  };
  if (controller_rad_c3) {
    sub_237 = v_473;
  } else {
    sub_237 = sub_239;
  };
  if (controller_v_427) {
    v_474 = false;
  } else {
    v_474 = sub_237;
  };
  sub_241 = sub_239;
  if (controller_rad_c1) {
    sub_243 = sub_238;
  } else {
    sub_243 = sub_132;
  };
  sub_242 = sub_243;
  if (controller_v_427) {
    sub_240 = sub_242;
  } else {
    sub_240 = sub_241;
  };
  if (controller_rad_up2) {
    v_475 = v_474;
  } else {
    v_475 = sub_240;
  };
  if (controller_rad_c2) {
    sub_236 = v_475;
  } else {
    sub_236 = sub_240;
  };
  if (controller_v_426) {
    sub_233 = sub_236;
  } else {
    sub_233 = sub_234;
  };
  sub_232 = sub_233;
  if (controller_room_presence) {
    sub_231 = sub_232;
  } else {
    sub_231 = false;
  };
  if (controller_ck_9_1) {
    v_557 = sub_123;
    v_556 = sub_231;
  } else {
    v_557 = sub_231;
    v_556 = sub_123;
  };
  if (controller_push_door) {
    v_558 = v_556;
  } else {
    v_558 = v_557;
  };
  if (controller_c_door) {
    v_559 = v_558;
  } else {
    v_559 = sub_123;
  };
  if (p_controller_c1_lamp) {
    sub_0 = v_559;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c1_lamp = sub_0;;
}

void Controller_controller__controller_controller_controller_rad_c3_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door, int controller_rad_c2,
  int controller_rad_c1, int controller_c_oven, int controller_c_window,
  int controller_c_door,
  Controller_controller__controller_controller_controller_rad_c3_out* _out) {
  
  int v_652;
  int v_651;
  int v_650;
  int v_649;
  int v_648;
  int v_647;
  int v_646;
  int v_645;
  int v_644;
  int v_643;
  int v_642;
  int v_641;
  int v_640;
  int v_639;
  int v_638;
  int v_637;
  int v_636;
  int v_635;
  int v_634;
  int v_633;
  int v_632;
  int v_631;
  int v_630;
  int v_629;
  int v_628;
  int v_627;
  int v_626;
  int v_625;
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int v_620;
  int v_619;
  int v_618;
  int v_617;
  int v_616;
  int v_615;
  int v_614;
  int v_613;
  int v_612;
  int v_611;
  int v_610;
  int v_609;
  int v_608;
  int v_607;
  int v_606;
  int v_605;
  int v_604;
  int v_603;
  int v_602;
  int v_601;
  int v_600;
  int v_599;
  int v_598;
  int v_597;
  int v_596;
  int v_595;
  int v_594;
  int v_593;
  int v_592;
  int v_591;
  int v_590;
  int v_589;
  int v_588;
  int v_587;
  int v_586;
  int v_585;
  int v_584;
  int v_583;
  int v_582;
  int v_581;
  int v_580;
  int v_579;
  int v_578;
  int v_577;
  int v_576;
  int v_575;
  int v_574;
  int v_573;
  int v_572;
  int v_571;
  int v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
  int v_564;
  int v_563;
  int v_562;
  int v_561;
  int v_560;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  sub_21 = false;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  if (controller_c_window) {
    sub_28 = false;
  } else {
    sub_28 = sub_14;
  };
  if (controller_push_window) {
    v_643 = sub_28;
    sub_27 = sub_13;
  } else {
    v_643 = sub_13;
    sub_27 = sub_28;
  };
  if (controller_ck_11_1) {
    sub_26 = v_643;
  } else {
    sub_26 = sub_27;
  };
  if (controller_wash_end) {
    sub_42 = sub_21;
  } else {
    sub_42 = false;
  };
  if (controller_v_337) {
    sub_41 = false;
  } else {
    sub_41 = sub_42;
  };
  sub_43 = (controller_wash_start&&false);
  if (controller_v_337) {
    v_638 = sub_43;
  } else {
    v_638 = sub_20;
  };
  if (controller_v_336) {
    v_639 = v_638;
  } else {
    v_639 = sub_20;
  };
  if (controller_v_338) {
    sub_40 = v_639;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_c_oven) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_17;
  };
  if (controller_wash_end) {
    v_636 = false;
  } else {
    v_636 = sub_21;
  };
  if (controller_v_337) {
    v_637 = v_636;
  } else {
    v_637 = sub_42;
  };
  if (controller_v_336) {
    sub_48 = v_637;
  } else {
    sub_48 = sub_20;
  };
  if (controller_v_338) {
    sub_47 = sub_20;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  if (controller_oven_temp_ok) {
    sub_45 = sub_19;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  if (controller_v_395) {
    sub_35 = sub_44;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_49 = sub_37;
  if (controller_v_394) {
    sub_33 = sub_49;
  } else {
    sub_33 = sub_34;
  };
  if (controller_v_395) {
    v_635 = sub_49;
    v_634 = sub_49;
  } else {
    v_635 = sub_16;
    v_634 = sub_36;
  };
  if (controller_oven_start) {
    sub_50 = v_634;
  } else {
    sub_50 = v_635;
  };
  if (controller_oven_cold) {
    v_633 = sub_46;
  } else {
    v_633 = sub_18;
  };
  if (controller_c_oven) {
    sub_52 = v_633;
  } else {
    sub_52 = sub_17;
  };
  if (controller_oven_finish) {
    v_632 = sub_20;
  } else {
    v_632 = sub_40;
  };
  if (controller_oven_temp_ok) {
    sub_54 = sub_19;
  } else {
    sub_54 = v_632;
  };
  sub_53 = sub_54;
  if (controller_v_395) {
    sub_51 = sub_53;
  } else {
    sub_51 = sub_52;
  };
  if (controller_v_394) {
    v_640 = sub_51;
  } else {
    v_640 = sub_50;
  };
  if (controller_v_393) {
    v_641 = v_640;
  } else {
    v_641 = sub_33;
  };
  if (controller_comfort_input) {
    sub_32 = sub_15;
  } else {
    sub_32 = v_641;
  };
  sub_31 = sub_32;
  if (controller_c_window) {
    sub_55 = false;
  } else {
    sub_55 = sub_32;
  };
  if (controller_push_window) {
    v_642 = sub_55;
    sub_30 = sub_31;
  } else {
    v_642 = sub_31;
    sub_30 = sub_55;
  };
  if (controller_ck_11_1) {
    sub_29 = v_642;
  } else {
    sub_29 = sub_30;
  };
  if (controller_eco_input) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_29;
  };
  if (controller_v_292) {
    sub_56 = sub_29;
  } else {
    sub_56 = sub_26;
  };
  if (controller_v_293) {
    sub_24 = sub_56;
  } else {
    sub_24 = sub_25;
  };
  if (controller_c_oven) {
    sub_66 = false;
  } else {
    sub_66 = sub_17;
  };
  if (controller_oven_temp_ok) {
    sub_68 = sub_46;
  } else {
    sub_68 = sub_39;
  };
  sub_67 = sub_68;
  if (controller_v_395) {
    sub_65 = sub_67;
  } else {
    sub_65 = sub_66;
  };
  sub_64 = sub_65;
  if (controller_v_394) {
    sub_63 = false;
  } else {
    sub_63 = sub_64;
  };
  if (controller_v_395) {
    v_628 = false;
    v_627 = false;
  } else {
    v_628 = sub_16;
    v_627 = sub_66;
  };
  if (controller_oven_start) {
    sub_69 = v_627;
  } else {
    sub_69 = v_628;
  };
  if (controller_oven_finish) {
    sub_73 = sub_20;
  } else {
    sub_73 = sub_47;
  };
  sub_72 = sub_73;
  if (controller_oven_cold) {
    v_626 = sub_38;
  } else {
    v_626 = sub_72;
  };
  if (controller_c_oven) {
    sub_71 = v_626;
  } else {
    sub_71 = sub_72;
  };
  if (controller_oven_finish) {
    v_625 = sub_20;
  } else {
    v_625 = false;
  };
  if (controller_oven_temp_ok) {
    sub_75 = sub_73;
  } else {
    sub_75 = v_625;
  };
  sub_74 = sub_75;
  if (controller_v_395) {
    sub_70 = sub_74;
  } else {
    sub_70 = sub_71;
  };
  if (controller_v_394) {
    v_629 = sub_70;
  } else {
    v_629 = sub_69;
  };
  if (controller_v_393) {
    v_630 = v_629;
  } else {
    v_630 = sub_63;
  };
  if (controller_comfort_input) {
    sub_62 = sub_15;
  } else {
    sub_62 = v_630;
  };
  sub_61 = sub_62;
  if (controller_c_window) {
    sub_76 = false;
  } else {
    sub_76 = sub_62;
  };
  if (controller_push_window) {
    v_631 = sub_76;
    sub_60 = sub_61;
  } else {
    v_631 = sub_61;
    sub_60 = sub_76;
  };
  if (controller_ck_11_1) {
    sub_59 = v_631;
  } else {
    sub_59 = sub_60;
  };
  if (controller_eco_input) {
    sub_58 = sub_26;
  } else {
    sub_58 = sub_59;
  };
  if (controller_v_292) {
    sub_77 = sub_59;
  } else {
    sub_77 = sub_26;
  };
  if (controller_v_293) {
    sub_57 = sub_77;
  } else {
    sub_57 = sub_58;
  };
  if (controller_rad_down1) {
    v_644 = sub_24;
  } else {
    v_644 = sub_57;
  };
  sub_78 = sub_24;
  if (controller_rad_c1) {
    sub_23 = v_644;
  } else {
    sub_23 = sub_78;
  };
  if (controller_v_427) {
    sub_22 = sub_23;
  } else {
    sub_22 = sub_8;
  };
  if (controller_rad_c2) {
    v_645 = sub_22;
  } else {
    v_645 = sub_7;
  };
  if (controller_rad_down2) {
    sub_5 = sub_6;
  } else {
    sub_5 = v_645;
  };
  if (controller_rad_c1) {
    v_622 = sub_78;
  } else {
    v_622 = sub_10;
  };
  if (controller_rad_up1) {
    sub_80 = v_622;
  } else {
    sub_80 = sub_9;
  };
  sub_82 = sub_57;
  sub_81 = sub_82;
  if (controller_v_427) {
    v_623 = sub_81;
  } else {
    v_623 = sub_80;
  };
  if (controller_rad_down1) {
    v_621 = sub_11;
  } else {
    v_621 = sub_24;
  };
  if (controller_rad_c1) {
    sub_84 = v_621;
  } else {
    sub_84 = sub_10;
  };
  if (controller_v_427) {
    sub_83 = sub_84;
  } else {
    sub_83 = sub_80;
  };
  if (controller_rad_up2) {
    v_624 = v_623;
  } else {
    v_624 = sub_83;
  };
  if (controller_rad_c2) {
    sub_79 = v_624;
  } else {
    sub_79 = sub_83;
  };
  if (controller_v_426) {
    sub_4 = sub_79;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_92 = sub_26;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  if (controller_v_427) {
    sub_93 = false;
  } else {
    sub_93 = sub_89;
  };
  if (controller_rad_c2) {
    v_620 = sub_93;
  } else {
    v_620 = sub_88;
  };
  if (controller_rad_down2) {
    sub_87 = sub_88;
  } else {
    sub_87 = v_620;
  };
  if (controller_rad_c1) {
    v_617 = false;
  } else {
    v_617 = sub_91;
  };
  if (controller_rad_up1) {
    sub_95 = v_617;
  } else {
    sub_95 = sub_90;
  };
  if (controller_v_427) {
    v_618 = false;
  } else {
    v_618 = sub_95;
  };
  if (controller_rad_down1) {
    v_616 = sub_92;
  } else {
    v_616 = false;
  };
  if (controller_rad_c1) {
    sub_97 = v_616;
  } else {
    sub_97 = sub_91;
  };
  if (controller_v_427) {
    sub_96 = sub_97;
  } else {
    sub_96 = sub_95;
  };
  if (controller_rad_up2) {
    v_619 = v_618;
  } else {
    v_619 = sub_96;
  };
  if (controller_rad_c2) {
    sub_94 = v_619;
  } else {
    sub_94 = sub_96;
  };
  if (controller_v_426) {
    sub_86 = sub_94;
  } else {
    sub_86 = sub_87;
  };
  sub_85 = sub_86;
  if (controller_room_presence) {
    sub_2 = sub_3;
  } else {
    sub_2 = sub_85;
  };
  if (controller_v_427) {
    sub_102 = false;
  } else {
    sub_102 = sub_8;
  };
  if (controller_rad_c2) {
    v_615 = sub_102;
  } else {
    v_615 = sub_7;
  };
  if (controller_rad_down2) {
    sub_101 = sub_6;
  } else {
    sub_101 = v_615;
  };
  if (controller_rad_c1) {
    v_612 = false;
  } else {
    v_612 = sub_10;
  };
  if (controller_rad_up1) {
    sub_104 = v_612;
  } else {
    sub_104 = sub_9;
  };
  if (controller_v_427) {
    v_613 = false;
  } else {
    v_613 = sub_104;
  };
  if (controller_rad_down1) {
    v_611 = sub_11;
  } else {
    v_611 = false;
  };
  if (controller_rad_c1) {
    sub_106 = v_611;
  } else {
    sub_106 = sub_10;
  };
  if (controller_v_427) {
    sub_105 = sub_106;
  } else {
    sub_105 = sub_104;
  };
  if (controller_rad_up2) {
    v_614 = v_613;
  } else {
    v_614 = sub_105;
  };
  if (controller_rad_c2) {
    sub_103 = v_614;
  } else {
    sub_103 = sub_105;
  };
  if (controller_v_426) {
    sub_100 = sub_103;
  } else {
    sub_100 = sub_101;
  };
  sub_99 = sub_100;
  if (controller_room_presence) {
    sub_98 = sub_99;
  } else {
    sub_98 = false;
  };
  if (controller_ck_9_1) {
    v_647 = sub_2;
    v_646 = sub_98;
  } else {
    v_647 = sub_98;
    v_646 = sub_2;
  };
  if (controller_push_door) {
    v_648 = v_646;
  } else {
    v_648 = v_647;
  };
  if (controller_c_door) {
    sub_1 = v_648;
  } else {
    sub_1 = sub_2;
  };
  sub_126 = true;
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  if (controller_c_window) {
    sub_133 = false;
  } else {
    sub_133 = sub_119;
  };
  if (controller_push_window) {
    v_608 = sub_133;
    sub_132 = sub_118;
  } else {
    v_608 = sub_118;
    sub_132 = sub_133;
  };
  if (controller_ck_11_1) {
    sub_131 = v_608;
  } else {
    sub_131 = sub_132;
  };
  if (controller_wash_end) {
    sub_147 = sub_126;
  } else {
    sub_147 = false;
  };
  if (controller_v_337) {
    sub_146 = false;
  } else {
    sub_146 = sub_147;
  };
  v_602 = !(controller_wash_start);
  sub_148 = (v_602||false);
  if (controller_v_337) {
    v_603 = sub_148;
  } else {
    v_603 = sub_125;
  };
  if (controller_v_336) {
    v_604 = v_603;
  } else {
    v_604 = sub_125;
  };
  if (controller_v_338) {
    sub_145 = v_604;
  } else {
    sub_145 = sub_146;
  };
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  if (controller_c_oven) {
    sub_141 = sub_142;
  } else {
    sub_141 = sub_122;
  };
  if (controller_wash_end) {
    v_600 = false;
  } else {
    v_600 = sub_126;
  };
  if (controller_v_337) {
    v_601 = v_600;
  } else {
    v_601 = sub_147;
  };
  if (controller_v_336) {
    sub_153 = v_601;
  } else {
    sub_153 = sub_125;
  };
  if (controller_v_338) {
    sub_152 = sub_125;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  if (controller_oven_temp_ok) {
    sub_150 = sub_124;
  } else {
    sub_150 = sub_151;
  };
  sub_149 = sub_150;
  if (controller_v_395) {
    sub_140 = sub_149;
  } else {
    sub_140 = sub_141;
  };
  sub_139 = sub_140;
  sub_154 = sub_142;
  if (controller_v_394) {
    sub_138 = sub_154;
  } else {
    sub_138 = sub_139;
  };
  if (controller_v_395) {
    v_599 = sub_154;
    v_598 = sub_154;
  } else {
    v_599 = sub_121;
    v_598 = sub_141;
  };
  if (controller_oven_start) {
    sub_155 = v_598;
  } else {
    sub_155 = v_599;
  };
  if (controller_oven_cold) {
    v_597 = sub_151;
  } else {
    v_597 = sub_123;
  };
  if (controller_c_oven) {
    sub_157 = v_597;
  } else {
    sub_157 = sub_122;
  };
  if (controller_oven_finish) {
    v_596 = sub_125;
  } else {
    v_596 = sub_145;
  };
  if (controller_oven_temp_ok) {
    sub_159 = sub_124;
  } else {
    sub_159 = v_596;
  };
  sub_158 = sub_159;
  if (controller_v_395) {
    sub_156 = sub_158;
  } else {
    sub_156 = sub_157;
  };
  if (controller_v_394) {
    v_605 = sub_156;
  } else {
    v_605 = sub_155;
  };
  if (controller_v_393) {
    v_606 = v_605;
  } else {
    v_606 = sub_138;
  };
  if (controller_comfort_input) {
    sub_137 = sub_120;
  } else {
    sub_137 = v_606;
  };
  sub_136 = sub_137;
  if (controller_c_window) {
    sub_160 = false;
  } else {
    sub_160 = sub_137;
  };
  if (controller_push_window) {
    v_607 = sub_160;
    sub_135 = sub_136;
  } else {
    v_607 = sub_136;
    sub_135 = sub_160;
  };
  if (controller_ck_11_1) {
    sub_134 = v_607;
  } else {
    sub_134 = sub_135;
  };
  if (controller_eco_input) {
    sub_130 = sub_131;
  } else {
    sub_130 = sub_134;
  };
  if (controller_v_292) {
    sub_161 = sub_134;
  } else {
    sub_161 = sub_131;
  };
  if (controller_v_293) {
    sub_129 = sub_161;
  } else {
    sub_129 = sub_130;
  };
  if (controller_c_oven) {
    sub_171 = false;
  } else {
    sub_171 = sub_122;
  };
  if (controller_oven_temp_ok) {
    sub_173 = sub_151;
  } else {
    sub_173 = sub_144;
  };
  sub_172 = sub_173;
  if (controller_v_395) {
    sub_170 = sub_172;
  } else {
    sub_170 = sub_171;
  };
  sub_169 = sub_170;
  if (controller_v_394) {
    sub_168 = false;
  } else {
    sub_168 = sub_169;
  };
  if (controller_v_395) {
    v_592 = false;
    v_591 = false;
  } else {
    v_592 = sub_121;
    v_591 = sub_171;
  };
  if (controller_oven_start) {
    sub_174 = v_591;
  } else {
    sub_174 = v_592;
  };
  if (controller_oven_finish) {
    sub_178 = sub_125;
  } else {
    sub_178 = sub_152;
  };
  sub_177 = sub_178;
  if (controller_oven_cold) {
    v_590 = sub_143;
  } else {
    v_590 = sub_177;
  };
  if (controller_c_oven) {
    sub_176 = v_590;
  } else {
    sub_176 = sub_177;
  };
  if (controller_oven_finish) {
    v_589 = sub_125;
  } else {
    v_589 = false;
  };
  if (controller_oven_temp_ok) {
    sub_180 = sub_178;
  } else {
    sub_180 = v_589;
  };
  sub_179 = sub_180;
  if (controller_v_395) {
    sub_175 = sub_179;
  } else {
    sub_175 = sub_176;
  };
  if (controller_v_394) {
    v_593 = sub_175;
  } else {
    v_593 = sub_174;
  };
  if (controller_v_393) {
    v_594 = v_593;
  } else {
    v_594 = sub_168;
  };
  if (controller_comfort_input) {
    sub_167 = sub_120;
  } else {
    sub_167 = v_594;
  };
  sub_166 = sub_167;
  if (controller_c_window) {
    sub_181 = false;
  } else {
    sub_181 = sub_167;
  };
  if (controller_push_window) {
    v_595 = sub_181;
    sub_165 = sub_166;
  } else {
    v_595 = sub_166;
    sub_165 = sub_181;
  };
  if (controller_ck_11_1) {
    sub_164 = v_595;
  } else {
    sub_164 = sub_165;
  };
  if (controller_eco_input) {
    sub_163 = sub_131;
  } else {
    sub_163 = sub_164;
  };
  if (controller_v_292) {
    sub_182 = sub_164;
  } else {
    sub_182 = sub_131;
  };
  if (controller_v_293) {
    sub_162 = sub_182;
  } else {
    sub_162 = sub_163;
  };
  if (controller_rad_down1) {
    v_609 = sub_129;
  } else {
    v_609 = sub_162;
  };
  sub_183 = sub_129;
  if (controller_rad_c1) {
    sub_128 = v_609;
  } else {
    sub_128 = sub_183;
  };
  if (controller_v_427) {
    sub_127 = sub_128;
  } else {
    sub_127 = sub_113;
  };
  if (controller_rad_c2) {
    v_610 = sub_127;
  } else {
    v_610 = sub_112;
  };
  if (controller_rad_down2) {
    sub_110 = sub_111;
  } else {
    sub_110 = v_610;
  };
  if (controller_c_window) {
    sub_190 = sub_14;
  } else {
    sub_190 = sub_119;
  };
  if (controller_push_window) {
    v_584 = sub_190;
    sub_189 = sub_118;
  } else {
    v_584 = sub_118;
    sub_189 = sub_190;
  };
  if (controller_ck_11_1) {
    sub_188 = v_584;
  } else {
    sub_188 = sub_189;
  };
  if (controller_c_oven) {
    sub_198 = sub_17;
  } else {
    sub_198 = sub_122;
  };
  if (controller_wash_end) {
    v_579 = sub_21;
    sub_203 = sub_126;
  } else {
    v_579 = sub_126;
    sub_203 = sub_21;
  };
  if (controller_v_337) {
    v_580 = v_579;
  } else {
    v_580 = sub_203;
  };
  if (controller_v_336) {
    sub_202 = v_580;
  } else {
    sub_202 = sub_125;
  };
  if (controller_v_338) {
    sub_201 = sub_125;
  } else {
    sub_201 = sub_202;
  };
  if (controller_v_337) {
    sub_206 = sub_20;
  } else {
    sub_206 = sub_203;
  };
  sub_207 = !(controller_wash_start);
  if (controller_v_337) {
    v_577 = sub_207;
  } else {
    v_577 = sub_125;
  };
  if (controller_v_336) {
    v_578 = v_577;
  } else {
    v_578 = sub_125;
  };
  if (controller_v_338) {
    sub_205 = v_578;
  } else {
    sub_205 = sub_206;
  };
  sub_204 = sub_205;
  if (controller_oven_temp_ok) {
    sub_200 = sub_201;
  } else {
    sub_200 = sub_204;
  };
  sub_199 = sub_200;
  if (controller_v_395) {
    sub_197 = sub_199;
  } else {
    sub_197 = sub_198;
  };
  sub_196 = sub_197;
  if (controller_v_394) {
    sub_195 = sub_15;
  } else {
    sub_195 = sub_196;
  };
  if (controller_v_395) {
    v_576 = sub_16;
    v_575 = sub_16;
  } else {
    v_576 = sub_121;
    v_575 = sub_198;
  };
  if (controller_oven_start) {
    sub_208 = v_575;
  } else {
    sub_208 = v_576;
  };
  if (controller_oven_finish) {
    sub_212 = sub_125;
  } else {
    sub_212 = sub_201;
  };
  sub_211 = sub_212;
  if (controller_oven_cold) {
    v_574 = sub_204;
  } else {
    v_574 = sub_211;
  };
  if (controller_c_oven) {
    sub_210 = v_574;
  } else {
    sub_210 = sub_211;
  };
  if (controller_oven_finish) {
    v_573 = sub_125;
  } else {
    v_573 = sub_20;
  };
  if (controller_oven_temp_ok) {
    sub_214 = sub_212;
  } else {
    sub_214 = v_573;
  };
  sub_213 = sub_214;
  if (controller_v_395) {
    sub_209 = sub_213;
  } else {
    sub_209 = sub_210;
  };
  if (controller_v_394) {
    v_581 = sub_209;
  } else {
    v_581 = sub_208;
  };
  if (controller_v_393) {
    v_582 = v_581;
  } else {
    v_582 = sub_195;
  };
  if (controller_comfort_input) {
    sub_194 = sub_120;
  } else {
    sub_194 = v_582;
  };
  sub_193 = sub_194;
  if (controller_c_window) {
    sub_215 = sub_14;
  } else {
    sub_215 = sub_194;
  };
  if (controller_push_window) {
    v_583 = sub_215;
    sub_192 = sub_193;
  } else {
    v_583 = sub_193;
    sub_192 = sub_215;
  };
  if (controller_ck_11_1) {
    sub_191 = v_583;
  } else {
    sub_191 = sub_192;
  };
  if (controller_eco_input) {
    sub_187 = sub_188;
  } else {
    sub_187 = sub_191;
  };
  if (controller_v_292) {
    sub_216 = sub_191;
  } else {
    sub_216 = sub_188;
  };
  if (controller_v_293) {
    v_585 = sub_216;
  } else {
    v_585 = sub_187;
  };
  if (controller_rad_down1) {
    sub_186 = sub_116;
  } else {
    sub_186 = v_585;
  };
  if (controller_rad_c1) {
    v_586 = sub_183;
  } else {
    v_586 = sub_186;
  };
  if (controller_rad_up1) {
    sub_185 = v_586;
  } else {
    sub_185 = sub_186;
  };
  sub_218 = sub_162;
  sub_217 = sub_218;
  if (controller_v_427) {
    v_587 = sub_217;
  } else {
    v_587 = sub_185;
  };
  if (controller_rad_c1) {
    v_572 = sub_183;
  } else {
    v_572 = sub_115;
  };
  if (controller_rad_up1) {
    sub_220 = v_572;
  } else {
    sub_220 = sub_114;
  };
  if (controller_rad_down1) {
    v_571 = sub_116;
  } else {
    v_571 = sub_129;
  };
  if (controller_rad_c1) {
    sub_221 = v_571;
  } else {
    sub_221 = sub_115;
  };
  if (controller_v_427) {
    sub_219 = sub_221;
  } else {
    sub_219 = sub_220;
  };
  if (controller_rad_up2) {
    v_588 = v_587;
  } else {
    v_588 = sub_219;
  };
  if (controller_rad_c2) {
    sub_184 = v_588;
  } else {
    sub_184 = sub_219;
  };
  if (controller_v_426) {
    sub_109 = sub_184;
  } else {
    sub_109 = sub_110;
  };
  sub_108 = sub_109;
  sub_229 = sub_131;
  sub_228 = sub_229;
  sub_227 = sub_228;
  sub_226 = sub_227;
  sub_225 = sub_226;
  if (controller_v_427) {
    sub_230 = false;
  } else {
    sub_230 = sub_226;
  };
  if (controller_rad_c2) {
    v_570 = sub_230;
  } else {
    v_570 = sub_225;
  };
  if (controller_rad_down2) {
    sub_224 = sub_225;
  } else {
    sub_224 = v_570;
  };
  if (controller_rad_down1) {
    sub_233 = sub_229;
  } else {
    sub_233 = sub_92;
  };
  if (controller_rad_c1) {
    v_567 = false;
  } else {
    v_567 = sub_233;
  };
  if (controller_rad_up1) {
    sub_232 = v_567;
  } else {
    sub_232 = sub_233;
  };
  if (controller_v_427) {
    v_568 = false;
  } else {
    v_568 = sub_232;
  };
  if (controller_rad_c1) {
    v_566 = false;
  } else {
    v_566 = sub_228;
  };
  if (controller_rad_up1) {
    sub_235 = v_566;
  } else {
    sub_235 = sub_227;
  };
  if (controller_rad_down1) {
    v_565 = sub_229;
  } else {
    v_565 = false;
  };
  if (controller_rad_c1) {
    sub_236 = v_565;
  } else {
    sub_236 = sub_228;
  };
  if (controller_v_427) {
    sub_234 = sub_236;
  } else {
    sub_234 = sub_235;
  };
  if (controller_rad_up2) {
    v_569 = v_568;
  } else {
    v_569 = sub_234;
  };
  if (controller_rad_c2) {
    sub_231 = v_569;
  } else {
    sub_231 = sub_234;
  };
  if (controller_v_426) {
    sub_223 = sub_231;
  } else {
    sub_223 = sub_224;
  };
  sub_222 = sub_223;
  if (controller_room_presence) {
    sub_107 = sub_108;
  } else {
    sub_107 = sub_222;
  };
  if (controller_v_427) {
    sub_241 = false;
  } else {
    sub_241 = sub_113;
  };
  if (controller_rad_c2) {
    v_564 = sub_241;
  } else {
    v_564 = sub_112;
  };
  if (controller_rad_down2) {
    sub_240 = sub_111;
  } else {
    sub_240 = v_564;
  };
  if (controller_rad_down1) {
    sub_244 = sub_116;
  } else {
    sub_244 = sub_11;
  };
  if (controller_rad_c1) {
    v_561 = false;
  } else {
    v_561 = sub_244;
  };
  if (controller_rad_up1) {
    sub_243 = v_561;
  } else {
    sub_243 = sub_244;
  };
  if (controller_v_427) {
    v_562 = false;
  } else {
    v_562 = sub_243;
  };
  if (controller_rad_c1) {
    v_560 = false;
  } else {
    v_560 = sub_115;
  };
  if (controller_rad_up1) {
    sub_246 = v_560;
  } else {
    sub_246 = sub_114;
  };
  if (controller_rad_down1) {
    v = sub_116;
  } else {
    v = false;
  };
  if (controller_rad_c1) {
    sub_247 = v;
  } else {
    sub_247 = sub_115;
  };
  if (controller_v_427) {
    sub_245 = sub_247;
  } else {
    sub_245 = sub_246;
  };
  if (controller_rad_up2) {
    v_563 = v_562;
  } else {
    v_563 = sub_245;
  };
  if (controller_rad_c2) {
    sub_242 = v_563;
  } else {
    sub_242 = sub_245;
  };
  if (controller_v_426) {
    sub_239 = sub_242;
  } else {
    sub_239 = sub_240;
  };
  sub_238 = sub_239;
  if (controller_room_presence) {
    sub_237 = sub_238;
  } else {
    sub_237 = false;
  };
  if (controller_ck_9_1) {
    v_650 = sub_107;
    v_649 = sub_237;
  } else {
    v_650 = sub_237;
    v_649 = sub_107;
  };
  if (controller_push_door) {
    v_651 = v_649;
  } else {
    v_651 = v_650;
  };
  if (controller_c_door) {
    v_652 = v_651;
  } else {
    v_652 = sub_107;
  };
  if (p_controller_rad_c3) {
    sub_0 = v_652;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_rad_c3 = sub_0;;
}

void Controller_controller__controller_controller_controller_rad_c2_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door, int controller_rad_c1,
  int controller_c_oven, int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_rad_c2_out* _out) {
  
  int v_728;
  int v_727;
  int v_726;
  int v_725;
  int v_724;
  int v_723;
  int v_722;
  int v_721;
  int v_720;
  int v_719;
  int v_718;
  int v_717;
  int v_716;
  int v_715;
  int v_714;
  int v_713;
  int v_712;
  int v_711;
  int v_710;
  int v_709;
  int v_708;
  int v_707;
  int v_706;
  int v_705;
  int v_704;
  int v_703;
  int v_702;
  int v_701;
  int v_700;
  int v_699;
  int v_698;
  int v_697;
  int v_696;
  int v_695;
  int v_694;
  int v_693;
  int v_692;
  int v_691;
  int v_690;
  int v_689;
  int v_688;
  int v_687;
  int v_686;
  int v_685;
  int v_684;
  int v_683;
  int v_682;
  int v_681;
  int v_680;
  int v_679;
  int v_678;
  int v_677;
  int v_676;
  int v_675;
  int v_674;
  int v_673;
  int v_672;
  int v_671;
  int v_670;
  int v_669;
  int v_668;
  int v_667;
  int v_666;
  int v_665;
  int v_664;
  int v_663;
  int v_662;
  int v_661;
  int v_660;
  int v_659;
  int v_658;
  int v_657;
  int v_656;
  int v_655;
  int v_654;
  int v_653;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  sub_20 = false;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (controller_c_window) {
    sub_28 = false;
  } else {
    sub_28 = sub_13;
  };
  if (controller_push_window) {
    v_723 = sub_28;
    sub_27 = sub_12;
  } else {
    v_723 = sub_12;
    sub_27 = sub_28;
  };
  if (controller_ck_11_1) {
    sub_26 = v_723;
  } else {
    sub_26 = sub_27;
  };
  if (controller_wash_end) {
    sub_42 = sub_20;
  } else {
    sub_42 = false;
  };
  if (controller_v_337) {
    sub_41 = false;
  } else {
    sub_41 = sub_42;
  };
  sub_43 = (controller_wash_start&&false);
  if (controller_v_337) {
    v_718 = sub_43;
  } else {
    v_718 = sub_19;
  };
  if (controller_v_336) {
    v_719 = v_718;
  } else {
    v_719 = sub_19;
  };
  if (controller_v_338) {
    sub_40 = v_719;
  } else {
    sub_40 = sub_41;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (controller_c_oven) {
    sub_36 = sub_37;
  } else {
    sub_36 = sub_16;
  };
  if (controller_wash_end) {
    sub_49 = false;
  } else {
    sub_49 = sub_20;
  };
  if (controller_v_337) {
    v_717 = sub_49;
  } else {
    v_717 = sub_42;
  };
  if (controller_v_336) {
    sub_48 = v_717;
  } else {
    sub_48 = sub_19;
  };
  if (controller_v_338) {
    sub_47 = sub_19;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  if (controller_oven_temp_ok) {
    sub_45 = sub_18;
  } else {
    sub_45 = sub_46;
  };
  sub_44 = sub_45;
  if (controller_v_395) {
    sub_35 = sub_44;
  } else {
    sub_35 = sub_36;
  };
  sub_34 = sub_35;
  sub_51 = sub_37;
  sub_50 = sub_51;
  if (controller_v_394) {
    sub_33 = sub_50;
  } else {
    sub_33 = sub_34;
  };
  if (controller_v_395) {
    v_716 = sub_51;
    v_715 = sub_51;
  } else {
    v_716 = sub_15;
    v_715 = sub_36;
  };
  if (controller_oven_start) {
    sub_52 = v_715;
  } else {
    sub_52 = v_716;
  };
  if (controller_oven_cold) {
    v_714 = sub_46;
  } else {
    v_714 = sub_17;
  };
  if (controller_c_oven) {
    sub_54 = v_714;
  } else {
    sub_54 = sub_16;
  };
  if (controller_oven_finish) {
    v_713 = sub_19;
  } else {
    v_713 = sub_40;
  };
  if (controller_oven_temp_ok) {
    sub_56 = sub_18;
  } else {
    sub_56 = v_713;
  };
  sub_55 = sub_56;
  if (controller_v_395) {
    sub_53 = sub_55;
  } else {
    sub_53 = sub_54;
  };
  if (controller_v_394) {
    v_720 = sub_53;
  } else {
    v_720 = sub_52;
  };
  if (controller_v_393) {
    v_721 = v_720;
  } else {
    v_721 = sub_33;
  };
  if (controller_comfort_input) {
    sub_32 = sub_14;
  } else {
    sub_32 = v_721;
  };
  sub_31 = sub_32;
  if (controller_c_window) {
    sub_57 = false;
  } else {
    sub_57 = sub_32;
  };
  if (controller_push_window) {
    v_722 = sub_57;
    sub_30 = sub_31;
  } else {
    v_722 = sub_31;
    sub_30 = sub_57;
  };
  if (controller_ck_11_1) {
    sub_29 = v_722;
  } else {
    sub_29 = sub_30;
  };
  if (controller_eco_input) {
    sub_25 = sub_26;
  } else {
    sub_25 = sub_29;
  };
  if (controller_v_292) {
    sub_58 = sub_29;
  } else {
    sub_58 = sub_26;
  };
  if (controller_v_293) {
    sub_24 = sub_58;
  } else {
    sub_24 = sub_25;
  };
  if (controller_rad_c1) {
    v_724 = sub_24;
  } else {
    v_724 = sub_9;
  };
  if (controller_rad_up1) {
    sub_23 = v_724;
  } else {
    sub_23 = sub_8;
  };
  if (controller_rad_down1) {
    v_712 = sub_10;
  } else {
    v_712 = sub_24;
  };
  if (controller_rad_c1) {
    sub_59 = v_712;
  } else {
    sub_59 = sub_9;
  };
  if (controller_v_427) {
    sub_22 = sub_59;
  } else {
    sub_22 = sub_23;
  };
  sub_21 = sub_22;
  if (controller_v_426) {
    sub_4 = sub_21;
  } else {
    sub_4 = sub_5;
  };
  sub_75 = true;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (controller_c_window) {
    sub_82 = sub_13;
  } else {
    sub_82 = sub_68;
  };
  if (controller_push_window) {
    v_710 = sub_82;
    sub_81 = sub_67;
  } else {
    v_710 = sub_67;
    sub_81 = sub_82;
  };
  if (controller_ck_11_1) {
    sub_80 = v_710;
  } else {
    sub_80 = sub_81;
  };
  if (controller_wash_end) {
    sub_96 = sub_75;
  } else {
    sub_96 = sub_20;
  };
  if (controller_v_337) {
    sub_95 = sub_19;
  } else {
    sub_95 = sub_96;
  };
  sub_98 = !(controller_wash_start);
  if (controller_v_337) {
    v_706 = sub_98;
  } else {
    v_706 = sub_74;
  };
  if (controller_v_336) {
    sub_97 = v_706;
  } else {
    sub_97 = sub_74;
  };
  if (controller_v_338) {
    sub_94 = sub_97;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (controller_c_oven) {
    sub_90 = sub_91;
  } else {
    sub_90 = sub_71;
  };
  if (controller_wash_end) {
    v_704 = sub_20;
  } else {
    v_704 = sub_75;
  };
  if (controller_v_337) {
    v_705 = v_704;
  } else {
    v_705 = sub_96;
  };
  if (controller_v_336) {
    sub_103 = v_705;
  } else {
    sub_103 = sub_74;
  };
  if (controller_v_338) {
    sub_102 = sub_74;
  } else {
    sub_102 = sub_103;
  };
  sub_101 = sub_102;
  if (controller_oven_temp_ok) {
    sub_100 = sub_73;
  } else {
    sub_100 = sub_101;
  };
  sub_99 = sub_100;
  if (controller_v_395) {
    sub_89 = sub_99;
  } else {
    sub_89 = sub_90;
  };
  sub_88 = sub_89;
  sub_104 = sub_91;
  if (controller_v_394) {
    sub_87 = sub_104;
  } else {
    sub_87 = sub_88;
  };
  if (controller_v_395) {
    v_703 = sub_104;
    v_702 = sub_104;
  } else {
    v_703 = sub_70;
    v_702 = sub_90;
  };
  if (controller_oven_start) {
    sub_105 = v_702;
  } else {
    sub_105 = v_703;
  };
  if (controller_oven_cold) {
    v_701 = sub_101;
  } else {
    v_701 = sub_72;
  };
  if (controller_c_oven) {
    sub_107 = v_701;
  } else {
    sub_107 = sub_71;
  };
  if (controller_oven_finish) {
    v_700 = sub_74;
  } else {
    v_700 = sub_94;
  };
  if (controller_oven_temp_ok) {
    sub_109 = sub_73;
  } else {
    sub_109 = v_700;
  };
  sub_108 = sub_109;
  if (controller_v_395) {
    sub_106 = sub_108;
  } else {
    sub_106 = sub_107;
  };
  if (controller_v_394) {
    v_707 = sub_106;
  } else {
    v_707 = sub_105;
  };
  if (controller_v_393) {
    v_708 = v_707;
  } else {
    v_708 = sub_87;
  };
  if (controller_comfort_input) {
    sub_86 = sub_69;
  } else {
    sub_86 = v_708;
  };
  sub_85 = sub_86;
  if (controller_c_window) {
    sub_110 = sub_13;
  } else {
    sub_110 = sub_86;
  };
  if (controller_push_window) {
    v_709 = sub_110;
    sub_84 = sub_85;
  } else {
    v_709 = sub_85;
    sub_84 = sub_110;
  };
  if (controller_ck_11_1) {
    sub_83 = v_709;
  } else {
    sub_83 = sub_84;
  };
  if (controller_eco_input) {
    sub_79 = sub_80;
  } else {
    sub_79 = sub_83;
  };
  if (controller_v_292) {
    sub_111 = sub_83;
  } else {
    sub_111 = sub_80;
  };
  if (controller_v_293) {
    sub_78 = sub_111;
  } else {
    sub_78 = sub_79;
  };
  if (controller_c_oven) {
    sub_121 = sub_16;
  } else {
    sub_121 = sub_71;
  };
  if (controller_oven_temp_ok) {
    sub_123 = sub_101;
  } else {
    sub_123 = sub_93;
  };
  sub_122 = sub_123;
  if (controller_v_395) {
    sub_120 = sub_122;
  } else {
    sub_120 = sub_121;
  };
  sub_119 = sub_120;
  if (controller_v_394) {
    sub_118 = sub_14;
  } else {
    sub_118 = sub_119;
  };
  if (controller_v_395) {
    v_696 = sub_15;
    v_695 = sub_15;
  } else {
    v_696 = sub_70;
    v_695 = sub_121;
  };
  if (controller_oven_start) {
    sub_124 = v_695;
  } else {
    sub_124 = v_696;
  };
  if (controller_oven_finish) {
    sub_128 = sub_74;
  } else {
    sub_128 = sub_102;
  };
  sub_127 = sub_128;
  if (controller_oven_cold) {
    v_694 = sub_92;
  } else {
    v_694 = sub_127;
  };
  sub_129 = sub_127;
  if (controller_c_oven) {
    sub_126 = v_694;
  } else {
    sub_126 = sub_129;
  };
  if (controller_oven_finish) {
    v_693 = sub_74;
  } else {
    v_693 = sub_19;
  };
  if (controller_oven_temp_ok) {
    sub_131 = sub_128;
  } else {
    sub_131 = v_693;
  };
  sub_130 = sub_131;
  if (controller_v_395) {
    sub_125 = sub_130;
  } else {
    sub_125 = sub_126;
  };
  if (controller_v_394) {
    v_697 = sub_125;
  } else {
    v_697 = sub_124;
  };
  if (controller_v_393) {
    v_698 = v_697;
  } else {
    v_698 = sub_118;
  };
  if (controller_comfort_input) {
    sub_117 = sub_69;
  } else {
    sub_117 = v_698;
  };
  sub_116 = sub_117;
  if (controller_c_window) {
    sub_132 = sub_13;
  } else {
    sub_132 = sub_117;
  };
  if (controller_push_window) {
    v_699 = sub_132;
    sub_115 = sub_116;
  } else {
    v_699 = sub_116;
    sub_115 = sub_132;
  };
  if (controller_ck_11_1) {
    sub_114 = v_699;
  } else {
    sub_114 = sub_115;
  };
  if (controller_eco_input) {
    sub_113 = sub_80;
  } else {
    sub_113 = sub_114;
  };
  if (controller_v_292) {
    sub_133 = sub_114;
  } else {
    sub_133 = sub_80;
  };
  if (controller_v_293) {
    sub_112 = sub_133;
  } else {
    sub_112 = sub_113;
  };
  if (controller_rad_down1) {
    v_711 = sub_78;
  } else {
    v_711 = sub_112;
  };
  if (controller_rad_c1) {
    sub_77 = v_711;
  } else {
    sub_77 = sub_78;
  };
  if (controller_v_427) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_62;
  };
  if (controller_rad_down2) {
    sub_60 = sub_61;
  } else {
    sub_60 = sub_76;
  };
  if (controller_c_window) {
    sub_140 = false;
  } else {
    sub_140 = sub_68;
  };
  if (controller_push_window) {
    v_689 = sub_140;
    sub_139 = sub_67;
  } else {
    v_689 = sub_67;
    sub_139 = sub_140;
  };
  if (controller_ck_11_1) {
    sub_138 = v_689;
  } else {
    sub_138 = sub_139;
  };
  if (controller_wash_end) {
    sub_154 = sub_75;
  } else {
    sub_154 = false;
  };
  if (controller_v_337) {
    sub_153 = false;
  } else {
    sub_153 = sub_154;
  };
  v_683 = !(controller_wash_start);
  sub_155 = (v_683||false);
  if (controller_v_337) {
    v_684 = sub_155;
  } else {
    v_684 = sub_74;
  };
  if (controller_v_336) {
    v_685 = v_684;
  } else {
    v_685 = sub_74;
  };
  if (controller_v_338) {
    sub_152 = v_685;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  if (controller_c_oven) {
    sub_148 = sub_149;
  } else {
    sub_148 = sub_71;
  };
  if (controller_wash_end) {
    v_681 = false;
  } else {
    v_681 = sub_75;
  };
  if (controller_v_337) {
    v_682 = v_681;
  } else {
    v_682 = sub_154;
  };
  if (controller_v_336) {
    sub_160 = v_682;
  } else {
    sub_160 = sub_74;
  };
  if (controller_v_338) {
    sub_159 = sub_74;
  } else {
    sub_159 = sub_160;
  };
  sub_158 = sub_159;
  if (controller_oven_temp_ok) {
    sub_157 = sub_73;
  } else {
    sub_157 = sub_158;
  };
  sub_156 = sub_157;
  if (controller_v_395) {
    sub_147 = sub_156;
  } else {
    sub_147 = sub_148;
  };
  sub_146 = sub_147;
  sub_161 = sub_149;
  if (controller_v_394) {
    sub_145 = sub_161;
  } else {
    sub_145 = sub_146;
  };
  if (controller_v_395) {
    v_680 = sub_161;
    v_679 = sub_161;
  } else {
    v_680 = sub_70;
    v_679 = sub_148;
  };
  if (controller_oven_start) {
    sub_162 = v_679;
  } else {
    sub_162 = v_680;
  };
  if (controller_oven_cold) {
    v_678 = sub_158;
  } else {
    v_678 = sub_72;
  };
  if (controller_c_oven) {
    sub_164 = v_678;
  } else {
    sub_164 = sub_71;
  };
  if (controller_oven_finish) {
    v_677 = sub_74;
  } else {
    v_677 = sub_152;
  };
  if (controller_oven_temp_ok) {
    sub_166 = sub_73;
  } else {
    sub_166 = v_677;
  };
  sub_165 = sub_166;
  if (controller_v_395) {
    sub_163 = sub_165;
  } else {
    sub_163 = sub_164;
  };
  if (controller_v_394) {
    v_686 = sub_163;
  } else {
    v_686 = sub_162;
  };
  if (controller_v_393) {
    v_687 = v_686;
  } else {
    v_687 = sub_145;
  };
  if (controller_comfort_input) {
    sub_144 = sub_69;
  } else {
    sub_144 = v_687;
  };
  sub_143 = sub_144;
  if (controller_c_window) {
    sub_167 = false;
  } else {
    sub_167 = sub_144;
  };
  if (controller_push_window) {
    v_688 = sub_167;
    sub_142 = sub_143;
  } else {
    v_688 = sub_143;
    sub_142 = sub_167;
  };
  if (controller_ck_11_1) {
    sub_141 = v_688;
  } else {
    sub_141 = sub_142;
  };
  if (controller_eco_input) {
    sub_137 = sub_138;
  } else {
    sub_137 = sub_141;
  };
  if (controller_v_292) {
    sub_168 = sub_141;
  } else {
    sub_168 = sub_138;
  };
  if (controller_v_293) {
    sub_136 = sub_168;
  } else {
    sub_136 = sub_137;
  };
  if (controller_rad_c1) {
    v_690 = sub_136;
  } else {
    v_690 = sub_64;
  };
  if (controller_rad_up1) {
    sub_135 = v_690;
  } else {
    sub_135 = sub_63;
  };
  if (controller_c_oven) {
    sub_178 = sub_37;
  } else {
    sub_178 = sub_71;
  };
  if (controller_v_337) {
    v_671 = sub_49;
  } else {
    v_671 = sub_154;
  };
  if (controller_v_336) {
    sub_183 = v_671;
  } else {
    sub_183 = sub_95;
  };
  if (controller_v_338) {
    sub_182 = sub_97;
  } else {
    sub_182 = sub_183;
  };
  sub_181 = sub_182;
  if (controller_oven_temp_ok) {
    sub_180 = sub_101;
  } else {
    sub_180 = sub_181;
  };
  sub_179 = sub_180;
  if (controller_v_395) {
    sub_177 = sub_179;
  } else {
    sub_177 = sub_178;
  };
  sub_176 = sub_177;
  if (controller_v_394) {
    sub_175 = sub_50;
  } else {
    sub_175 = sub_176;
  };
  if (controller_v_395) {
    v_670 = sub_51;
    v_669 = sub_51;
  } else {
    v_670 = sub_70;
    v_669 = sub_178;
  };
  if (controller_oven_start) {
    sub_184 = v_669;
  } else {
    sub_184 = v_670;
  };
  if (controller_oven_cold) {
    v_668 = sub_181;
  } else {
    v_668 = sub_127;
  };
  if (controller_c_oven) {
    sub_186 = v_668;
  } else {
    sub_186 = sub_129;
  };
  if (controller_oven_finish) {
    v_667 = sub_74;
  } else {
    v_667 = sub_40;
  };
  if (controller_oven_temp_ok) {
    sub_188 = sub_128;
  } else {
    sub_188 = v_667;
  };
  sub_187 = sub_188;
  if (controller_v_395) {
    sub_185 = sub_187;
  } else {
    sub_185 = sub_186;
  };
  if (controller_v_394) {
    v_672 = sub_185;
  } else {
    v_672 = sub_184;
  };
  if (controller_v_393) {
    v_673 = v_672;
  } else {
    v_673 = sub_175;
  };
  if (controller_comfort_input) {
    sub_174 = sub_69;
  } else {
    sub_174 = v_673;
  };
  sub_173 = sub_174;
  if (controller_c_window) {
    sub_189 = false;
  } else {
    sub_189 = sub_174;
  };
  if (controller_push_window) {
    v_674 = sub_189;
    sub_172 = sub_173;
  } else {
    v_674 = sub_173;
    sub_172 = sub_189;
  };
  if (controller_ck_11_1) {
    sub_171 = v_674;
  } else {
    sub_171 = sub_172;
  };
  if (controller_eco_input) {
    sub_170 = sub_138;
  } else {
    sub_170 = sub_171;
  };
  if (controller_v_292) {
    sub_190 = sub_171;
  } else {
    sub_190 = sub_138;
  };
  if (controller_v_293) {
    v_675 = sub_190;
  } else {
    v_675 = sub_170;
  };
  if (controller_rad_down1) {
    v_676 = sub_112;
  } else {
    v_676 = v_675;
  };
  if (controller_rad_c1) {
    sub_169 = v_676;
  } else {
    sub_169 = sub_112;
  };
  if (controller_v_427) {
    v_691 = sub_169;
  } else {
    v_691 = sub_135;
  };
  if (controller_rad_down1) {
    v_666 = sub_65;
  } else {
    v_666 = sub_136;
  };
  if (controller_rad_c1) {
    sub_191 = v_666;
  } else {
    sub_191 = sub_64;
  };
  if (controller_v_427) {
    v_692 = sub_191;
  } else {
    v_692 = sub_135;
  };
  if (controller_rad_up2) {
    sub_134 = v_691;
  } else {
    sub_134 = v_692;
  };
  if (controller_v_426) {
    v_725 = sub_134;
  } else {
    v_725 = sub_60;
  };
  if (p_controller_rad_c2) {
    sub_3 = v_725;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_200 = sub_26;
  sub_199 = sub_200;
  sub_198 = sub_199;
  sub_197 = sub_198;
  sub_196 = sub_197;
  sub_195 = sub_196;
  if (controller_rad_c1) {
    v_664 = false;
  } else {
    v_664 = sub_199;
  };
  if (controller_rad_up1) {
    sub_203 = v_664;
  } else {
    sub_203 = sub_198;
  };
  if (controller_rad_down1) {
    v_663 = sub_200;
  } else {
    v_663 = false;
  };
  if (controller_rad_c1) {
    sub_205 = v_663;
  } else {
    sub_205 = sub_199;
  };
  sub_204 = sub_205;
  if (controller_v_427) {
    sub_202 = sub_204;
  } else {
    sub_202 = sub_203;
  };
  sub_201 = sub_202;
  if (controller_v_426) {
    sub_194 = sub_201;
  } else {
    sub_194 = sub_195;
  };
  sub_210 = sub_138;
  sub_209 = sub_210;
  sub_208 = sub_209;
  sub_207 = sub_208;
  if (controller_v_427) {
    sub_211 = sub_197;
  } else {
    sub_211 = sub_207;
  };
  if (controller_rad_down2) {
    sub_206 = sub_207;
  } else {
    sub_206 = sub_211;
  };
  if (controller_rad_c1) {
    v_660 = false;
  } else {
    v_660 = sub_209;
  };
  if (controller_rad_up1) {
    sub_213 = v_660;
  } else {
    sub_213 = sub_208;
  };
  if (controller_v_427) {
    v_661 = sub_204;
  } else {
    v_661 = sub_213;
  };
  if (controller_rad_down1) {
    v_659 = sub_210;
  } else {
    v_659 = false;
  };
  if (controller_rad_c1) {
    sub_214 = v_659;
  } else {
    sub_214 = sub_209;
  };
  if (controller_v_427) {
    v_662 = sub_214;
  } else {
    v_662 = sub_213;
  };
  if (controller_rad_up2) {
    sub_212 = v_661;
  } else {
    sub_212 = v_662;
  };
  if (controller_v_426) {
    v_665 = sub_212;
  } else {
    v_665 = sub_206;
  };
  if (p_controller_rad_c2) {
    sub_193 = v_665;
  } else {
    sub_193 = sub_194;
  };
  sub_192 = sub_193;
  if (controller_room_presence) {
    sub_1 = sub_2;
  } else {
    sub_1 = sub_192;
  };
  if (controller_rad_c1) {
    v_657 = false;
  } else {
    v_657 = sub_9;
  };
  if (controller_rad_up1) {
    sub_221 = v_657;
  } else {
    sub_221 = sub_8;
  };
  if (controller_rad_down1) {
    v_656 = sub_10;
  } else {
    v_656 = false;
  };
  if (controller_rad_c1) {
    sub_223 = v_656;
  } else {
    sub_223 = sub_9;
  };
  sub_222 = sub_223;
  if (controller_v_427) {
    sub_220 = sub_222;
  } else {
    sub_220 = sub_221;
  };
  sub_219 = sub_220;
  if (controller_v_426) {
    sub_218 = sub_219;
  } else {
    sub_218 = sub_5;
  };
  if (controller_v_427) {
    sub_225 = sub_7;
  } else {
    sub_225 = sub_62;
  };
  if (controller_rad_down2) {
    sub_224 = sub_61;
  } else {
    sub_224 = sub_225;
  };
  if (controller_rad_c1) {
    v_653 = false;
  } else {
    v_653 = sub_64;
  };
  if (controller_rad_up1) {
    sub_227 = v_653;
  } else {
    sub_227 = sub_63;
  };
  if (controller_v_427) {
    v_654 = sub_222;
  } else {
    v_654 = sub_227;
  };
  if (controller_rad_down1) {
    v = sub_65;
  } else {
    v = false;
  };
  if (controller_rad_c1) {
    sub_228 = v;
  } else {
    sub_228 = sub_64;
  };
  if (controller_v_427) {
    v_655 = sub_228;
  } else {
    v_655 = sub_227;
  };
  if (controller_rad_up2) {
    sub_226 = v_654;
  } else {
    sub_226 = v_655;
  };
  if (controller_v_426) {
    v_658 = sub_226;
  } else {
    v_658 = sub_224;
  };
  if (p_controller_rad_c2) {
    sub_217 = v_658;
  } else {
    sub_217 = sub_218;
  };
  sub_216 = sub_217;
  if (controller_room_presence) {
    sub_215 = sub_216;
  } else {
    sub_215 = false;
  };
  if (controller_ck_9_1) {
    v_727 = sub_1;
    v_726 = sub_215;
  } else {
    v_727 = sub_215;
    v_726 = sub_1;
  };
  if (controller_push_door) {
    v_728 = v_726;
  } else {
    v_728 = v_727;
  };
  if (controller_c_door) {
    sub_0 = v_728;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_rad_c2 = sub_0;;
}

void Controller_controller__controller_controller_controller_rad_c1_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door, int controller_c_oven,
  int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_rad_c1_out* _out) {
  
  int v_745;
  int v_744;
  int v_743;
  int v_742;
  int v_741;
  int v_740;
  int v_739;
  int v_738;
  int v_737;
  int v_736;
  int v_735;
  int v_734;
  int v_733;
  int v_732;
  int v_731;
  int v_730;
  int v_729;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  sub_19 = p_controller_rad_c1;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_35 = false;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (controller_c_window) {
    sub_27 = sub_28;
  } else {
    sub_27 = sub_11;
  };
  if (controller_push_window) {
    v_742 = sub_27;
    sub_26 = sub_10;
  } else {
    v_742 = sub_10;
    sub_26 = sub_27;
  };
  if (controller_ck_11_1) {
    sub_25 = v_742;
  } else {
    sub_25 = sub_26;
  };
  if (controller_wash_end) {
    sub_49 = sub_18;
  } else {
    sub_49 = sub_35;
  };
  if (controller_v_337) {
    sub_48 = sub_34;
  } else {
    sub_48 = sub_49;
  };
  v_736 = !(controller_wash_start);
  sub_50 = (v_736&&sub_19);
  if (controller_v_337) {
    v_737 = sub_50;
  } else {
    v_737 = sub_17;
  };
  if (controller_v_336) {
    v_738 = v_737;
  } else {
    v_738 = sub_17;
  };
  if (controller_v_338) {
    sub_47 = v_738;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  if (controller_c_oven) {
    sub_43 = sub_44;
  } else {
    sub_43 = sub_14;
  };
  if (controller_wash_end) {
    v_734 = sub_35;
  } else {
    v_734 = sub_18;
  };
  if (controller_v_337) {
    v_735 = v_734;
  } else {
    v_735 = sub_49;
  };
  if (controller_v_336) {
    sub_55 = v_735;
  } else {
    sub_55 = sub_17;
  };
  if (controller_v_338) {
    sub_54 = sub_17;
  } else {
    sub_54 = sub_55;
  };
  sub_53 = sub_54;
  if (controller_oven_temp_ok) {
    sub_52 = sub_16;
  } else {
    sub_52 = sub_53;
  };
  sub_51 = sub_52;
  if (controller_v_395) {
    sub_42 = sub_51;
  } else {
    sub_42 = sub_43;
  };
  sub_41 = sub_42;
  sub_56 = sub_44;
  if (controller_v_394) {
    sub_40 = sub_56;
  } else {
    sub_40 = sub_41;
  };
  if (controller_v_395) {
    v_733 = sub_56;
    v_732 = sub_56;
  } else {
    v_733 = sub_13;
    v_732 = sub_43;
  };
  if (controller_oven_start) {
    sub_57 = v_732;
  } else {
    sub_57 = v_733;
  };
  if (controller_oven_cold) {
    v_731 = sub_53;
  } else {
    v_731 = sub_15;
  };
  if (controller_c_oven) {
    sub_59 = v_731;
  } else {
    sub_59 = sub_14;
  };
  if (controller_oven_finish) {
    v_730 = sub_17;
  } else {
    v_730 = sub_47;
  };
  if (controller_oven_temp_ok) {
    sub_61 = sub_16;
  } else {
    sub_61 = v_730;
  };
  sub_60 = sub_61;
  if (controller_v_395) {
    sub_58 = sub_60;
  } else {
    sub_58 = sub_59;
  };
  if (controller_v_394) {
    v_739 = sub_58;
  } else {
    v_739 = sub_57;
  };
  if (controller_v_393) {
    v_740 = v_739;
  } else {
    v_740 = sub_40;
  };
  if (controller_comfort_input) {
    sub_39 = sub_12;
  } else {
    sub_39 = v_740;
  };
  sub_38 = sub_39;
  if (controller_c_window) {
    sub_62 = sub_28;
  } else {
    sub_62 = sub_39;
  };
  if (controller_push_window) {
    v_741 = sub_62;
    sub_37 = sub_38;
  } else {
    v_741 = sub_38;
    sub_37 = sub_62;
  };
  if (controller_ck_11_1) {
    sub_36 = v_741;
  } else {
    sub_36 = sub_37;
  };
  if (controller_eco_input) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_36;
  };
  if (controller_v_292) {
    sub_63 = sub_36;
  } else {
    sub_63 = sub_25;
  };
  if (controller_v_293) {
    sub_23 = sub_63;
  } else {
    sub_23 = sub_24;
  };
  if (controller_rad_up1) {
    sub_22 = sub_23;
  } else {
    sub_22 = sub_7;
  };
  if (controller_rad_down1) {
    sub_64 = sub_8;
  } else {
    sub_64 = sub_23;
  };
  if (controller_v_427) {
    sub_21 = sub_64;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  if (controller_v_426) {
    sub_3 = sub_20;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (controller_c_window) {
    sub_74 = false;
  } else {
    sub_74 = sub_11;
  };
  if (controller_push_window) {
    v_729 = sub_74;
    sub_73 = sub_10;
  } else {
    v_729 = sub_10;
    sub_73 = sub_74;
  };
  if (controller_ck_11_1) {
    sub_72 = v_729;
  } else {
    sub_72 = sub_73;
  };
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_81 = sub_28;
  if (controller_c_window) {
    sub_82 = false;
  } else {
    sub_82 = sub_28;
  };
  if (controller_push_window) {
    v = sub_82;
    sub_80 = sub_81;
  } else {
    v = sub_81;
    sub_80 = sub_82;
  };
  if (controller_ck_11_1) {
    sub_79 = v;
  } else {
    sub_79 = sub_80;
  };
  sub_78 = sub_79;
  if (controller_rad_up1) {
    sub_77 = sub_78;
  } else {
    sub_77 = sub_70;
  };
  if (controller_rad_down1) {
    sub_83 = sub_71;
  } else {
    sub_83 = sub_78;
  };
  if (controller_v_427) {
    sub_76 = sub_83;
  } else {
    sub_76 = sub_77;
  };
  sub_75 = sub_76;
  if (controller_v_426) {
    sub_66 = sub_75;
  } else {
    sub_66 = sub_67;
  };
  sub_65 = sub_66;
  if (controller_room_presence) {
    sub_1 = sub_2;
  } else {
    sub_1 = sub_65;
  };
  sub_91 = sub_81;
  sub_90 = sub_91;
  if (controller_rad_up1) {
    sub_89 = sub_90;
  } else {
    sub_89 = sub_7;
  };
  if (controller_rad_down1) {
    sub_92 = sub_8;
  } else {
    sub_92 = sub_90;
  };
  if (controller_v_427) {
    sub_88 = sub_92;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  if (controller_v_426) {
    sub_86 = sub_87;
  } else {
    sub_86 = sub_4;
  };
  sub_85 = sub_86;
  if (controller_room_presence) {
    sub_84 = sub_85;
  } else {
    sub_84 = false;
  };
  if (controller_ck_9_1) {
    v_744 = sub_1;
    v_743 = sub_84;
  } else {
    v_744 = sub_84;
    v_743 = sub_1;
  };
  if (controller_push_door) {
    v_745 = v_743;
  } else {
    v_745 = v_744;
  };
  if (controller_c_door) {
    sub_0 = v_745;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_rad_c1 = sub_0;;
}

void Controller_controller__controller_controller_controller_c_oven_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door,
  int controller_c_window, int controller_c_door,
  Controller_controller__controller_controller_controller_c_oven_out* _out) {
  
  int v_748;
  int v_747;
  int v_746;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  sub_18 = p_controller_c_oven;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (controller_c_window) {
    sub_27 = false;
  } else {
    sub_27 = sub_11;
  };
  if (controller_push_window) {
    v = sub_27;
    sub_26 = sub_10;
  } else {
    v = sub_10;
    sub_26 = sub_27;
  };
  if (controller_ck_11_1) {
    sub_25 = v;
  } else {
    sub_25 = sub_26;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_room_presence) {
    sub_1 = sub_2;
    sub_28 = sub_2;
  } else {
    sub_1 = sub_19;
    sub_28 = false;
  };
  if (controller_ck_9_1) {
    v_747 = sub_1;
    v_746 = sub_28;
  } else {
    v_747 = sub_28;
    v_746 = sub_1;
  };
  if (controller_push_door) {
    v_748 = v_746;
  } else {
    v_748 = v_747;
  };
  if (controller_c_door) {
    sub_0 = v_748;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_oven = sub_0;;
}

void Controller_controller__controller_controller_controller_c_window_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door, int controller_c_door,
  Controller_controller__controller_controller_controller_c_window_out* _out) {
  
  int v_751;
  int v_750;
  int v_749;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  sub_17 = p_controller_c_window;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_32 = false;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (controller_push_window) {
    v = sub_26;
    sub_25 = sub_10;
  } else {
    v = sub_10;
    sub_25 = sub_26;
  };
  if (controller_ck_11_1) {
    sub_24 = v;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  if (controller_room_presence) {
    sub_1 = sub_2;
    sub_33 = sub_2;
  } else {
    sub_1 = sub_18;
    sub_33 = false;
  };
  if (controller_ck_9_1) {
    v_750 = sub_1;
    v_749 = sub_33;
  } else {
    v_750 = sub_33;
    v_749 = sub_1;
  };
  if (controller_push_door) {
    v_751 = v_749;
  } else {
    v_751 = v_750;
  };
  if (controller_c_door) {
    sub_0 = v_751;
  } else {
    sub_0 = sub_1;
  };
  _out->controller_c_window = sub_0;;
}

void Controller_controller__controller_controller_controller_c_door_step(
  int controller_push_door, int controller_push_window,
  int controller_room_presence, int controller_lamp_switch,
  int controller_tv_switch, int controller_rad_up1, int controller_rad_down1,
  int controller_rad_up2, int controller_rad_down2,
  int controller_wash_start, int controller_wash_end,
  int controller_oven_start, int controller_oven_finish,
  int controller_oven_temp_ok, int controller_oven_cold,
  int controller_eco_input, int controller_comfort_input,
  int controller_ck_9_1, int controller_pnr_8, int controller_ck_11_1,
  int controller_pnr_7, int controller_ck_13_1, int controller_pnr_6,
  int controller_ck_15_1, int controller_pnr_5, int controller_ck_17_1,
  int controller_pnr_4, int controller_v_427, int controller_v_426,
  int controller_pnr_3, int controller_v_395, int controller_v_394,
  int controller_v_393, int controller_pnr_2, int controller_v_338,
  int controller_v_337, int controller_v_336, int controller_pnr_1,
  int controller_v_293, int controller_v_292, int controller_pnr,
  int p_controller_c_wash, int p_controller_c2_tv, int p_controller_c2_lamp,
  int p_controller_c1_tv, int p_controller_c1_lamp, int p_controller_rad_c3,
  int p_controller_rad_c2, int p_controller_rad_c1, int p_controller_c_oven,
  int p_controller_c_window, int p_controller_c_door,
  Controller_controller__controller_controller_controller_c_door_out* _out) {
  
  int v_752;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  sub_17 = p_controller_c_door;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_1 = sub_2;
  sub_32 = false;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (controller_room_presence) {
    sub_18 = sub_2;
  } else {
    sub_18 = sub_19;
  };
  if (controller_ck_9_1) {
    v_752 = sub_1;
    v = sub_18;
  } else {
    v_752 = sub_18;
    v = sub_1;
  };
  if (controller_push_door) {
    sub_0 = v;
  } else {
    sub_0 = v_752;
  };
  _out->controller_c_door = sub_0;;
}

void Controller_controller__controller_controller_step(int controller_push_door,
                                                       int controller_push_window,
                                                       int controller_room_presence,
                                                       int controller_lamp_switch,
                                                       int controller_tv_switch,
                                                       int controller_rad_up1,
                                                       int controller_rad_down1,
                                                       int controller_rad_up2,
                                                       int controller_rad_down2,
                                                       int controller_wash_start,
                                                       int controller_wash_end,
                                                       int controller_oven_start,
                                                       int controller_oven_finish,
                                                       int controller_oven_temp_ok,
                                                       int controller_oven_cold,
                                                       int controller_eco_input,
                                                       int controller_comfort_input,
                                                       int controller_ck_9_1,
                                                       int controller_pnr_8,
                                                       int controller_ck_11_1,
                                                       int controller_pnr_7,
                                                       int controller_ck_13_1,
                                                       int controller_pnr_6,
                                                       int controller_ck_15_1,
                                                       int controller_pnr_5,
                                                       int controller_ck_17_1,
                                                       int controller_pnr_4,
                                                       int controller_v_427,
                                                       int controller_v_426,
                                                       int controller_pnr_3,
                                                       int controller_v_395,
                                                       int controller_v_394,
                                                       int controller_v_393,
                                                       int controller_pnr_2,
                                                       int controller_v_338,
                                                       int controller_v_337,
                                                       int controller_v_336,
                                                       int controller_pnr_1,
                                                       int controller_v_293,
                                                       int controller_v_292,
                                                       int controller_pnr,
                                                       int p_controller_c_wash,
                                                       int p_controller_c2_tv,
                                                       int p_controller_c2_lamp,
                                                       int p_controller_c1_tv,
                                                       int p_controller_c1_lamp,
                                                       int p_controller_rad_c3,
                                                       int p_controller_rad_c2,
                                                       int p_controller_rad_c1,
                                                       int p_controller_c_oven,
                                                       int p_controller_c_window,
                                                       int p_controller_c_door,
                                                       Controller_controller__controller_controller_out* _out) {
  Controller_controller__controller_controller_controller_c2_lamp_out Controller_controller__controller_controller_controller_c2_lamp_out_st;
  Controller_controller__controller_controller_controller_rad_c2_out Controller_controller__controller_controller_controller_rad_c2_out_st;
  Controller_controller__controller_controller_controller_c_door_out Controller_controller__controller_controller_controller_c_door_out_st;
  Controller_controller__controller_controller_controller_c_window_out Controller_controller__controller_controller_controller_c_window_out_st;
  Controller_controller__controller_controller_controller_c_oven_out Controller_controller__controller_controller_controller_c_oven_out_st;
  Controller_controller__controller_controller_controller_rad_c3_out Controller_controller__controller_controller_controller_rad_c3_out_st;
  Controller_controller__controller_controller_controller_c1_tv_out Controller_controller__controller_controller_controller_c1_tv_out_st;
  Controller_controller__controller_controller_controller_c2_tv_out Controller_controller__controller_controller_controller_c2_tv_out_st;
  Controller_controller__controller_controller_controller_c_wash_out Controller_controller__controller_controller_controller_c_wash_out_st;
  Controller_controller__controller_controller_controller_rad_c1_out Controller_controller__controller_controller_controller_rad_c1_out_st;
  Controller_controller__controller_controller_controller_c1_lamp_out Controller_controller__controller_controller_controller_c1_lamp_out_st;
  Controller_controller__controller_controller_controller_c_door_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door,
  &Controller_controller__controller_controller_controller_c_door_out_st);
  _out->controller_c_door = Controller_controller__controller_controller_controller_c_door_out_st.controller_c_door;
  Controller_controller__controller_controller_controller_c_window_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_window_out_st);
  _out->controller_c_window = Controller_controller__controller_controller_controller_c_window_out_st.controller_c_window;
  Controller_controller__controller_controller_controller_c_oven_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door, _out->controller_c_window, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_oven_out_st);
  _out->controller_c_oven = Controller_controller__controller_controller_controller_c_oven_out_st.controller_c_oven;
  Controller_controller__controller_controller_controller_rad_c1_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door, _out->controller_c_oven, _out->controller_c_window,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_rad_c1_out_st);
  _out->controller_rad_c1 = Controller_controller__controller_controller_controller_rad_c1_out_st.controller_rad_c1;
  Controller_controller__controller_controller_controller_rad_c2_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door, _out->controller_rad_c1, _out->controller_c_oven,
  _out->controller_c_window, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_rad_c2_out_st);
  _out->controller_rad_c2 = Controller_controller__controller_controller_controller_rad_c2_out_st.controller_rad_c2;
  Controller_controller__controller_controller_controller_rad_c3_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door, _out->controller_rad_c2, _out->controller_rad_c1,
  _out->controller_c_oven, _out->controller_c_window,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_rad_c3_out_st);
  _out->controller_rad_c3 = Controller_controller__controller_controller_controller_rad_c3_out_st.controller_rad_c3;
  Controller_controller__controller_controller_controller_c1_lamp_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door, _out->controller_rad_c3, _out->controller_rad_c2,
  _out->controller_rad_c1, _out->controller_c_oven,
  _out->controller_c_window, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c1_lamp_out_st);
  _out->controller_c1_lamp = Controller_controller__controller_controller_controller_c1_lamp_out_st.controller_c1_lamp;
  Controller_controller__controller_controller_controller_c1_tv_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door, _out->controller_c1_lamp, _out->controller_rad_c3,
  _out->controller_rad_c2, _out->controller_rad_c1, _out->controller_c_oven,
  _out->controller_c_window, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c1_tv_out_st);
  _out->controller_c1_tv = Controller_controller__controller_controller_controller_c1_tv_out_st.controller_c1_tv;
  Controller_controller__controller_controller_controller_c2_lamp_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door, _out->controller_c1_tv, _out->controller_c1_lamp,
  _out->controller_rad_c3, _out->controller_rad_c2, _out->controller_rad_c1,
  _out->controller_c_oven, _out->controller_c_window,
  _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c2_lamp_out_st);
  _out->controller_c2_lamp = Controller_controller__controller_controller_controller_c2_lamp_out_st.controller_c2_lamp;
  Controller_controller__controller_controller_controller_c2_tv_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door, _out->controller_c2_lamp, _out->controller_c1_tv,
  _out->controller_c1_lamp, _out->controller_rad_c3, _out->controller_rad_c2,
  _out->controller_rad_c1, _out->controller_c_oven,
  _out->controller_c_window, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c2_tv_out_st);
  _out->controller_c2_tv = Controller_controller__controller_controller_controller_c2_tv_out_st.controller_c2_tv;
  Controller_controller__controller_controller_controller_c_wash_step(
  controller_push_door, controller_push_window, controller_room_presence,
  controller_lamp_switch, controller_tv_switch, controller_rad_up1,
  controller_rad_down1, controller_rad_up2, controller_rad_down2,
  controller_wash_start, controller_wash_end, controller_oven_start,
  controller_oven_finish, controller_oven_temp_ok, controller_oven_cold,
  controller_eco_input, controller_comfort_input, controller_ck_9_1,
  controller_pnr_8, controller_ck_11_1, controller_pnr_7, controller_ck_13_1,
  controller_pnr_6, controller_ck_15_1, controller_pnr_5, controller_ck_17_1,
  controller_pnr_4, controller_v_427, controller_v_426, controller_pnr_3,
  controller_v_395, controller_v_394, controller_v_393, controller_pnr_2,
  controller_v_338, controller_v_337, controller_v_336, controller_pnr_1,
  controller_v_293, controller_v_292, controller_pnr, p_controller_c_wash,
  p_controller_c2_tv, p_controller_c2_lamp, p_controller_c1_tv,
  p_controller_c1_lamp, p_controller_rad_c3, p_controller_rad_c2,
  p_controller_rad_c1, p_controller_c_oven, p_controller_c_window,
  p_controller_c_door, _out->controller_c2_tv, _out->controller_c2_lamp,
  _out->controller_c1_tv, _out->controller_c1_lamp, _out->controller_rad_c3,
  _out->controller_rad_c2, _out->controller_rad_c1, _out->controller_c_oven,
  _out->controller_c_window, _out->controller_c_door,
  &Controller_controller__controller_controller_controller_c_wash_out_st);
  _out->controller_c_wash = Controller_controller__controller_controller_controller_c_wash_out_st.controller_c_wash;
}

