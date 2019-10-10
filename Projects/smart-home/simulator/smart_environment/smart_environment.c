/* --- Generated the 1/11/2018 at 10:8 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s controller smart_environment.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "smart_environment.h"

void Smart_environment__management_policy_reset(Smart_environment__management_policy_mem* self) {
  self->pnr = false;
  self->v_138 = false;
  self->v_139 = false;
}

void Smart_environment__management_policy_step(int eco_input,
                                               int comfort_input,
                                               Smart_environment__management_policy_out* _out,
                                               Smart_environment__management_policy_mem* self) {
  
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
  int ns_St_COMFORT_2_0;
  int ns_St_COMFORT_2_1;
  int mode_St_COMFORT_2_0;
  int mode_St_COMFORT_2_1;
  int ns_St_ECO_2_0;
  int ns_St_ECO_2_1;
  int mode_St_ECO_2_0;
  int mode_St_ECO_2_1;
  int ns_St_MINIMAL_SAFETY_2_0;
  int ns_St_MINIMAL_SAFETY_2_1;
  int mode_St_MINIMAL_SAFETY_2_0;
  int mode_St_MINIMAL_SAFETY_2_1;
  int ck_1_2_0;
  int ck_1_2_1;
  int nr_St_COMFORT;
  int ns_St_COMFORT_2;
  int ns_St_COMFORT_1;
  int mode_St_COMFORT_2;
  int mode_St_COMFORT_1;
  int nr_St_ECO;
  int ns_St_ECO_2;
  int ns_St_ECO_1;
  int mode_St_ECO_2;
  int mode_St_ECO_1;
  int nr_St_MINIMAL_SAFETY;
  int ns_St_MINIMAL_SAFETY_2;
  int ns_St_MINIMAL_SAFETY_1;
  int mode_St_MINIMAL_SAFETY_2;
  int mode_St_MINIMAL_SAFETY_1;
  int ck_1_2;
  int ck_1_1;
  int v_6_2_0;
  int v_6_2_1;
  int v_7;
  int v_6_2;
  int v_6_1;
  int v_4_2_0;
  int v_4_2_1;
  int v_5;
  int v_4_2;
  int v_4_1;
  int v_3;
  int v_1_2_0;
  int v_1_2_1;
  int v_2;
  int v_1_2;
  int v_1_1;
  int v;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int s_St_COMFORT_2_0;
  int s_St_COMFORT_2_1;
  int s_St_ECO_2_0;
  int s_St_ECO_2_1;
  int s_St_MINIMAL_SAFETY_2_0;
  int s_St_MINIMAL_SAFETY_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_COMFORT;
  int s_St_COMFORT_2;
  int s_St_COMFORT_1;
  int r_St_ECO;
  int s_St_ECO_2;
  int s_St_ECO_1;
  int r_St_MINIMAL_SAFETY;
  int s_St_MINIMAL_SAFETY_2;
  int s_St_MINIMAL_SAFETY_1;
  int ck_2;
  int ck_1_3;
  int mode_2_0;
  int mode_2_1;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_3 = self->v_138;
  ck_2 = self->v_139;
  if (ck_1_3) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      if (eco_input) {
        v_2 = true;
        v_1_1 = true;
        v_1_2 = false;
      } else {
        v_2 = self->pnr;
        v_1_1 = true;
        v_1_2 = true;
      };
      v = !(comfort_input);
      if (v) {
        r_St_COMFORT = true;
      } else {
        r_St_COMFORT = v_2;
      };
      v_144 = r_St_COMFORT;
      if (v) {
        s_St_COMFORT_1 = false;
      } else {
        s_St_COMFORT_1 = v_1_1;
      };
      v_140 = s_St_COMFORT_1;
      if (v) {
        s_St_COMFORT_2 = false;
      } else {
        s_St_COMFORT_2 = v_1_2;
      };
      v_141 = s_St_COMFORT_2;
    } else {
      v_3 = !(eco_input);
      if (v_3) {
        v_5 = true;
      } else {
        v_5 = self->pnr;
      };
      if (comfort_input) {
        r_St_ECO = true;
      } else {
        r_St_ECO = v_5;
      };
      if (v_3) {
        v_4_1 = false;
      } else {
        v_4_1 = true;
      };
      if (comfort_input) {
        s_St_ECO_1 = true;
      } else {
        s_St_ECO_1 = v_4_1;
      };
      if (v_3) {
        v_4_2 = false;
      } else {
        v_4_2 = false;
      };
      if (comfort_input) {
        s_St_ECO_2 = true;
      } else {
        s_St_ECO_2 = v_4_2;
      };
      v_144 = r_St_ECO;
      v_140 = s_St_ECO_1;
      v_141 = s_St_ECO_2;
    };
    s_1 = v_140;
    s_2 = v_141;
    r = v_144;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_145 = true;
      v_142 = true;
      v_143 = true;
    } else {
      if (comfort_input) {
        v_7 = true;
      } else {
        v_7 = self->pnr;
      };
      if (eco_input) {
        r_St_MINIMAL_SAFETY = true;
      } else {
        r_St_MINIMAL_SAFETY = v_7;
      };
      v_145 = r_St_MINIMAL_SAFETY;
      if (comfort_input) {
        v_6_1 = true;
      } else {
        v_6_1 = false;
      };
      if (eco_input) {
        s_St_MINIMAL_SAFETY_1 = true;
      } else {
        s_St_MINIMAL_SAFETY_1 = v_6_1;
      };
      v_142 = s_St_MINIMAL_SAFETY_1;
      if (comfort_input) {
        v_6_2 = true;
      } else {
        v_6_2 = false;
      };
      if (eco_input) {
        s_St_MINIMAL_SAFETY_2 = false;
      } else {
        s_St_MINIMAL_SAFETY_2 = v_6_2;
      };
      v_143 = s_St_MINIMAL_SAFETY_2;
      if (v_6_1) {
        v_6_2_1 = v_6_2;
      } else {
        v_6_2_0 = v_6_2;
      };
      if (s_St_MINIMAL_SAFETY_1) {
        s_St_MINIMAL_SAFETY_2_1 = s_St_MINIMAL_SAFETY_2;
      } else {
        s_St_MINIMAL_SAFETY_2_0 = s_St_MINIMAL_SAFETY_2;
      };
    };
    s_1 = v_142;
    s_2 = v_143;
    r = v_145;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      mode_St_COMFORT_1 = true;
      v_128 = mode_St_COMFORT_1;
      mode_St_COMFORT_2 = true;
      v_129 = mode_St_COMFORT_2;
      nr_St_COMFORT = false;
      v_136 = nr_St_COMFORT;
      ns_St_COMFORT_1 = true;
      v_132 = ns_St_COMFORT_1;
      ns_St_COMFORT_2 = true;
      v_133 = ns_St_COMFORT_2;
    } else {
      mode_St_ECO_1 = true;
      mode_St_ECO_2 = false;
      nr_St_ECO = false;
      ns_St_ECO_1 = true;
      ns_St_ECO_2 = false;
      v_128 = mode_St_ECO_1;
      v_129 = mode_St_ECO_2;
      v_136 = nr_St_ECO;
      v_132 = ns_St_ECO_1;
      v_133 = ns_St_ECO_2;
    };
    _out->mode_1 = v_128;
    _out->mode_2 = v_129;
    ns_1 = v_132;
    ns_2 = v_133;
    nr = v_136;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      v_130 = true;
      v_131 = true;
      v_137 = true;
      v_134 = true;
      v_135 = true;
    } else {
      mode_St_MINIMAL_SAFETY_1 = false;
      v_130 = mode_St_MINIMAL_SAFETY_1;
      mode_St_MINIMAL_SAFETY_2 = false;
      v_131 = mode_St_MINIMAL_SAFETY_2;
      nr_St_MINIMAL_SAFETY = false;
      v_137 = nr_St_MINIMAL_SAFETY;
      ns_St_MINIMAL_SAFETY_1 = false;
      v_134 = ns_St_MINIMAL_SAFETY_1;
      ns_St_MINIMAL_SAFETY_2 = false;
      v_135 = ns_St_MINIMAL_SAFETY_2;
      if (mode_St_MINIMAL_SAFETY_1) {
        mode_St_MINIMAL_SAFETY_2_1 = mode_St_MINIMAL_SAFETY_2;
      } else {
        mode_St_MINIMAL_SAFETY_2_0 = mode_St_MINIMAL_SAFETY_2;
      };
      if (ns_St_MINIMAL_SAFETY_1) {
        ns_St_MINIMAL_SAFETY_2_1 = ns_St_MINIMAL_SAFETY_2;
      } else {
        ns_St_MINIMAL_SAFETY_2_0 = ns_St_MINIMAL_SAFETY_2;
      };
    };
    _out->mode_1 = v_130;
    _out->mode_2 = v_131;
    ns_1 = v_134;
    ns_2 = v_135;
    nr = v_137;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (_out->mode_1) {
    mode_2_1 = _out->mode_2;
  } else {
    mode_2_0 = _out->mode_2;
  };
  if (ck_1_1) {
    if (ck_1_2_1) {
      if (mode_St_COMFORT_1) {
        mode_St_COMFORT_2_1 = mode_St_COMFORT_2;
      } else {
        mode_St_COMFORT_2_0 = mode_St_COMFORT_2;
      };
      if (ns_St_COMFORT_1) {
        ns_St_COMFORT_2_1 = ns_St_COMFORT_2;
      } else {
        ns_St_COMFORT_2_0 = ns_St_COMFORT_2;
      };
    } else {
      if (mode_St_ECO_1) {
        mode_St_ECO_2_1 = mode_St_ECO_2;
      } else {
        mode_St_ECO_2_0 = mode_St_ECO_2;
      };
      if (ns_St_ECO_1) {
        ns_St_ECO_2_1 = ns_St_ECO_2;
      } else {
        ns_St_ECO_2_0 = ns_St_ECO_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (ck_1_3) {
    if (ck_2_1) {
      if (v_1_1) {
        v_1_2_1 = v_1_2;
      } else {
        v_1_2_0 = v_1_2;
      };
      if (s_St_COMFORT_1) {
        s_St_COMFORT_2_1 = s_St_COMFORT_2;
      } else {
        s_St_COMFORT_2_0 = s_St_COMFORT_2;
      };
    } else {
      if (v_4_1) {
        v_4_2_1 = v_4_2;
      } else {
        v_4_2_0 = v_4_2;
      };
      if (s_St_ECO_1) {
        s_St_ECO_2_1 = s_St_ECO_2;
      } else {
        s_St_ECO_2_0 = s_St_ECO_2;
      };
    };
  };
  self->pnr = nr;
  self->v_138 = ns_1;
  self->v_139 = ns_2;;
}

void Smart_environment__oven_reset(Smart_environment__oven_mem* self) {
  self->pnr = false;
  self->v_176 = true;
  self->v_177 = false;
  self->v_178 = false;
}

void Smart_environment__oven_step(int f, int s, int c, int cold, int temp_ok,
                                  Smart_environment__oven_out* _out,
                                  Smart_environment__oven_mem* self) {
  
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
  int ns_St_1_REHEAT_2_0;
  int ns_St_1_REHEAT_3_0_0;
  int ns_St_1_REHEAT_3_0_1;
  int ns_St_1_REHEAT_2_1;
  int ns_St_1_REHEAT_3_1_0;
  int ns_St_1_REHEAT_3_1_1;
  int ns_St_1_MAINTAIN_2_0;
  int ns_St_1_MAINTAIN_3_0_0;
  int ns_St_1_MAINTAIN_3_0_1;
  int ns_St_1_MAINTAIN_2_1;
  int ns_St_1_MAINTAIN_3_1_0;
  int ns_St_1_MAINTAIN_3_1_1;
  int ns_St_1_HEAT_2_0;
  int ns_St_1_HEAT_3_0_0;
  int ns_St_1_HEAT_3_0_1;
  int ns_St_1_HEAT_2_1;
  int ns_St_1_HEAT_3_1_0;
  int ns_St_1_HEAT_3_1_1;
  int ns_St_1_STANDBY_2_0;
  int ns_St_1_STANDBY_3_0_0;
  int ns_St_1_STANDBY_3_0_1;
  int ns_St_1_STANDBY_2_1;
  int ns_St_1_STANDBY_3_1_0;
  int ns_St_1_STANDBY_3_1_1;
  int ns_St_1_OFF_2_0;
  int ns_St_1_OFF_3_0_0;
  int ns_St_1_OFF_3_0_1;
  int ns_St_1_OFF_2_1;
  int ns_St_1_OFF_3_1_0;
  int ns_St_1_OFF_3_1_1;
  int ck_2_2_0;
  int ck_2_3_0_0;
  int ck_2_3_0_1;
  int ck_2_2_1;
  int ck_2_3_1_0;
  int ck_2_3_1_1;
  int nr_St_1_REHEAT;
  int ns_St_1_REHEAT_3;
  int ns_St_1_REHEAT_2;
  int ns_St_1_REHEAT_1;
  int p1_St_1_REHEAT;
  int s1_St_1_REHEAT;
  int nr_St_1_MAINTAIN;
  int ns_St_1_MAINTAIN_3;
  int ns_St_1_MAINTAIN_2;
  int ns_St_1_MAINTAIN_1;
  int p1_St_1_MAINTAIN;
  int s1_St_1_MAINTAIN;
  int nr_St_1_HEAT;
  int ns_St_1_HEAT_3;
  int ns_St_1_HEAT_2;
  int ns_St_1_HEAT_1;
  int p1_St_1_HEAT;
  int s1_St_1_HEAT;
  int nr_St_1_STANDBY;
  int ns_St_1_STANDBY_3;
  int ns_St_1_STANDBY_2;
  int ns_St_1_STANDBY_1;
  int p1_St_1_STANDBY;
  int s1_St_1_STANDBY;
  int nr_St_1_OFF;
  int ns_St_1_OFF_3;
  int ns_St_1_OFF_2;
  int ns_St_1_OFF_1;
  int p1_St_1_OFF;
  int s1_St_1_OFF;
  int ck_2_3;
  int ck_2_2;
  int ck_2_1;
  int v_15_2_0;
  int v_15_3_0_0;
  int v_15_3_0_1;
  int v_15_2_1;
  int v_15_3_1_0;
  int v_15_3_1_1;
  int v_16;
  int v_15_3;
  int v_15_2;
  int v_15_1;
  int v_14;
  int v_13;
  int v_12;
  int v_10_2_0;
  int v_10_3_0_0;
  int v_10_3_0_1;
  int v_10_2_1;
  int v_10_3_1_0;
  int v_10_3_1_1;
  int v_11;
  int v_10_3;
  int v_10_2;
  int v_10_1;
  int v_8_2_0;
  int v_8_3_0_0;
  int v_8_3_0_1;
  int v_8_2_1;
  int v_8_3_1_0;
  int v_8_3_1_1;
  int v_9;
  int v_8_3;
  int v_8_2;
  int v_8_1;
  int v;
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
  int s_2_St_1_REHEAT_2_0;
  int s_2_St_1_REHEAT_3_0_0;
  int s_2_St_1_REHEAT_3_0_1;
  int s_2_St_1_REHEAT_2_1;
  int s_2_St_1_REHEAT_3_1_0;
  int s_2_St_1_REHEAT_3_1_1;
  int s_2_St_1_MAINTAIN_2_0;
  int s_2_St_1_MAINTAIN_3_0_0;
  int s_2_St_1_MAINTAIN_3_0_1;
  int s_2_St_1_MAINTAIN_2_1;
  int s_2_St_1_MAINTAIN_3_1_0;
  int s_2_St_1_MAINTAIN_3_1_1;
  int s_2_St_1_HEAT_2_0;
  int s_2_St_1_HEAT_3_0_0;
  int s_2_St_1_HEAT_3_0_1;
  int s_2_St_1_HEAT_2_1;
  int s_2_St_1_HEAT_3_1_0;
  int s_2_St_1_HEAT_3_1_1;
  int s_2_St_1_STANDBY_2_0;
  int s_2_St_1_STANDBY_3_0_0;
  int s_2_St_1_STANDBY_3_0_1;
  int s_2_St_1_STANDBY_2_1;
  int s_2_St_1_STANDBY_3_1_0;
  int s_2_St_1_STANDBY_3_1_1;
  int s_2_St_1_OFF_2_0;
  int s_2_St_1_OFF_3_0_0;
  int s_2_St_1_OFF_3_0_1;
  int s_2_St_1_OFF_2_1;
  int s_2_St_1_OFF_3_1_0;
  int s_2_St_1_OFF_3_1_1;
  int ck_2_4_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_4_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_1_REHEAT;
  int s_2_St_1_REHEAT_3;
  int s_2_St_1_REHEAT_2;
  int s_2_St_1_REHEAT_1;
  int r_St_1_MAINTAIN;
  int s_2_St_1_MAINTAIN_3;
  int s_2_St_1_MAINTAIN_2;
  int s_2_St_1_MAINTAIN_1;
  int r_St_1_HEAT;
  int s_2_St_1_HEAT_3;
  int s_2_St_1_HEAT_2;
  int s_2_St_1_HEAT_1;
  int r_St_1_STANDBY;
  int s_2_St_1_STANDBY_3;
  int s_2_St_1_STANDBY_2;
  int s_2_St_1_STANDBY_1;
  int r_St_1_OFF;
  int s_2_St_1_OFF_3;
  int s_2_St_1_OFF_2;
  int s_2_St_1_OFF_1;
  int ck_3;
  int ck_2_4;
  int ck_1;
  int s_2_2_0;
  int s_2_3_0_0;
  int s_2_3_0_1;
  int s_2_2_1;
  int s_2_3_1_0;
  int s_2_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_2_3;
  int s_2_2;
  int s_2_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_176;
  ck_2_4 = self->v_177;
  ck_3 = self->v_178;
  if (ck_1) {
    ck_2_4_1 = ck_2_4;
    if (ck_2_4_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (temp_ok) {
          v_11 = true;
        } else {
          v_11 = self->pnr;
        };
        if (f) {
          r_St_1_HEAT = true;
        } else {
          r_St_1_HEAT = v_11;
        };
        if (temp_ok) {
          v_10_1 = true;
        } else {
          v_10_1 = true;
        };
        if (f) {
          s_2_St_1_HEAT_1 = true;
        } else {
          s_2_St_1_HEAT_1 = v_10_1;
        };
        if (temp_ok) {
          v_10_2 = true;
        } else {
          v_10_2 = true;
        };
        if (f) {
          s_2_St_1_HEAT_2 = false;
        } else {
          s_2_St_1_HEAT_2 = v_10_2;
        };
        if (temp_ok) {
          v_10_3 = false;
        } else {
          v_10_3 = true;
        };
        if (f) {
          s_2_St_1_HEAT_3 = false;
        } else {
          s_2_St_1_HEAT_3 = v_10_3;
        };
        v_194 = r_St_1_HEAT;
        v_179 = s_2_St_1_HEAT_1;
        v_180 = s_2_St_1_HEAT_2;
        v_181 = s_2_St_1_HEAT_3;
      } else {
        if (f) {
          v_9 = true;
          v_8_1 = true;
          v_8_2 = false;
          v_8_3 = false;
        } else {
          v_9 = self->pnr;
          v_8_1 = true;
          v_8_2 = true;
          v_8_3 = false;
        };
        v = (cold&&c);
        if (v) {
          r_St_1_MAINTAIN = true;
        } else {
          r_St_1_MAINTAIN = v_9;
        };
        v_194 = r_St_1_MAINTAIN;
        if (v) {
          s_2_St_1_MAINTAIN_1 = false;
        } else {
          s_2_St_1_MAINTAIN_1 = v_8_1;
        };
        v_179 = s_2_St_1_MAINTAIN_1;
        if (v) {
          s_2_St_1_MAINTAIN_2 = false;
        } else {
          s_2_St_1_MAINTAIN_2 = v_8_2;
        };
        v_180 = s_2_St_1_MAINTAIN_2;
        if (v) {
          s_2_St_1_MAINTAIN_3 = true;
        } else {
          s_2_St_1_MAINTAIN_3 = v_8_3;
        };
        v_181 = s_2_St_1_MAINTAIN_3;
      };
      v_188 = v_179;
      v_189 = v_180;
      v_190 = v_181;
      v_196 = v_194;
      if (ck_3_1_1) {
        if (v_10_1) {
          v_10_2_1 = v_10_2;
          if (v_10_2_1) {
            v_10_3_1_1 = v_10_3;
          } else {
            v_10_3_1_0 = v_10_3;
          };
        } else {
          v_10_2_0 = v_10_2;
          if (v_10_2_0) {
            v_10_3_0_1 = v_10_3;
          } else {
            v_10_3_0_0 = v_10_3;
          };
        };
        if (s_2_St_1_HEAT_1) {
          s_2_St_1_HEAT_2_1 = s_2_St_1_HEAT_2;
          if (s_2_St_1_HEAT_2_1) {
            s_2_St_1_HEAT_3_1_1 = s_2_St_1_HEAT_3;
          } else {
            s_2_St_1_HEAT_3_1_0 = s_2_St_1_HEAT_3;
          };
        } else {
          s_2_St_1_HEAT_2_0 = s_2_St_1_HEAT_2;
          if (s_2_St_1_HEAT_2_0) {
            s_2_St_1_HEAT_3_0_1 = s_2_St_1_HEAT_3;
          } else {
            s_2_St_1_HEAT_3_0_0 = s_2_St_1_HEAT_3;
          };
        };
      } else {
        if (v_8_1) {
          v_8_2_1 = v_8_2;
          if (v_8_2_1) {
            v_8_3_1_1 = v_8_3;
          } else {
            v_8_3_1_0 = v_8_3;
          };
        } else {
          v_8_2_0 = v_8_2;
          if (v_8_2_0) {
            v_8_3_0_1 = v_8_3;
          } else {
            v_8_3_0_0 = v_8_3;
          };
        };
        if (s_2_St_1_MAINTAIN_1) {
          s_2_St_1_MAINTAIN_2_1 = s_2_St_1_MAINTAIN_2;
          if (s_2_St_1_MAINTAIN_2_1) {
            s_2_St_1_MAINTAIN_3_1_1 = s_2_St_1_MAINTAIN_3;
          } else {
            s_2_St_1_MAINTAIN_3_1_0 = s_2_St_1_MAINTAIN_3;
          };
        } else {
          s_2_St_1_MAINTAIN_2_0 = s_2_St_1_MAINTAIN_2;
          if (s_2_St_1_MAINTAIN_2_0) {
            s_2_St_1_MAINTAIN_3_0_1 = s_2_St_1_MAINTAIN_3;
          } else {
            s_2_St_1_MAINTAIN_3_0_0 = s_2_St_1_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_195 = true;
        v_182 = true;
        v_183 = true;
        v_184 = true;
      } else {
        v_14 = (s&&c);
        if (v_14) {
          v_16 = true;
          v_15_1 = true;
          v_15_2 = true;
          v_15_3 = true;
        } else {
          v_16 = self->pnr;
          v_15_1 = true;
          v_15_2 = false;
          v_15_3 = false;
        };
        v_12 = !(c);
        v_13 = (s&&v_12);
        if (v_13) {
          r_St_1_OFF = true;
        } else {
          r_St_1_OFF = v_16;
        };
        v_195 = r_St_1_OFF;
        if (v_13) {
          s_2_St_1_OFF_1 = false;
        } else {
          s_2_St_1_OFF_1 = v_15_1;
        };
        v_182 = s_2_St_1_OFF_1;
        if (v_13) {
          s_2_St_1_OFF_2 = false;
        } else {
          s_2_St_1_OFF_2 = v_15_2;
        };
        v_183 = s_2_St_1_OFF_2;
        if (v_13) {
          s_2_St_1_OFF_3 = false;
        } else {
          s_2_St_1_OFF_3 = v_15_3;
        };
        v_184 = s_2_St_1_OFF_3;
        if (v_15_1) {
          v_15_2_1 = v_15_2;
          if (v_15_2_1) {
            v_15_3_1_1 = v_15_3;
          } else {
            v_15_3_1_0 = v_15_3;
          };
        } else {
          v_15_2_0 = v_15_2;
          if (v_15_2_0) {
            v_15_3_0_1 = v_15_3;
          } else {
            v_15_3_0_0 = v_15_3;
          };
        };
        if (s_2_St_1_OFF_1) {
          s_2_St_1_OFF_2_1 = s_2_St_1_OFF_2;
          if (s_2_St_1_OFF_2_1) {
            s_2_St_1_OFF_3_1_1 = s_2_St_1_OFF_3;
          } else {
            s_2_St_1_OFF_3_1_0 = s_2_St_1_OFF_3;
          };
        } else {
          s_2_St_1_OFF_2_0 = s_2_St_1_OFF_2;
          if (s_2_St_1_OFF_2_0) {
            s_2_St_1_OFF_3_0_1 = s_2_St_1_OFF_3;
          } else {
            s_2_St_1_OFF_3_0_0 = s_2_St_1_OFF_3;
          };
        };
      };
      v_188 = v_182;
      v_189 = v_183;
      v_190 = v_184;
      v_196 = v_195;
    };
    s_2_1 = v_188;
    s_2_2 = v_189;
    s_2_3 = v_190;
    r = v_196;
  } else {
    ck_2_4_0 = ck_2_4;
    if (ck_2_4_0) {
      ck_3_0_1 = ck_3;
      v_191 = true;
      v_192 = true;
      v_193 = true;
      v_198 = true;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        if (temp_ok) {
          r_St_1_REHEAT = true;
        } else {
          r_St_1_REHEAT = self->pnr;
        };
        v_197 = r_St_1_REHEAT;
        if (temp_ok) {
          s_2_St_1_REHEAT_1 = true;
        } else {
          s_2_St_1_REHEAT_1 = false;
        };
        v_185 = s_2_St_1_REHEAT_1;
        if (temp_ok) {
          s_2_St_1_REHEAT_2 = true;
        } else {
          s_2_St_1_REHEAT_2 = false;
        };
        v_186 = s_2_St_1_REHEAT_2;
        if (temp_ok) {
          s_2_St_1_REHEAT_3 = false;
        } else {
          s_2_St_1_REHEAT_3 = true;
        };
        v_187 = s_2_St_1_REHEAT_3;
      } else {
        if (c) {
          r_St_1_STANDBY = true;
          s_2_St_1_STANDBY_1 = true;
          s_2_St_1_STANDBY_2 = true;
          s_2_St_1_STANDBY_3 = true;
        } else {
          r_St_1_STANDBY = self->pnr;
          s_2_St_1_STANDBY_1 = false;
          s_2_St_1_STANDBY_2 = false;
          s_2_St_1_STANDBY_3 = false;
        };
        v_197 = r_St_1_STANDBY;
        v_185 = s_2_St_1_STANDBY_1;
        v_186 = s_2_St_1_STANDBY_2;
        v_187 = s_2_St_1_STANDBY_3;
      };
      v_191 = v_185;
      v_192 = v_186;
      v_193 = v_187;
      v_198 = v_197;
    };
    s_2_1 = v_191;
    s_2_2 = v_192;
    s_2_3 = v_193;
    r = v_198;
  };
  ck_2_1 = s_2_1;
  ck_2_2 = s_2_2;
  ck_2_3 = s_2_3;
  if (ck_2_1) {
    ck_2_2_1 = ck_2_2;
    if (ck_2_2_1) {
      ck_2_3_1_1 = ck_2_3;
      if (ck_2_3_1_1) {
        s1_St_1_HEAT = 2;
        p1_St_1_HEAT = 1500;
        nr_St_1_HEAT = false;
        ns_St_1_HEAT_1 = true;
        ns_St_1_HEAT_2 = true;
        ns_St_1_HEAT_3 = true;
        v_146 = s1_St_1_HEAT;
        v_151 = p1_St_1_HEAT;
        v_171 = nr_St_1_HEAT;
        v_156 = ns_St_1_HEAT_1;
        v_157 = ns_St_1_HEAT_2;
        v_158 = ns_St_1_HEAT_3;
      } else {
        s1_St_1_MAINTAIN = 3;
        v_146 = s1_St_1_MAINTAIN;
        p1_St_1_MAINTAIN = 300;
        v_151 = p1_St_1_MAINTAIN;
        nr_St_1_MAINTAIN = false;
        v_171 = nr_St_1_MAINTAIN;
        ns_St_1_MAINTAIN_1 = true;
        v_156 = ns_St_1_MAINTAIN_1;
        ns_St_1_MAINTAIN_2 = true;
        v_157 = ns_St_1_MAINTAIN_2;
        ns_St_1_MAINTAIN_3 = false;
        v_158 = ns_St_1_MAINTAIN_3;
      };
      v_148 = v_146;
      v_153 = v_151;
      v_165 = v_156;
      v_166 = v_157;
      v_167 = v_158;
      v_173 = v_171;
      if (ck_2_3_1_1) {
        if (ns_St_1_HEAT_1) {
          ns_St_1_HEAT_2_1 = ns_St_1_HEAT_2;
          if (ns_St_1_HEAT_2_1) {
            ns_St_1_HEAT_3_1_1 = ns_St_1_HEAT_3;
          } else {
            ns_St_1_HEAT_3_1_0 = ns_St_1_HEAT_3;
          };
        } else {
          ns_St_1_HEAT_2_0 = ns_St_1_HEAT_2;
          if (ns_St_1_HEAT_2_0) {
            ns_St_1_HEAT_3_0_1 = ns_St_1_HEAT_3;
          } else {
            ns_St_1_HEAT_3_0_0 = ns_St_1_HEAT_3;
          };
        };
      } else {
        if (ns_St_1_MAINTAIN_1) {
          ns_St_1_MAINTAIN_2_1 = ns_St_1_MAINTAIN_2;
          if (ns_St_1_MAINTAIN_2_1) {
            ns_St_1_MAINTAIN_3_1_1 = ns_St_1_MAINTAIN_3;
          } else {
            ns_St_1_MAINTAIN_3_1_0 = ns_St_1_MAINTAIN_3;
          };
        } else {
          ns_St_1_MAINTAIN_2_0 = ns_St_1_MAINTAIN_2;
          if (ns_St_1_MAINTAIN_2_0) {
            ns_St_1_MAINTAIN_3_0_1 = ns_St_1_MAINTAIN_3;
          } else {
            ns_St_1_MAINTAIN_3_0_0 = ns_St_1_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_2_3_1_0 = ck_2_3;
      if (ck_2_3_1_0) {
        v_147 = 0;
        v_152 = 0;
        v_172 = true;
        v_159 = true;
        v_160 = true;
        v_161 = true;
      } else {
        s1_St_1_OFF = 0;
        v_147 = s1_St_1_OFF;
        p1_St_1_OFF = 0;
        v_152 = p1_St_1_OFF;
        nr_St_1_OFF = false;
        v_172 = nr_St_1_OFF;
        ns_St_1_OFF_1 = true;
        v_159 = ns_St_1_OFF_1;
        ns_St_1_OFF_2 = false;
        v_160 = ns_St_1_OFF_2;
        ns_St_1_OFF_3 = false;
        v_161 = ns_St_1_OFF_3;
        if (ns_St_1_OFF_1) {
          ns_St_1_OFF_2_1 = ns_St_1_OFF_2;
          if (ns_St_1_OFF_2_1) {
            ns_St_1_OFF_3_1_1 = ns_St_1_OFF_3;
          } else {
            ns_St_1_OFF_3_1_0 = ns_St_1_OFF_3;
          };
        } else {
          ns_St_1_OFF_2_0 = ns_St_1_OFF_2;
          if (ns_St_1_OFF_2_0) {
            ns_St_1_OFF_3_0_1 = ns_St_1_OFF_3;
          } else {
            ns_St_1_OFF_3_0_0 = ns_St_1_OFF_3;
          };
        };
      };
      v_148 = v_147;
      v_153 = v_152;
      v_165 = v_159;
      v_166 = v_160;
      v_167 = v_161;
      v_173 = v_172;
    };
    _out->s1 = v_148;
    _out->p1 = v_153;
    ns_1 = v_165;
    ns_2 = v_166;
    ns_3 = v_167;
    nr = v_173;
  } else {
    ck_2_2_0 = ck_2_2;
    if (ck_2_2_0) {
      ck_2_3_0_1 = ck_2_3;
      v_150 = 0;
      v_155 = 0;
      v_168 = true;
      v_169 = true;
      v_170 = true;
      v_175 = true;
    } else {
      ck_2_3_0_0 = ck_2_3;
      if (ck_2_3_0_0) {
        s1_St_1_REHEAT = 4;
        v_149 = s1_St_1_REHEAT;
        p1_St_1_REHEAT = 1000;
        v_154 = p1_St_1_REHEAT;
        nr_St_1_REHEAT = false;
        v_174 = nr_St_1_REHEAT;
        ns_St_1_REHEAT_1 = false;
        v_162 = ns_St_1_REHEAT_1;
        ns_St_1_REHEAT_2 = false;
        v_163 = ns_St_1_REHEAT_2;
        ns_St_1_REHEAT_3 = true;
        v_164 = ns_St_1_REHEAT_3;
      } else {
        s1_St_1_STANDBY = 1;
        p1_St_1_STANDBY = 0;
        nr_St_1_STANDBY = false;
        ns_St_1_STANDBY_1 = false;
        ns_St_1_STANDBY_2 = false;
        ns_St_1_STANDBY_3 = false;
        v_149 = s1_St_1_STANDBY;
        v_154 = p1_St_1_STANDBY;
        v_174 = nr_St_1_STANDBY;
        v_162 = ns_St_1_STANDBY_1;
        v_163 = ns_St_1_STANDBY_2;
        v_164 = ns_St_1_STANDBY_3;
      };
      v_150 = v_149;
      v_155 = v_154;
      v_168 = v_162;
      v_169 = v_163;
      v_170 = v_164;
      v_175 = v_174;
    };
    _out->s1 = v_150;
    _out->p1 = v_155;
    ns_1 = v_168;
    ns_2 = v_169;
    ns_3 = v_170;
    nr = v_175;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_2_1)) {
    if (!(ck_2_2_0)) {
      if (ck_2_3_0_0) {
        if (ns_St_1_REHEAT_1) {
          ns_St_1_REHEAT_2_1 = ns_St_1_REHEAT_2;
          if (ns_St_1_REHEAT_2_1) {
            ns_St_1_REHEAT_3_1_1 = ns_St_1_REHEAT_3;
          } else {
            ns_St_1_REHEAT_3_1_0 = ns_St_1_REHEAT_3;
          };
        } else {
          ns_St_1_REHEAT_2_0 = ns_St_1_REHEAT_2;
          if (ns_St_1_REHEAT_2_0) {
            ns_St_1_REHEAT_3_0_1 = ns_St_1_REHEAT_3;
          } else {
            ns_St_1_REHEAT_3_0_0 = ns_St_1_REHEAT_3;
          };
        };
      } else {
        if (ns_St_1_STANDBY_1) {
          ns_St_1_STANDBY_2_1 = ns_St_1_STANDBY_2;
          if (ns_St_1_STANDBY_2_1) {
            ns_St_1_STANDBY_3_1_1 = ns_St_1_STANDBY_3;
          } else {
            ns_St_1_STANDBY_3_1_0 = ns_St_1_STANDBY_3;
          };
        } else {
          ns_St_1_STANDBY_2_0 = ns_St_1_STANDBY_2;
          if (ns_St_1_STANDBY_2_0) {
            ns_St_1_STANDBY_3_0_1 = ns_St_1_STANDBY_3;
          } else {
            ns_St_1_STANDBY_3_0_0 = ns_St_1_STANDBY_3;
          };
        };
      };
    };
  };
  if (s_2_1) {
    s_2_2_1 = s_2_2;
    if (s_2_2_1) {
      s_2_3_1_1 = s_2_3;
    } else {
      s_2_3_1_0 = s_2_3;
    };
  } else {
    s_2_2_0 = s_2_2;
    if (s_2_2_0) {
      s_2_3_0_1 = s_2_3;
    } else {
      s_2_3_0_0 = s_2_3;
    };
  };
  if (!(ck_1)) {
    if (!(ck_2_4_0)) {
      if (ck_3_0_0) {
        if (s_2_St_1_REHEAT_1) {
          s_2_St_1_REHEAT_2_1 = s_2_St_1_REHEAT_2;
          if (s_2_St_1_REHEAT_2_1) {
            s_2_St_1_REHEAT_3_1_1 = s_2_St_1_REHEAT_3;
          } else {
            s_2_St_1_REHEAT_3_1_0 = s_2_St_1_REHEAT_3;
          };
        } else {
          s_2_St_1_REHEAT_2_0 = s_2_St_1_REHEAT_2;
          if (s_2_St_1_REHEAT_2_0) {
            s_2_St_1_REHEAT_3_0_1 = s_2_St_1_REHEAT_3;
          } else {
            s_2_St_1_REHEAT_3_0_0 = s_2_St_1_REHEAT_3;
          };
        };
      } else {
        if (s_2_St_1_STANDBY_1) {
          s_2_St_1_STANDBY_2_1 = s_2_St_1_STANDBY_2;
          if (s_2_St_1_STANDBY_2_1) {
            s_2_St_1_STANDBY_3_1_1 = s_2_St_1_STANDBY_3;
          } else {
            s_2_St_1_STANDBY_3_1_0 = s_2_St_1_STANDBY_3;
          };
        } else {
          s_2_St_1_STANDBY_2_0 = s_2_St_1_STANDBY_2;
          if (s_2_St_1_STANDBY_2_0) {
            s_2_St_1_STANDBY_3_0_1 = s_2_St_1_STANDBY_3;
          } else {
            s_2_St_1_STANDBY_3_0_0 = s_2_St_1_STANDBY_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_176 = ns_1;
  self->v_177 = ns_2;
  self->v_178 = ns_3;;
}

void Smart_environment__radiator_reset(Smart_environment__radiator_mem* self) {
  self->pnr = false;
  self->v_209 = false;
  self->v_210 = false;
}

void Smart_environment__radiator_step(int u1, int d1, int u2, int d2, int c1,
                                      int c2, int c3,
                                      Smart_environment__radiator_out* _out,
                                      Smart_environment__radiator_mem* self) {
  
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
  int ns_St_2_HIGH_2_0;
  int ns_St_2_HIGH_2_1;
  int ns_St_2_ECO_2_0;
  int ns_St_2_ECO_2_1;
  int ns_St_2_FROST_2_0;
  int ns_St_2_FROST_2_1;
  int ns_St_2_OFF_2_0;
  int ns_St_2_OFF_2_1;
  int ck_3_2_0;
  int ck_3_2_1;
  int nr_St_2_HIGH;
  int ns_St_2_HIGH_2;
  int ns_St_2_HIGH_1;
  int p1_St_2_HIGH;
  int s1_St_2_HIGH;
  int nr_St_2_ECO;
  int ns_St_2_ECO_2;
  int ns_St_2_ECO_1;
  int p1_St_2_ECO;
  int s1_St_2_ECO;
  int nr_St_2_FROST;
  int ns_St_2_FROST_2;
  int ns_St_2_FROST_1;
  int p1_St_2_FROST;
  int s1_St_2_FROST;
  int nr_St_2_OFF;
  int ns_St_2_OFF_2;
  int ns_St_2_OFF_1;
  int p1_St_2_OFF;
  int s1_St_2_OFF;
  int ck_3_2;
  int ck_3_1;
  int v_36;
  int v_35;
  int v_33_2_0;
  int v_33_2_1;
  int v_31_2_0;
  int v_31_2_1;
  int v_34;
  int v_33_2;
  int v_33_1;
  int v_32;
  int v_31_2;
  int v_31_1;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_25_2_0;
  int v_25_2_1;
  int v_26;
  int v_25_2;
  int v_25_1;
  int v_24;
  int v_23;
  int v_22;
  int v_20_2_0;
  int v_20_2_1;
  int v_21;
  int v_20_2;
  int v_20_1;
  int v_19;
  int v_18;
  int v_17;
  int v;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int s_St_2_HIGH_2_0;
  int s_St_2_HIGH_2_1;
  int s_St_2_ECO_2_0;
  int s_St_2_ECO_2_1;
  int s_St_2_FROST_2_0;
  int s_St_2_FROST_2_1;
  int s_St_2_OFF_2_0;
  int s_St_2_OFF_2_1;
  int ck_2_0;
  int ck_2_1;
  int r_St_2_HIGH;
  int s_St_2_HIGH_2;
  int s_St_2_HIGH_1;
  int r_St_2_ECO;
  int s_St_2_ECO_2;
  int s_St_2_ECO_1;
  int r_St_2_FROST;
  int s_St_2_FROST_2;
  int s_St_2_FROST_1;
  int r_St_2_OFF;
  int s_St_2_OFF_2;
  int s_St_2_OFF_1;
  int ck_2;
  int ck_1;
  int s_2_0;
  int s_2_1;
  int ns_2_0;
  int ns_2_1;
  int s_2;
  int s_1;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_209;
  ck_2 = self->v_210;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      v_23 = !(c1);
      v_24 = (d1||v_23);
      if (v_24) {
        v_26 = true;
        v_25_1 = true;
        v_25_2 = false;
      } else {
        v_26 = self->pnr;
        v_25_1 = true;
        v_25_2 = true;
      };
      v_22 = (u2&&c2);
      if (v_22) {
        r_St_2_ECO = true;
      } else {
        r_St_2_ECO = v_26;
      };
      v_215 = r_St_2_ECO;
      if (v_22) {
        s_St_2_ECO_1 = false;
      } else {
        s_St_2_ECO_1 = v_25_1;
      };
      v_211 = s_St_2_ECO_1;
      if (v_22) {
        s_St_2_ECO_2 = true;
      } else {
        s_St_2_ECO_2 = v_25_2;
      };
      v_212 = s_St_2_ECO_2;
      if (v_25_1) {
        v_25_2_1 = v_25_2;
      } else {
        v_25_2_0 = v_25_2;
      };
      if (s_St_2_ECO_1) {
        s_St_2_ECO_2_1 = s_St_2_ECO_2;
      } else {
        s_St_2_ECO_2_0 = s_St_2_ECO_2;
      };
    } else {
      v_30 = (u2&&c2);
      if (v_30) {
        v_32 = true;
        v_31_1 = false;
        v_31_2 = true;
      } else {
        v_32 = self->pnr;
        v_31_1 = true;
        v_31_2 = false;
      };
      v_28 = !(c3);
      v_29 = (d1||v_28);
      if (v_29) {
        v_34 = true;
        v_33_1 = false;
        v_33_2 = false;
      } else {
        v_34 = v_32;
        v_33_1 = v_31_1;
        v_33_2 = v_31_2;
      };
      v_27 = (u1&&c1);
      if (v_27) {
        r_St_2_FROST = true;
        s_St_2_FROST_1 = true;
        s_St_2_FROST_2 = true;
      } else {
        r_St_2_FROST = v_34;
        s_St_2_FROST_1 = v_33_1;
        s_St_2_FROST_2 = v_33_2;
      };
      v_215 = r_St_2_FROST;
      v_211 = s_St_2_FROST_1;
      v_212 = s_St_2_FROST_2;
      if (v_31_1) {
        v_31_2_1 = v_31_2;
      } else {
        v_31_2_0 = v_31_2;
      };
      if (v_33_1) {
        v_33_2_1 = v_33_2;
      } else {
        v_33_2_0 = v_33_2;
      };
      if (s_St_2_FROST_1) {
        s_St_2_FROST_2_1 = s_St_2_FROST_2;
      } else {
        s_St_2_FROST_2_0 = s_St_2_FROST_2;
      };
    };
    s_1 = v_211;
    s_2 = v_212;
    r = v_215;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      v_18 = !(c1);
      v_19 = (d1||v_18);
      if (v_19) {
        v_21 = true;
        v_20_1 = true;
        v_20_2 = true;
      } else {
        v_21 = self->pnr;
        v_20_1 = false;
        v_20_2 = true;
      };
      v = !(c2);
      v_17 = (d2||v);
      if (v_17) {
        r_St_2_HIGH = true;
      } else {
        r_St_2_HIGH = v_21;
      };
      v_216 = r_St_2_HIGH;
      if (v_17) {
        s_St_2_HIGH_1 = true;
      } else {
        s_St_2_HIGH_1 = v_20_1;
      };
      v_213 = s_St_2_HIGH_1;
      if (v_17) {
        s_St_2_HIGH_2 = false;
      } else {
        s_St_2_HIGH_2 = v_20_2;
      };
      v_214 = s_St_2_HIGH_2;
    } else {
      v_35 = !(c1);
      v_36 = (u1||v_35);
      if (v_36) {
        r_St_2_OFF = true;
        s_St_2_OFF_1 = true;
        s_St_2_OFF_2 = false;
      } else {
        r_St_2_OFF = self->pnr;
        s_St_2_OFF_1 = false;
        s_St_2_OFF_2 = false;
      };
      v_216 = r_St_2_OFF;
      v_213 = s_St_2_OFF_1;
      v_214 = s_St_2_OFF_2;
    };
    s_1 = v_213;
    s_2 = v_214;
    r = v_216;
  };
  ck_3_1 = s_1;
  ck_3_2 = s_2;
  if (ck_3_1) {
    ck_3_2_1 = ck_3_2;
    if (ck_3_2_1) {
      s1_St_2_ECO = 2;
      v_199 = s1_St_2_ECO;
      p1_St_2_ECO = 1500;
      v_201 = p1_St_2_ECO;
      nr_St_2_ECO = false;
      v_207 = nr_St_2_ECO;
      ns_St_2_ECO_1 = true;
      v_203 = ns_St_2_ECO_1;
      ns_St_2_ECO_2 = true;
      v_204 = ns_St_2_ECO_2;
      if (ns_St_2_ECO_1) {
        ns_St_2_ECO_2_1 = ns_St_2_ECO_2;
      } else {
        ns_St_2_ECO_2_0 = ns_St_2_ECO_2;
      };
    } else {
      s1_St_2_FROST = 1;
      p1_St_2_FROST = 300;
      nr_St_2_FROST = false;
      ns_St_2_FROST_1 = true;
      ns_St_2_FROST_2 = false;
      v_199 = s1_St_2_FROST;
      v_201 = p1_St_2_FROST;
      v_207 = nr_St_2_FROST;
      v_203 = ns_St_2_FROST_1;
      v_204 = ns_St_2_FROST_2;
      if (ns_St_2_FROST_1) {
        ns_St_2_FROST_2_1 = ns_St_2_FROST_2;
      } else {
        ns_St_2_FROST_2_0 = ns_St_2_FROST_2;
      };
    };
    _out->s1 = v_199;
    _out->p1 = v_201;
    ns_1 = v_203;
    ns_2 = v_204;
    nr = v_207;
  } else {
    ck_3_2_0 = ck_3_2;
    if (ck_3_2_0) {
      s1_St_2_HIGH = 3;
      v_200 = s1_St_2_HIGH;
      p1_St_2_HIGH = 2000;
      v_202 = p1_St_2_HIGH;
      nr_St_2_HIGH = false;
      v_208 = nr_St_2_HIGH;
      ns_St_2_HIGH_1 = false;
      v_205 = ns_St_2_HIGH_1;
      ns_St_2_HIGH_2 = true;
      v_206 = ns_St_2_HIGH_2;
    } else {
      s1_St_2_OFF = 0;
      p1_St_2_OFF = 0;
      nr_St_2_OFF = false;
      ns_St_2_OFF_1 = false;
      ns_St_2_OFF_2 = false;
      v_200 = s1_St_2_OFF;
      v_202 = p1_St_2_OFF;
      v_208 = nr_St_2_OFF;
      v_205 = ns_St_2_OFF_1;
      v_206 = ns_St_2_OFF_2;
    };
    _out->s1 = v_200;
    _out->p1 = v_202;
    ns_1 = v_205;
    ns_2 = v_206;
    nr = v_208;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
  } else {
    ns_2_0 = ns_2;
  };
  if (!(ck_3_1)) {
    if (ck_3_2_0) {
      if (ns_St_2_HIGH_1) {
        ns_St_2_HIGH_2_1 = ns_St_2_HIGH_2;
      } else {
        ns_St_2_HIGH_2_0 = ns_St_2_HIGH_2;
      };
    } else {
      if (ns_St_2_OFF_1) {
        ns_St_2_OFF_2_1 = ns_St_2_OFF_2;
      } else {
        ns_St_2_OFF_2_0 = ns_St_2_OFF_2;
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
  } else {
    s_2_0 = s_2;
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (v_20_1) {
        v_20_2_1 = v_20_2;
      } else {
        v_20_2_0 = v_20_2;
      };
      if (s_St_2_HIGH_1) {
        s_St_2_HIGH_2_1 = s_St_2_HIGH_2;
      } else {
        s_St_2_HIGH_2_0 = s_St_2_HIGH_2;
      };
    } else {
      if (s_St_2_OFF_1) {
        s_St_2_OFF_2_1 = s_St_2_OFF_2;
      } else {
        s_St_2_OFF_2_0 = s_St_2_OFF_2;
      };
    };
  };
  self->pnr = nr;
  self->v_209 = ns_1;
  self->v_210 = ns_2;;
}

void Smart_environment__room_reset(Smart_environment__room_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Smart_environment__room_step(int presence,
                                  Smart_environment__room_out* _out,
                                  Smart_environment__room_mem* self) {
  
  int nr_St_3_OCUPIED;
  int ns_St_3_OCUPIED_1;
  int r1_St_3_OCUPIED;
  int nr_St_3_EMPTY;
  int ns_St_3_EMPTY_1;
  int r1_St_3_EMPTY;
  int ck_4_1;
  int v;
  int r_St_3_OCUPIED;
  int s_St_3_OCUPIED_1;
  int r_St_3_EMPTY;
  int s_St_3_EMPTY_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    if (presence) {
      r_St_3_EMPTY = true;
      s_St_3_EMPTY_1 = false;
    } else {
      r_St_3_EMPTY = self->pnr;
      s_St_3_EMPTY_1 = true;
    };
    r = r_St_3_EMPTY;
    s_1 = s_St_3_EMPTY_1;
  } else {
    v = !(presence);
    if (v) {
      r_St_3_OCUPIED = true;
    } else {
      r_St_3_OCUPIED = self->pnr;
    };
    r = r_St_3_OCUPIED;
    if (v) {
      s_St_3_OCUPIED_1 = true;
    } else {
      s_St_3_OCUPIED_1 = false;
    };
    s_1 = s_St_3_OCUPIED_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    r1_St_3_EMPTY = false;
    nr_St_3_EMPTY = false;
    ns_St_3_EMPTY_1 = true;
    _out->r1 = r1_St_3_EMPTY;
    nr = nr_St_3_EMPTY;
    ns_1 = ns_St_3_EMPTY_1;
  } else {
    r1_St_3_OCUPIED = true;
    _out->r1 = r1_St_3_OCUPIED;
    nr_St_3_OCUPIED = false;
    nr = nr_St_3_OCUPIED;
    ns_St_3_OCUPIED_1 = false;
    ns_1 = ns_St_3_OCUPIED_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Smart_environment__door_reset(Smart_environment__door_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Smart_environment__door_step(int push, int c,
                                  Smart_environment__door_out* _out,
                                  Smart_environment__door_mem* self) {
  
  int nr_St_4_OPEN;
  int ns_St_4_OPEN_1;
  int door_open_St_4_OPEN;
  int nr_St_4_CLOSED;
  int ns_St_4_CLOSED_1;
  int door_open_St_4_CLOSED;
  int ck_5_1;
  int v_38;
  int v_37;
  int v;
  int r_St_4_OPEN;
  int s_St_4_OPEN_1;
  int r_St_4_CLOSED;
  int s_St_4_CLOSED_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_38 = (push&&c);
    if (v_38) {
      r_St_4_CLOSED = true;
      s_St_4_CLOSED_1 = false;
    } else {
      r_St_4_CLOSED = self->pnr;
      s_St_4_CLOSED_1 = true;
    };
    r = r_St_4_CLOSED;
    s_1 = s_St_4_CLOSED_1;
  } else {
    v = !(c);
    v_37 = (push||v);
    if (v_37) {
      r_St_4_OPEN = true;
    } else {
      r_St_4_OPEN = self->pnr;
    };
    r = r_St_4_OPEN;
    if (v_37) {
      s_St_4_OPEN_1 = true;
    } else {
      s_St_4_OPEN_1 = false;
    };
    s_1 = s_St_4_OPEN_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    door_open_St_4_CLOSED = false;
    nr_St_4_CLOSED = false;
    ns_St_4_CLOSED_1 = true;
    _out->door_open = door_open_St_4_CLOSED;
    nr = nr_St_4_CLOSED;
    ns_1 = ns_St_4_CLOSED_1;
  } else {
    door_open_St_4_OPEN = true;
    _out->door_open = door_open_St_4_OPEN;
    nr_St_4_OPEN = false;
    nr = nr_St_4_OPEN;
    ns_St_4_OPEN_1 = false;
    ns_1 = ns_St_4_OPEN_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Smart_environment__window_reset(Smart_environment__window_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Smart_environment__window_step(int push, int c,
                                    Smart_environment__window_out* _out,
                                    Smart_environment__window_mem* self) {
  
  int nr_St_5_OPEN;
  int ns_St_5_OPEN_1;
  int window_open_St_5_OPEN;
  int nr_St_5_CLOSED;
  int ns_St_5_CLOSED_1;
  int window_open_St_5_CLOSED;
  int ck_6_1;
  int v_40;
  int v_39;
  int v;
  int r_St_5_OPEN;
  int s_St_5_OPEN_1;
  int r_St_5_CLOSED;
  int s_St_5_CLOSED_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_40 = (push&&c);
    if (v_40) {
      r_St_5_CLOSED = true;
      s_St_5_CLOSED_1 = false;
    } else {
      r_St_5_CLOSED = self->pnr;
      s_St_5_CLOSED_1 = true;
    };
    r = r_St_5_CLOSED;
    s_1 = s_St_5_CLOSED_1;
  } else {
    v = !(c);
    v_39 = (push||v);
    if (v_39) {
      r_St_5_OPEN = true;
    } else {
      r_St_5_OPEN = self->pnr;
    };
    r = r_St_5_OPEN;
    if (v_39) {
      s_St_5_OPEN_1 = true;
    } else {
      s_St_5_OPEN_1 = false;
    };
    s_1 = s_St_5_OPEN_1;
  };
  ck_6_1 = s_1;
  if (ck_6_1) {
    window_open_St_5_CLOSED = false;
    nr_St_5_CLOSED = false;
    ns_St_5_CLOSED_1 = true;
    _out->window_open = window_open_St_5_CLOSED;
    nr = nr_St_5_CLOSED;
    ns_1 = ns_St_5_CLOSED_1;
  } else {
    window_open_St_5_OPEN = true;
    _out->window_open = window_open_St_5_OPEN;
    nr_St_5_OPEN = false;
    nr = nr_St_5_OPEN;
    ns_St_5_OPEN_1 = false;
    ns_1 = ns_St_5_OPEN_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Smart_environment__lamp_reset(Smart_environment__lamp_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Smart_environment__lamp_step(int turn_on, int c1, int c2,
                                  Smart_environment__lamp_out* _out,
                                  Smart_environment__lamp_mem* self) {
  
  int nr_St_6_ON;
  int ns_St_6_ON_1;
  int lamp_on_St_6_ON;
  int nr_St_6_OFF;
  int ns_St_6_OFF_1;
  int lamp_on_St_6_OFF;
  int ck_7_1;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v;
  int r_St_6_ON;
  int s_St_6_ON_1;
  int r_St_6_OFF;
  int s_St_6_OFF_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_44 = !(c2);
    v_43 = (turn_on&&c1);
    v_45 = (v_43||v_44);
    if (v_45) {
      r_St_6_OFF = true;
      s_St_6_OFF_1 = false;
    } else {
      r_St_6_OFF = self->pnr;
      s_St_6_OFF_1 = true;
    };
    r = r_St_6_OFF;
    s_1 = s_St_6_OFF_1;
  } else {
    v_41 = !(c1);
    v = (turn_on&&c2);
    v_42 = (v||v_41);
    if (v_42) {
      r_St_6_ON = true;
    } else {
      r_St_6_ON = self->pnr;
    };
    r = r_St_6_ON;
    if (v_42) {
      s_St_6_ON_1 = true;
    } else {
      s_St_6_ON_1 = false;
    };
    s_1 = s_St_6_ON_1;
  };
  ck_7_1 = s_1;
  if (ck_7_1) {
    lamp_on_St_6_OFF = false;
    nr_St_6_OFF = false;
    ns_St_6_OFF_1 = true;
    _out->lamp_on = lamp_on_St_6_OFF;
    nr = nr_St_6_OFF;
    ns_1 = ns_St_6_OFF_1;
  } else {
    lamp_on_St_6_ON = true;
    _out->lamp_on = lamp_on_St_6_ON;
    nr_St_6_ON = false;
    nr = nr_St_6_ON;
    ns_St_6_ON_1 = false;
    ns_1 = ns_St_6_ON_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Smart_environment__washing_machine_reset(Smart_environment__washing_machine_mem* self) {
  self->pnr = false;
  self->v_253 = true;
  self->v_254 = true;
  self->v_255 = true;
}

void Smart_environment__washing_machine_step(int e, int s, int c,
                                             Smart_environment__washing_machine_out* _out,
                                             Smart_environment__washing_machine_mem* self) {
  
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
  int ns_St_7_SPIN_2_0;
  int ns_St_7_SPIN_3_0_0;
  int ns_St_7_SPIN_3_0_1;
  int ns_St_7_SPIN_2_1;
  int ns_St_7_SPIN_3_1_0;
  int ns_St_7_SPIN_3_1_1;
  int ns_St_7_RINSE_2_0;
  int ns_St_7_RINSE_3_0_0;
  int ns_St_7_RINSE_3_0_1;
  int ns_St_7_RINSE_2_1;
  int ns_St_7_RINSE_3_1_0;
  int ns_St_7_RINSE_3_1_1;
  int ns_St_7_WASHING_2_0;
  int ns_St_7_WASHING_3_0_0;
  int ns_St_7_WASHING_3_0_1;
  int ns_St_7_WASHING_2_1;
  int ns_St_7_WASHING_3_1_0;
  int ns_St_7_WASHING_3_1_1;
  int ns_St_7_STANDBY_2_0;
  int ns_St_7_STANDBY_3_0_0;
  int ns_St_7_STANDBY_3_0_1;
  int ns_St_7_STANDBY_2_1;
  int ns_St_7_STANDBY_3_1_0;
  int ns_St_7_STANDBY_3_1_1;
  int ns_St_7_WATER_FILL_2_0;
  int ns_St_7_WATER_FILL_3_0_0;
  int ns_St_7_WATER_FILL_3_0_1;
  int ns_St_7_WATER_FILL_2_1;
  int ns_St_7_WATER_FILL_3_1_0;
  int ns_St_7_WATER_FILL_3_1_1;
  int ns_St_7_OFF_2_0;
  int ns_St_7_OFF_3_0_0;
  int ns_St_7_OFF_3_0_1;
  int ns_St_7_OFF_2_1;
  int ns_St_7_OFF_3_1_0;
  int ns_St_7_OFF_3_1_1;
  int ck_8_2_0;
  int ck_8_3_0_0;
  int ck_8_3_0_1;
  int ck_8_2_1;
  int ck_8_3_1_0;
  int ck_8_3_1_1;
  int nr_St_7_SPIN;
  int ns_St_7_SPIN_3;
  int ns_St_7_SPIN_2;
  int ns_St_7_SPIN_1;
  int p1_St_7_SPIN;
  int s1_St_7_SPIN;
  int nr_St_7_RINSE;
  int ns_St_7_RINSE_3;
  int ns_St_7_RINSE_2;
  int ns_St_7_RINSE_1;
  int p1_St_7_RINSE;
  int s1_St_7_RINSE;
  int nr_St_7_WASHING;
  int ns_St_7_WASHING_3;
  int ns_St_7_WASHING_2;
  int ns_St_7_WASHING_1;
  int p1_St_7_WASHING;
  int s1_St_7_WASHING;
  int nr_St_7_STANDBY;
  int ns_St_7_STANDBY_3;
  int ns_St_7_STANDBY_2;
  int ns_St_7_STANDBY_1;
  int p1_St_7_STANDBY;
  int s1_St_7_STANDBY;
  int nr_St_7_WATER_FILL;
  int ns_St_7_WATER_FILL_3;
  int ns_St_7_WATER_FILL_2;
  int ns_St_7_WATER_FILL_1;
  int p1_St_7_WATER_FILL;
  int s1_St_7_WATER_FILL;
  int nr_St_7_OFF;
  int ns_St_7_OFF_3;
  int ns_St_7_OFF_2;
  int ns_St_7_OFF_1;
  int p1_St_7_OFF;
  int s1_St_7_OFF;
  int ck_8_3;
  int ck_8_2;
  int ck_8_1;
  int v_48_2_0;
  int v_48_3_0_0;
  int v_48_3_0_1;
  int v_48_2_1;
  int v_48_3_1_0;
  int v_48_3_1_1;
  int v_49;
  int v_48_3;
  int v_48_2;
  int v_48_1;
  int v_47;
  int v_46;
  int v;
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
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int s_3_St_7_SPIN_2_0;
  int s_3_St_7_SPIN_3_0_0;
  int s_3_St_7_SPIN_3_0_1;
  int s_3_St_7_SPIN_2_1;
  int s_3_St_7_SPIN_3_1_0;
  int s_3_St_7_SPIN_3_1_1;
  int s_3_St_7_RINSE_2_0;
  int s_3_St_7_RINSE_3_0_0;
  int s_3_St_7_RINSE_3_0_1;
  int s_3_St_7_RINSE_2_1;
  int s_3_St_7_RINSE_3_1_0;
  int s_3_St_7_RINSE_3_1_1;
  int s_3_St_7_WASHING_2_0;
  int s_3_St_7_WASHING_3_0_0;
  int s_3_St_7_WASHING_3_0_1;
  int s_3_St_7_WASHING_2_1;
  int s_3_St_7_WASHING_3_1_0;
  int s_3_St_7_WASHING_3_1_1;
  int s_3_St_7_STANDBY_2_0;
  int s_3_St_7_STANDBY_3_0_0;
  int s_3_St_7_STANDBY_3_0_1;
  int s_3_St_7_STANDBY_2_1;
  int s_3_St_7_STANDBY_3_1_0;
  int s_3_St_7_STANDBY_3_1_1;
  int s_3_St_7_WATER_FILL_2_0;
  int s_3_St_7_WATER_FILL_3_0_0;
  int s_3_St_7_WATER_FILL_3_0_1;
  int s_3_St_7_WATER_FILL_2_1;
  int s_3_St_7_WATER_FILL_3_1_0;
  int s_3_St_7_WATER_FILL_3_1_1;
  int s_3_St_7_OFF_2_0;
  int s_3_St_7_OFF_3_0_0;
  int s_3_St_7_OFF_3_0_1;
  int s_3_St_7_OFF_2_1;
  int s_3_St_7_OFF_3_1_0;
  int s_3_St_7_OFF_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_7_SPIN;
  int s_3_St_7_SPIN_3;
  int s_3_St_7_SPIN_2;
  int s_3_St_7_SPIN_1;
  int r_St_7_RINSE;
  int s_3_St_7_RINSE_3;
  int s_3_St_7_RINSE_2;
  int s_3_St_7_RINSE_1;
  int r_St_7_WASHING;
  int s_3_St_7_WASHING_3;
  int s_3_St_7_WASHING_2;
  int s_3_St_7_WASHING_1;
  int r_St_7_STANDBY;
  int s_3_St_7_STANDBY_3;
  int s_3_St_7_STANDBY_2;
  int s_3_St_7_STANDBY_1;
  int r_St_7_WATER_FILL;
  int s_3_St_7_WATER_FILL_3;
  int s_3_St_7_WATER_FILL_2;
  int s_3_St_7_WATER_FILL_1;
  int r_St_7_OFF;
  int s_3_St_7_OFF_3;
  int s_3_St_7_OFF_2;
  int s_3_St_7_OFF_1;
  int ck_3;
  int ck_2;
  int ck_1;
  int s_3_2_0;
  int s_3_3_0_0;
  int s_3_3_0_1;
  int s_3_2_1;
  int s_3_3_1_0;
  int s_3_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3_3;
  int s_3_2;
  int s_3_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1 = self->v_253;
  ck_2 = self->v_254;
  ck_3 = self->v_255;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (s) {
          r_St_7_OFF = true;
          s_3_St_7_OFF_1 = false;
          s_3_St_7_OFF_2 = false;
          s_3_St_7_OFF_3 = false;
        } else {
          r_St_7_OFF = self->pnr;
          s_3_St_7_OFF_1 = true;
          s_3_St_7_OFF_2 = true;
          s_3_St_7_OFF_3 = true;
        };
        v_274 = r_St_7_OFF;
        v_256 = s_3_St_7_OFF_1;
        v_257 = s_3_St_7_OFF_2;
        v_258 = s_3_St_7_OFF_3;
        if (s_3_St_7_OFF_1) {
          s_3_St_7_OFF_2_1 = s_3_St_7_OFF_2;
          if (s_3_St_7_OFF_2_1) {
            s_3_St_7_OFF_3_1_1 = s_3_St_7_OFF_3;
          } else {
            s_3_St_7_OFF_3_1_0 = s_3_St_7_OFF_3;
          };
        } else {
          s_3_St_7_OFF_2_0 = s_3_St_7_OFF_2;
          if (s_3_St_7_OFF_2_0) {
            s_3_St_7_OFF_3_0_1 = s_3_St_7_OFF_3;
          } else {
            s_3_St_7_OFF_3_0_0 = s_3_St_7_OFF_3;
          };
        };
      } else {
        if (e) {
          r_St_7_RINSE = true;
        } else {
          r_St_7_RINSE = self->pnr;
        };
        v_274 = r_St_7_RINSE;
        if (e) {
          s_3_St_7_RINSE_1 = true;
        } else {
          s_3_St_7_RINSE_1 = true;
        };
        v_256 = s_3_St_7_RINSE_1;
        if (e) {
          s_3_St_7_RINSE_2 = false;
        } else {
          s_3_St_7_RINSE_2 = true;
        };
        v_257 = s_3_St_7_RINSE_2;
        if (e) {
          s_3_St_7_RINSE_3 = false;
        } else {
          s_3_St_7_RINSE_3 = false;
        };
        v_258 = s_3_St_7_RINSE_3;
        if (s_3_St_7_RINSE_1) {
          s_3_St_7_RINSE_2_1 = s_3_St_7_RINSE_2;
          if (s_3_St_7_RINSE_2_1) {
            s_3_St_7_RINSE_3_1_1 = s_3_St_7_RINSE_3;
          } else {
            s_3_St_7_RINSE_3_1_0 = s_3_St_7_RINSE_3;
          };
        } else {
          s_3_St_7_RINSE_2_0 = s_3_St_7_RINSE_2;
          if (s_3_St_7_RINSE_2_0) {
            s_3_St_7_RINSE_3_0_1 = s_3_St_7_RINSE_3;
          } else {
            s_3_St_7_RINSE_3_0_0 = s_3_St_7_RINSE_3;
          };
        };
      };
      v_268 = v_256;
      v_269 = v_257;
      v_270 = v_258;
      v_276 = v_274;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_275 = true;
        v_259 = true;
        v_260 = true;
        v_261 = true;
      } else {
        if (e) {
          r_St_7_SPIN = true;
        } else {
          r_St_7_SPIN = self->pnr;
        };
        v_275 = r_St_7_SPIN;
        if (e) {
          s_3_St_7_SPIN_1 = true;
        } else {
          s_3_St_7_SPIN_1 = true;
        };
        v_259 = s_3_St_7_SPIN_1;
        if (e) {
          s_3_St_7_SPIN_2 = true;
        } else {
          s_3_St_7_SPIN_2 = false;
        };
        v_260 = s_3_St_7_SPIN_2;
        if (e) {
          s_3_St_7_SPIN_3 = true;
        } else {
          s_3_St_7_SPIN_3 = false;
        };
        v_261 = s_3_St_7_SPIN_3;
      };
      v_268 = v_259;
      v_269 = v_260;
      v_270 = v_261;
      v_276 = v_275;
      if (!(ck_3_1_0)) {
        if (s_3_St_7_SPIN_1) {
          s_3_St_7_SPIN_2_1 = s_3_St_7_SPIN_2;
          if (s_3_St_7_SPIN_2_1) {
            s_3_St_7_SPIN_3_1_1 = s_3_St_7_SPIN_3;
          } else {
            s_3_St_7_SPIN_3_1_0 = s_3_St_7_SPIN_3;
          };
        } else {
          s_3_St_7_SPIN_2_0 = s_3_St_7_SPIN_2;
          if (s_3_St_7_SPIN_2_0) {
            s_3_St_7_SPIN_3_0_1 = s_3_St_7_SPIN_3;
          } else {
            s_3_St_7_SPIN_3_0_0 = s_3_St_7_SPIN_3;
          };
        };
      };
    };
    s_3_1 = v_268;
    s_3_2 = v_269;
    s_3_3 = v_270;
    r = v_276;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (c) {
          r_St_7_STANDBY = true;
          s_3_St_7_STANDBY_1 = false;
          s_3_St_7_STANDBY_2 = true;
          s_3_St_7_STANDBY_3 = false;
        } else {
          r_St_7_STANDBY = self->pnr;
          s_3_St_7_STANDBY_1 = false;
          s_3_St_7_STANDBY_2 = true;
          s_3_St_7_STANDBY_3 = true;
        };
        v_277 = r_St_7_STANDBY;
        v_262 = s_3_St_7_STANDBY_1;
        v_263 = s_3_St_7_STANDBY_2;
        v_264 = s_3_St_7_STANDBY_3;
      } else {
        if (e) {
          r_St_7_WASHING = true;
        } else {
          r_St_7_WASHING = self->pnr;
        };
        v_277 = r_St_7_WASHING;
        if (e) {
          s_3_St_7_WASHING_1 = true;
        } else {
          s_3_St_7_WASHING_1 = false;
        };
        v_262 = s_3_St_7_WASHING_1;
        if (e) {
          s_3_St_7_WASHING_2 = true;
        } else {
          s_3_St_7_WASHING_2 = true;
        };
        v_263 = s_3_St_7_WASHING_2;
        if (e) {
          s_3_St_7_WASHING_3 = false;
        } else {
          s_3_St_7_WASHING_3 = false;
        };
        v_264 = s_3_St_7_WASHING_3;
      };
      v_271 = v_262;
      v_272 = v_263;
      v_273 = v_264;
      v_279 = v_277;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_278 = true;
        v_265 = true;
        v_266 = true;
        v_267 = true;
      } else {
        v_47 = (e&&c);
        if (v_47) {
          v_49 = true;
          v_48_1 = false;
          v_48_2 = true;
          v_48_3 = false;
        } else {
          v_49 = self->pnr;
          v_48_1 = false;
          v_48_2 = false;
          v_48_3 = false;
        };
        v = !(c);
        v_46 = (e&&v);
        if (v_46) {
          r_St_7_WATER_FILL = true;
        } else {
          r_St_7_WATER_FILL = v_49;
        };
        v_278 = r_St_7_WATER_FILL;
        if (v_46) {
          s_3_St_7_WATER_FILL_1 = false;
        } else {
          s_3_St_7_WATER_FILL_1 = v_48_1;
        };
        v_265 = s_3_St_7_WATER_FILL_1;
        if (v_46) {
          s_3_St_7_WATER_FILL_2 = true;
        } else {
          s_3_St_7_WATER_FILL_2 = v_48_2;
        };
        v_266 = s_3_St_7_WATER_FILL_2;
        if (v_46) {
          s_3_St_7_WATER_FILL_3 = true;
        } else {
          s_3_St_7_WATER_FILL_3 = v_48_3;
        };
        v_267 = s_3_St_7_WATER_FILL_3;
        if (v_48_1) {
          v_48_2_1 = v_48_2;
          if (v_48_2_1) {
            v_48_3_1_1 = v_48_3;
          } else {
            v_48_3_1_0 = v_48_3;
          };
        } else {
          v_48_2_0 = v_48_2;
          if (v_48_2_0) {
            v_48_3_0_1 = v_48_3;
          } else {
            v_48_3_0_0 = v_48_3;
          };
        };
        if (s_3_St_7_WATER_FILL_1) {
          s_3_St_7_WATER_FILL_2_1 = s_3_St_7_WATER_FILL_2;
          if (s_3_St_7_WATER_FILL_2_1) {
            s_3_St_7_WATER_FILL_3_1_1 = s_3_St_7_WATER_FILL_3;
          } else {
            s_3_St_7_WATER_FILL_3_1_0 = s_3_St_7_WATER_FILL_3;
          };
        } else {
          s_3_St_7_WATER_FILL_2_0 = s_3_St_7_WATER_FILL_2;
          if (s_3_St_7_WATER_FILL_2_0) {
            s_3_St_7_WATER_FILL_3_0_1 = s_3_St_7_WATER_FILL_3;
          } else {
            s_3_St_7_WATER_FILL_3_0_0 = s_3_St_7_WATER_FILL_3;
          };
        };
      };
      v_271 = v_265;
      v_272 = v_266;
      v_273 = v_267;
      v_279 = v_278;
    };
    s_3_1 = v_271;
    s_3_2 = v_272;
    s_3_3 = v_273;
    r = v_279;
  };
  ck_8_1 = s_3_1;
  ck_8_2 = s_3_2;
  ck_8_3 = s_3_3;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      ck_8_3_1_1 = ck_8_3;
      if (ck_8_3_1_1) {
        s1_St_7_OFF = 0;
        p1_St_7_OFF = 0;
        nr_St_7_OFF = false;
        ns_St_7_OFF_1 = true;
        ns_St_7_OFF_2 = true;
        ns_St_7_OFF_3 = true;
        v_217 = s1_St_7_OFF;
        v_223 = p1_St_7_OFF;
        v_247 = nr_St_7_OFF;
        v_229 = ns_St_7_OFF_1;
        v_230 = ns_St_7_OFF_2;
        v_231 = ns_St_7_OFF_3;
        if (ns_St_7_OFF_1) {
          ns_St_7_OFF_2_1 = ns_St_7_OFF_2;
          if (ns_St_7_OFF_2_1) {
            ns_St_7_OFF_3_1_1 = ns_St_7_OFF_3;
          } else {
            ns_St_7_OFF_3_1_0 = ns_St_7_OFF_3;
          };
        } else {
          ns_St_7_OFF_2_0 = ns_St_7_OFF_2;
          if (ns_St_7_OFF_2_0) {
            ns_St_7_OFF_3_0_1 = ns_St_7_OFF_3;
          } else {
            ns_St_7_OFF_3_0_0 = ns_St_7_OFF_3;
          };
        };
      } else {
        s1_St_7_RINSE = 4;
        v_217 = s1_St_7_RINSE;
        p1_St_7_RINSE = 200;
        v_223 = p1_St_7_RINSE;
        nr_St_7_RINSE = false;
        v_247 = nr_St_7_RINSE;
        ns_St_7_RINSE_1 = true;
        v_229 = ns_St_7_RINSE_1;
        ns_St_7_RINSE_2 = true;
        v_230 = ns_St_7_RINSE_2;
        ns_St_7_RINSE_3 = false;
        v_231 = ns_St_7_RINSE_3;
        if (ns_St_7_RINSE_1) {
          ns_St_7_RINSE_2_1 = ns_St_7_RINSE_2;
          if (ns_St_7_RINSE_2_1) {
            ns_St_7_RINSE_3_1_1 = ns_St_7_RINSE_3;
          } else {
            ns_St_7_RINSE_3_1_0 = ns_St_7_RINSE_3;
          };
        } else {
          ns_St_7_RINSE_2_0 = ns_St_7_RINSE_2;
          if (ns_St_7_RINSE_2_0) {
            ns_St_7_RINSE_3_0_1 = ns_St_7_RINSE_3;
          } else {
            ns_St_7_RINSE_3_0_0 = ns_St_7_RINSE_3;
          };
        };
      };
      v_219 = v_217;
      v_225 = v_223;
      v_241 = v_229;
      v_242 = v_230;
      v_243 = v_231;
      v_249 = v_247;
    } else {
      ck_8_3_1_0 = ck_8_3;
      if (ck_8_3_1_0) {
        v_218 = 0;
        v_224 = 0;
        v_248 = true;
        v_232 = true;
        v_233 = true;
        v_234 = true;
      } else {
        s1_St_7_SPIN = 5;
        v_218 = s1_St_7_SPIN;
        p1_St_7_SPIN = 800;
        v_224 = p1_St_7_SPIN;
        nr_St_7_SPIN = false;
        v_248 = nr_St_7_SPIN;
        ns_St_7_SPIN_1 = true;
        v_232 = ns_St_7_SPIN_1;
        ns_St_7_SPIN_2 = false;
        v_233 = ns_St_7_SPIN_2;
        ns_St_7_SPIN_3 = false;
        v_234 = ns_St_7_SPIN_3;
      };
      v_219 = v_218;
      v_225 = v_224;
      v_241 = v_232;
      v_242 = v_233;
      v_243 = v_234;
      v_249 = v_248;
      if (!(ck_8_3_1_0)) {
        if (ns_St_7_SPIN_1) {
          ns_St_7_SPIN_2_1 = ns_St_7_SPIN_2;
          if (ns_St_7_SPIN_2_1) {
            ns_St_7_SPIN_3_1_1 = ns_St_7_SPIN_3;
          } else {
            ns_St_7_SPIN_3_1_0 = ns_St_7_SPIN_3;
          };
        } else {
          ns_St_7_SPIN_2_0 = ns_St_7_SPIN_2;
          if (ns_St_7_SPIN_2_0) {
            ns_St_7_SPIN_3_0_1 = ns_St_7_SPIN_3;
          } else {
            ns_St_7_SPIN_3_0_0 = ns_St_7_SPIN_3;
          };
        };
      };
    };
    _out->s1 = v_219;
    _out->p1 = v_225;
    ns_1 = v_241;
    ns_2 = v_242;
    ns_3 = v_243;
    nr = v_249;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      ck_8_3_0_1 = ck_8_3;
      if (ck_8_3_0_1) {
        s1_St_7_STANDBY = 2;
        p1_St_7_STANDBY = 0;
        nr_St_7_STANDBY = false;
        ns_St_7_STANDBY_1 = false;
        ns_St_7_STANDBY_2 = true;
        ns_St_7_STANDBY_3 = true;
        v_220 = s1_St_7_STANDBY;
        v_226 = p1_St_7_STANDBY;
        v_250 = nr_St_7_STANDBY;
        v_235 = ns_St_7_STANDBY_1;
        v_236 = ns_St_7_STANDBY_2;
        v_237 = ns_St_7_STANDBY_3;
      } else {
        s1_St_7_WASHING = 3;
        v_220 = s1_St_7_WASHING;
        p1_St_7_WASHING = 250;
        v_226 = p1_St_7_WASHING;
        nr_St_7_WASHING = false;
        v_250 = nr_St_7_WASHING;
        ns_St_7_WASHING_1 = false;
        v_235 = ns_St_7_WASHING_1;
        ns_St_7_WASHING_2 = true;
        v_236 = ns_St_7_WASHING_2;
        ns_St_7_WASHING_3 = false;
        v_237 = ns_St_7_WASHING_3;
      };
      v_222 = v_220;
      v_228 = v_226;
      v_244 = v_235;
      v_245 = v_236;
      v_246 = v_237;
      v_252 = v_250;
    } else {
      ck_8_3_0_0 = ck_8_3;
      if (ck_8_3_0_0) {
        v_221 = 0;
        v_227 = 0;
        v_251 = true;
        v_238 = true;
        v_239 = true;
        v_240 = true;
      } else {
        s1_St_7_WATER_FILL = 1;
        v_221 = s1_St_7_WATER_FILL;
        p1_St_7_WATER_FILL = 15;
        v_227 = p1_St_7_WATER_FILL;
        nr_St_7_WATER_FILL = false;
        v_251 = nr_St_7_WATER_FILL;
        ns_St_7_WATER_FILL_1 = false;
        v_238 = ns_St_7_WATER_FILL_1;
        ns_St_7_WATER_FILL_2 = false;
        v_239 = ns_St_7_WATER_FILL_2;
        ns_St_7_WATER_FILL_3 = false;
        v_240 = ns_St_7_WATER_FILL_3;
        if (ns_St_7_WATER_FILL_1) {
          ns_St_7_WATER_FILL_2_1 = ns_St_7_WATER_FILL_2;
          if (ns_St_7_WATER_FILL_2_1) {
            ns_St_7_WATER_FILL_3_1_1 = ns_St_7_WATER_FILL_3;
          } else {
            ns_St_7_WATER_FILL_3_1_0 = ns_St_7_WATER_FILL_3;
          };
        } else {
          ns_St_7_WATER_FILL_2_0 = ns_St_7_WATER_FILL_2;
          if (ns_St_7_WATER_FILL_2_0) {
            ns_St_7_WATER_FILL_3_0_1 = ns_St_7_WATER_FILL_3;
          } else {
            ns_St_7_WATER_FILL_3_0_0 = ns_St_7_WATER_FILL_3;
          };
        };
      };
      v_222 = v_221;
      v_228 = v_227;
      v_244 = v_238;
      v_245 = v_239;
      v_246 = v_240;
      v_252 = v_251;
    };
    _out->s1 = v_222;
    _out->p1 = v_228;
    ns_1 = v_244;
    ns_2 = v_245;
    ns_3 = v_246;
    nr = v_252;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (!(ck_8_1)) {
    if (ck_8_2_0) {
      if (ck_8_3_0_1) {
        if (ns_St_7_STANDBY_1) {
          ns_St_7_STANDBY_2_1 = ns_St_7_STANDBY_2;
          if (ns_St_7_STANDBY_2_1) {
            ns_St_7_STANDBY_3_1_1 = ns_St_7_STANDBY_3;
          } else {
            ns_St_7_STANDBY_3_1_0 = ns_St_7_STANDBY_3;
          };
        } else {
          ns_St_7_STANDBY_2_0 = ns_St_7_STANDBY_2;
          if (ns_St_7_STANDBY_2_0) {
            ns_St_7_STANDBY_3_0_1 = ns_St_7_STANDBY_3;
          } else {
            ns_St_7_STANDBY_3_0_0 = ns_St_7_STANDBY_3;
          };
        };
      } else {
        if (ns_St_7_WASHING_1) {
          ns_St_7_WASHING_2_1 = ns_St_7_WASHING_2;
          if (ns_St_7_WASHING_2_1) {
            ns_St_7_WASHING_3_1_1 = ns_St_7_WASHING_3;
          } else {
            ns_St_7_WASHING_3_1_0 = ns_St_7_WASHING_3;
          };
        } else {
          ns_St_7_WASHING_2_0 = ns_St_7_WASHING_2;
          if (ns_St_7_WASHING_2_0) {
            ns_St_7_WASHING_3_0_1 = ns_St_7_WASHING_3;
          } else {
            ns_St_7_WASHING_3_0_0 = ns_St_7_WASHING_3;
          };
        };
      };
    };
  };
  if (s_3_1) {
    s_3_2_1 = s_3_2;
    if (s_3_2_1) {
      s_3_3_1_1 = s_3_3;
    } else {
      s_3_3_1_0 = s_3_3;
    };
  } else {
    s_3_2_0 = s_3_2;
    if (s_3_2_0) {
      s_3_3_0_1 = s_3_3;
    } else {
      s_3_3_0_0 = s_3_3;
    };
  };
  if (!(ck_1)) {
    if (ck_2_0) {
      if (ck_3_0_1) {
        if (s_3_St_7_STANDBY_1) {
          s_3_St_7_STANDBY_2_1 = s_3_St_7_STANDBY_2;
          if (s_3_St_7_STANDBY_2_1) {
            s_3_St_7_STANDBY_3_1_1 = s_3_St_7_STANDBY_3;
          } else {
            s_3_St_7_STANDBY_3_1_0 = s_3_St_7_STANDBY_3;
          };
        } else {
          s_3_St_7_STANDBY_2_0 = s_3_St_7_STANDBY_2;
          if (s_3_St_7_STANDBY_2_0) {
            s_3_St_7_STANDBY_3_0_1 = s_3_St_7_STANDBY_3;
          } else {
            s_3_St_7_STANDBY_3_0_0 = s_3_St_7_STANDBY_3;
          };
        };
      } else {
        if (s_3_St_7_WASHING_1) {
          s_3_St_7_WASHING_2_1 = s_3_St_7_WASHING_2;
          if (s_3_St_7_WASHING_2_1) {
            s_3_St_7_WASHING_3_1_1 = s_3_St_7_WASHING_3;
          } else {
            s_3_St_7_WASHING_3_1_0 = s_3_St_7_WASHING_3;
          };
        } else {
          s_3_St_7_WASHING_2_0 = s_3_St_7_WASHING_2;
          if (s_3_St_7_WASHING_2_0) {
            s_3_St_7_WASHING_3_0_1 = s_3_St_7_WASHING_3;
          } else {
            s_3_St_7_WASHING_3_0_0 = s_3_St_7_WASHING_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_253 = ns_1;
  self->v_254 = ns_2;
  self->v_255 = ns_3;;
}

void Smart_environment__controller_reset(Smart_environment__controller_mem* self) {
  self->pnr = false;
  self->v_292 = false;
  self->v_293 = false;
  self->pnr_1 = false;
  self->v_336 = true;
  self->v_337 = true;
  self->v_338 = true;
  self->pnr_2 = false;
  self->v_393 = true;
  self->v_394 = false;
  self->v_395 = false;
  self->pnr_3 = false;
  self->v_426 = false;
  self->v_427 = false;
  self->pnr_4 = false;
  self->ck_17_1 = true;
  self->pnr_5 = false;
  self->ck_15_1 = true;
  self->pnr_6 = false;
  self->ck_13_1 = true;
  self->pnr_7 = false;
  self->ck_11_1 = true;
  self->pnr_8 = false;
  self->ck_9_1 = true;
}

void Smart_environment__controller_step(int push_door, int push_window,
                                        int room_presence, int lamp_switch,
                                        int tv_switch, int rad_up1,
                                        int rad_down1, int rad_up2,
                                        int rad_down2, int wash_start,
                                        int wash_end, int oven_start,
                                        int oven_finish, int oven_temp_ok,
                                        int oven_cold, int eco_input,
                                        int comfort_input,
                                        Smart_environment__controller_out* _out,
                                        Smart_environment__controller_mem* self) {
  Controller_controller__controller_controller_out Controller_controller__controller_controller_out_st;
  
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
  int ns_St_8_COMFORT_2_0;
  int ns_St_8_COMFORT_2_1;
  int mode_St_8_COMFORT_2_0;
  int mode_St_8_COMFORT_2_1;
  int ns_St_8_ECO_2_0;
  int ns_St_8_ECO_2_1;
  int mode_St_8_ECO_2_0;
  int mode_St_8_ECO_2_1;
  int ns_St_8_MINIMAL_SAFETY_2_0;
  int ns_St_8_MINIMAL_SAFETY_2_1;
  int mode_St_8_MINIMAL_SAFETY_2_0;
  int mode_St_8_MINIMAL_SAFETY_2_1;
  int ck_26_2_0;
  int ck_26_2_1;
  int nr_St_8_COMFORT;
  int ns_St_8_COMFORT_2;
  int ns_St_8_COMFORT_1;
  int mode_St_8_COMFORT_2;
  int mode_St_8_COMFORT_1;
  int nr_St_8_ECO;
  int ns_St_8_ECO_2;
  int ns_St_8_ECO_1;
  int mode_St_8_ECO_2;
  int mode_St_8_ECO_1;
  int nr_St_8_MINIMAL_SAFETY;
  int ns_St_8_MINIMAL_SAFETY_2;
  int ns_St_8_MINIMAL_SAFETY_1;
  int mode_St_8_MINIMAL_SAFETY_2;
  int mode_St_8_MINIMAL_SAFETY_1;
  int ck_26_2;
  int ck_26_1;
  int v_126_2_0;
  int v_126_2_1;
  int v_127;
  int v_126_2;
  int v_126_1;
  int v_124_2_0;
  int v_124_2_1;
  int v_125;
  int v_124_2;
  int v_124_1;
  int v_123;
  int v_121_2_0;
  int v_121_2_1;
  int v_122;
  int v_121_2;
  int v_121_1;
  int v_120;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int s_4_St_8_COMFORT_2_0;
  int s_4_St_8_COMFORT_2_1;
  int s_4_St_8_ECO_2_0;
  int s_4_St_8_ECO_2_1;
  int s_4_St_8_MINIMAL_SAFETY_2_0;
  int s_4_St_8_MINIMAL_SAFETY_2_1;
  int ck_25_2_0;
  int ck_25_2_1;
  int r_St_8_COMFORT;
  int s_4_St_8_COMFORT_2;
  int s_4_St_8_COMFORT_1;
  int r_St_8_ECO;
  int s_4_St_8_ECO_2;
  int s_4_St_8_ECO_1;
  int r_St_8_MINIMAL_SAFETY;
  int s_4_St_8_MINIMAL_SAFETY_2;
  int s_4_St_8_MINIMAL_SAFETY_1;
  int ck_25_2;
  int ck_25_1;
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
  int ns_1_St_9_SPIN_2_0;
  int ns_1_St_9_SPIN_3_0_0;
  int ns_1_St_9_SPIN_3_0_1;
  int ns_1_St_9_SPIN_2_1;
  int ns_1_St_9_SPIN_3_1_0;
  int ns_1_St_9_SPIN_3_1_1;
  int ns_1_St_9_RINSE_2_0;
  int ns_1_St_9_RINSE_3_0_0;
  int ns_1_St_9_RINSE_3_0_1;
  int ns_1_St_9_RINSE_2_1;
  int ns_1_St_9_RINSE_3_1_0;
  int ns_1_St_9_RINSE_3_1_1;
  int ns_1_St_9_WASHING_2_0;
  int ns_1_St_9_WASHING_3_0_0;
  int ns_1_St_9_WASHING_3_0_1;
  int ns_1_St_9_WASHING_2_1;
  int ns_1_St_9_WASHING_3_1_0;
  int ns_1_St_9_WASHING_3_1_1;
  int ns_1_St_9_STANDBY_2_0;
  int ns_1_St_9_STANDBY_3_0_0;
  int ns_1_St_9_STANDBY_3_0_1;
  int ns_1_St_9_STANDBY_2_1;
  int ns_1_St_9_STANDBY_3_1_0;
  int ns_1_St_9_STANDBY_3_1_1;
  int ns_1_St_9_WATER_FILL_2_0;
  int ns_1_St_9_WATER_FILL_3_0_0;
  int ns_1_St_9_WATER_FILL_3_0_1;
  int ns_1_St_9_WATER_FILL_2_1;
  int ns_1_St_9_WATER_FILL_3_1_0;
  int ns_1_St_9_WATER_FILL_3_1_1;
  int ns_1_St_9_OFF_2_0;
  int ns_1_St_9_OFF_3_0_0;
  int ns_1_St_9_OFF_3_0_1;
  int ns_1_St_9_OFF_2_1;
  int ns_1_St_9_OFF_3_1_0;
  int ns_1_St_9_OFF_3_1_1;
  int ck_24_2_0;
  int ck_24_3_0_0;
  int ck_24_3_0_1;
  int ck_24_2_1;
  int ck_24_3_1_0;
  int ck_24_3_1_1;
  int nr_1_St_9_SPIN;
  int ns_1_St_9_SPIN_3;
  int ns_1_St_9_SPIN_2;
  int ns_1_St_9_SPIN_1;
  int p1_2_St_9_SPIN;
  int s1_2_St_9_SPIN;
  int nr_1_St_9_RINSE;
  int ns_1_St_9_RINSE_3;
  int ns_1_St_9_RINSE_2;
  int ns_1_St_9_RINSE_1;
  int p1_2_St_9_RINSE;
  int s1_2_St_9_RINSE;
  int nr_1_St_9_WASHING;
  int ns_1_St_9_WASHING_3;
  int ns_1_St_9_WASHING_2;
  int ns_1_St_9_WASHING_1;
  int p1_2_St_9_WASHING;
  int s1_2_St_9_WASHING;
  int nr_1_St_9_STANDBY;
  int ns_1_St_9_STANDBY_3;
  int ns_1_St_9_STANDBY_2;
  int ns_1_St_9_STANDBY_1;
  int p1_2_St_9_STANDBY;
  int s1_2_St_9_STANDBY;
  int nr_1_St_9_WATER_FILL;
  int ns_1_St_9_WATER_FILL_3;
  int ns_1_St_9_WATER_FILL_2;
  int ns_1_St_9_WATER_FILL_1;
  int p1_2_St_9_WATER_FILL;
  int s1_2_St_9_WATER_FILL;
  int nr_1_St_9_OFF;
  int ns_1_St_9_OFF_3;
  int ns_1_St_9_OFF_2;
  int ns_1_St_9_OFF_1;
  int p1_2_St_9_OFF;
  int s1_2_St_9_OFF;
  int ck_24_3;
  int ck_24_2;
  int ck_24_1;
  int v_118_2_0;
  int v_118_3_0_0;
  int v_118_3_0_1;
  int v_118_2_1;
  int v_118_3_1_0;
  int v_118_3_1_1;
  int v_119;
  int v_118_3;
  int v_118_2;
  int v_118_1;
  int v_117;
  int v_116;
  int v_115;
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
  int s_5_St_9_SPIN_2_0;
  int s_5_St_9_SPIN_3_0_0;
  int s_5_St_9_SPIN_3_0_1;
  int s_5_St_9_SPIN_2_1;
  int s_5_St_9_SPIN_3_1_0;
  int s_5_St_9_SPIN_3_1_1;
  int s_5_St_9_RINSE_2_0;
  int s_5_St_9_RINSE_3_0_0;
  int s_5_St_9_RINSE_3_0_1;
  int s_5_St_9_RINSE_2_1;
  int s_5_St_9_RINSE_3_1_0;
  int s_5_St_9_RINSE_3_1_1;
  int s_5_St_9_WASHING_2_0;
  int s_5_St_9_WASHING_3_0_0;
  int s_5_St_9_WASHING_3_0_1;
  int s_5_St_9_WASHING_2_1;
  int s_5_St_9_WASHING_3_1_0;
  int s_5_St_9_WASHING_3_1_1;
  int s_5_St_9_STANDBY_2_0;
  int s_5_St_9_STANDBY_3_0_0;
  int s_5_St_9_STANDBY_3_0_1;
  int s_5_St_9_STANDBY_2_1;
  int s_5_St_9_STANDBY_3_1_0;
  int s_5_St_9_STANDBY_3_1_1;
  int s_5_St_9_WATER_FILL_2_0;
  int s_5_St_9_WATER_FILL_3_0_0;
  int s_5_St_9_WATER_FILL_3_0_1;
  int s_5_St_9_WATER_FILL_2_1;
  int s_5_St_9_WATER_FILL_3_1_0;
  int s_5_St_9_WATER_FILL_3_1_1;
  int s_5_St_9_OFF_2_0;
  int s_5_St_9_OFF_3_0_0;
  int s_5_St_9_OFF_3_0_1;
  int s_5_St_9_OFF_2_1;
  int s_5_St_9_OFF_3_1_0;
  int s_5_St_9_OFF_3_1_1;
  int ck_23_2_0;
  int ck_23_3_0_0;
  int ck_23_3_0_1;
  int ck_23_2_1;
  int ck_23_3_1_0;
  int ck_23_3_1_1;
  int r_1_St_9_SPIN;
  int s_5_St_9_SPIN_3;
  int s_5_St_9_SPIN_2;
  int s_5_St_9_SPIN_1;
  int r_1_St_9_RINSE;
  int s_5_St_9_RINSE_3;
  int s_5_St_9_RINSE_2;
  int s_5_St_9_RINSE_1;
  int r_1_St_9_WASHING;
  int s_5_St_9_WASHING_3;
  int s_5_St_9_WASHING_2;
  int s_5_St_9_WASHING_1;
  int r_1_St_9_STANDBY;
  int s_5_St_9_STANDBY_3;
  int s_5_St_9_STANDBY_2;
  int s_5_St_9_STANDBY_1;
  int r_1_St_9_WATER_FILL;
  int s_5_St_9_WATER_FILL_3;
  int s_5_St_9_WATER_FILL_2;
  int s_5_St_9_WATER_FILL_1;
  int r_1_St_9_OFF;
  int s_5_St_9_OFF_3;
  int s_5_St_9_OFF_2;
  int s_5_St_9_OFF_1;
  int ck_23_3;
  int ck_23_2;
  int ck_23_1;
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
  int ns_2_St_10_REHEAT_2_0;
  int ns_2_St_10_REHEAT_3_0_0;
  int ns_2_St_10_REHEAT_3_0_1;
  int ns_2_St_10_REHEAT_2_1;
  int ns_2_St_10_REHEAT_3_1_0;
  int ns_2_St_10_REHEAT_3_1_1;
  int ns_2_St_10_MAINTAIN_2_0;
  int ns_2_St_10_MAINTAIN_3_0_0;
  int ns_2_St_10_MAINTAIN_3_0_1;
  int ns_2_St_10_MAINTAIN_2_1;
  int ns_2_St_10_MAINTAIN_3_1_0;
  int ns_2_St_10_MAINTAIN_3_1_1;
  int ns_2_St_10_HEAT_2_0;
  int ns_2_St_10_HEAT_3_0_0;
  int ns_2_St_10_HEAT_3_0_1;
  int ns_2_St_10_HEAT_2_1;
  int ns_2_St_10_HEAT_3_1_0;
  int ns_2_St_10_HEAT_3_1_1;
  int ns_2_St_10_STANDBY_2_0;
  int ns_2_St_10_STANDBY_3_0_0;
  int ns_2_St_10_STANDBY_3_0_1;
  int ns_2_St_10_STANDBY_2_1;
  int ns_2_St_10_STANDBY_3_1_0;
  int ns_2_St_10_STANDBY_3_1_1;
  int ns_2_St_10_OFF_2_0;
  int ns_2_St_10_OFF_3_0_0;
  int ns_2_St_10_OFF_3_0_1;
  int ns_2_St_10_OFF_2_1;
  int ns_2_St_10_OFF_3_1_0;
  int ns_2_St_10_OFF_3_1_1;
  int ck_22_2_0;
  int ck_22_3_0_0;
  int ck_22_3_0_1;
  int ck_22_2_1;
  int ck_22_3_1_0;
  int ck_22_3_1_1;
  int nr_2_St_10_REHEAT;
  int ns_2_St_10_REHEAT_3;
  int ns_2_St_10_REHEAT_2;
  int ns_2_St_10_REHEAT_1;
  int p1_1_St_10_REHEAT;
  int s1_1_St_10_REHEAT;
  int nr_2_St_10_MAINTAIN;
  int ns_2_St_10_MAINTAIN_3;
  int ns_2_St_10_MAINTAIN_2;
  int ns_2_St_10_MAINTAIN_1;
  int p1_1_St_10_MAINTAIN;
  int s1_1_St_10_MAINTAIN;
  int nr_2_St_10_HEAT;
  int ns_2_St_10_HEAT_3;
  int ns_2_St_10_HEAT_2;
  int ns_2_St_10_HEAT_1;
  int p1_1_St_10_HEAT;
  int s1_1_St_10_HEAT;
  int nr_2_St_10_STANDBY;
  int ns_2_St_10_STANDBY_3;
  int ns_2_St_10_STANDBY_2;
  int ns_2_St_10_STANDBY_1;
  int p1_1_St_10_STANDBY;
  int s1_1_St_10_STANDBY;
  int nr_2_St_10_OFF;
  int ns_2_St_10_OFF_3;
  int ns_2_St_10_OFF_2;
  int ns_2_St_10_OFF_1;
  int p1_1_St_10_OFF;
  int s1_1_St_10_OFF;
  int ck_22_3;
  int ck_22_2;
  int ck_22_1;
  int v_113_2_0;
  int v_113_3_0_0;
  int v_113_3_0_1;
  int v_113_2_1;
  int v_113_3_1_0;
  int v_113_3_1_1;
  int v_114;
  int v_113_3;
  int v_113_2;
  int v_113_1;
  int v_112;
  int v_111;
  int v_110;
  int v_108_2_0;
  int v_108_3_0_0;
  int v_108_3_0_1;
  int v_108_2_1;
  int v_108_3_1_0;
  int v_108_3_1_1;
  int v_109;
  int v_108_3;
  int v_108_2;
  int v_108_1;
  int v_106_2_0;
  int v_106_3_0_0;
  int v_106_3_0_1;
  int v_106_2_1;
  int v_106_3_1_0;
  int v_106_3_1_1;
  int v_107;
  int v_106_3;
  int v_106_2;
  int v_106_1;
  int v_105;
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
  int s_6_St_10_REHEAT_2_0;
  int s_6_St_10_REHEAT_3_0_0;
  int s_6_St_10_REHEAT_3_0_1;
  int s_6_St_10_REHEAT_2_1;
  int s_6_St_10_REHEAT_3_1_0;
  int s_6_St_10_REHEAT_3_1_1;
  int s_6_St_10_MAINTAIN_2_0;
  int s_6_St_10_MAINTAIN_3_0_0;
  int s_6_St_10_MAINTAIN_3_0_1;
  int s_6_St_10_MAINTAIN_2_1;
  int s_6_St_10_MAINTAIN_3_1_0;
  int s_6_St_10_MAINTAIN_3_1_1;
  int s_6_St_10_HEAT_2_0;
  int s_6_St_10_HEAT_3_0_0;
  int s_6_St_10_HEAT_3_0_1;
  int s_6_St_10_HEAT_2_1;
  int s_6_St_10_HEAT_3_1_0;
  int s_6_St_10_HEAT_3_1_1;
  int s_6_St_10_STANDBY_2_0;
  int s_6_St_10_STANDBY_3_0_0;
  int s_6_St_10_STANDBY_3_0_1;
  int s_6_St_10_STANDBY_2_1;
  int s_6_St_10_STANDBY_3_1_0;
  int s_6_St_10_STANDBY_3_1_1;
  int s_6_St_10_OFF_2_0;
  int s_6_St_10_OFF_3_0_0;
  int s_6_St_10_OFF_3_0_1;
  int s_6_St_10_OFF_2_1;
  int s_6_St_10_OFF_3_1_0;
  int s_6_St_10_OFF_3_1_1;
  int ck_21_2_0;
  int ck_21_3_0_0;
  int ck_21_3_0_1;
  int ck_21_2_1;
  int ck_21_3_1_0;
  int ck_21_3_1_1;
  int r_2_St_10_REHEAT;
  int s_6_St_10_REHEAT_3;
  int s_6_St_10_REHEAT_2;
  int s_6_St_10_REHEAT_1;
  int r_2_St_10_MAINTAIN;
  int s_6_St_10_MAINTAIN_3;
  int s_6_St_10_MAINTAIN_2;
  int s_6_St_10_MAINTAIN_1;
  int r_2_St_10_HEAT;
  int s_6_St_10_HEAT_3;
  int s_6_St_10_HEAT_2;
  int s_6_St_10_HEAT_1;
  int r_2_St_10_STANDBY;
  int s_6_St_10_STANDBY_3;
  int s_6_St_10_STANDBY_2;
  int s_6_St_10_STANDBY_1;
  int r_2_St_10_OFF;
  int s_6_St_10_OFF_3;
  int s_6_St_10_OFF_2;
  int s_6_St_10_OFF_1;
  int ck_21_3;
  int ck_21_2;
  int ck_21_1;
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
  int ns_3_St_11_HIGH_2_0;
  int ns_3_St_11_HIGH_2_1;
  int ns_3_St_11_ECO_2_0;
  int ns_3_St_11_ECO_2_1;
  int ns_3_St_11_FROST_2_0;
  int ns_3_St_11_FROST_2_1;
  int ns_3_St_11_OFF_2_0;
  int ns_3_St_11_OFF_2_1;
  int ck_20_2_0;
  int ck_20_2_1;
  int nr_3_St_11_HIGH;
  int ns_3_St_11_HIGH_2;
  int ns_3_St_11_HIGH_1;
  int p1_St_11_HIGH;
  int s1_St_11_HIGH;
  int nr_3_St_11_ECO;
  int ns_3_St_11_ECO_2;
  int ns_3_St_11_ECO_1;
  int p1_St_11_ECO;
  int s1_St_11_ECO;
  int nr_3_St_11_FROST;
  int ns_3_St_11_FROST_2;
  int ns_3_St_11_FROST_1;
  int p1_St_11_FROST;
  int s1_St_11_FROST;
  int nr_3_St_11_OFF;
  int ns_3_St_11_OFF_2;
  int ns_3_St_11_OFF_1;
  int p1_St_11_OFF;
  int s1_St_11_OFF;
  int ck_20_2;
  int ck_20_1;
  int v_104;
  int v_103;
  int v_101_2_0;
  int v_101_2_1;
  int v_99_2_0;
  int v_99_2_1;
  int v_102;
  int v_101_2;
  int v_101_1;
  int v_100;
  int v_99_2;
  int v_99_1;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_93_2_0;
  int v_93_2_1;
  int v_94;
  int v_93_2;
  int v_93_1;
  int v_92;
  int v_91;
  int v_90;
  int v_88_2_0;
  int v_88_2_1;
  int v_89;
  int v_88_2;
  int v_88_1;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int s_7_St_11_HIGH_2_0;
  int s_7_St_11_HIGH_2_1;
  int s_7_St_11_ECO_2_0;
  int s_7_St_11_ECO_2_1;
  int s_7_St_11_FROST_2_0;
  int s_7_St_11_FROST_2_1;
  int s_7_St_11_OFF_2_0;
  int s_7_St_11_OFF_2_1;
  int ck_19_2_0;
  int ck_19_2_1;
  int r_3_St_11_HIGH;
  int s_7_St_11_HIGH_2;
  int s_7_St_11_HIGH_1;
  int r_3_St_11_ECO;
  int s_7_St_11_ECO_2;
  int s_7_St_11_ECO_1;
  int r_3_St_11_FROST;
  int s_7_St_11_FROST_2;
  int s_7_St_11_FROST_1;
  int r_3_St_11_OFF;
  int s_7_St_11_OFF_2;
  int s_7_St_11_OFF_1;
  int ck_19_2;
  int ck_19_1;
  int nr_4_St_12_ON;
  int ns_4_St_12_ON_1;
  int lamp_on_2_St_12_ON;
  int nr_4_St_12_OFF;
  int ns_4_St_12_OFF_1;
  int lamp_on_2_St_12_OFF;
  int ck_18_1;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int r_4_St_12_ON;
  int s_8_St_12_ON_1;
  int r_4_St_12_OFF;
  int s_8_St_12_OFF_1;
  int nr_5_St_13_ON;
  int ns_5_St_13_ON_1;
  int lamp_on_1_St_13_ON;
  int nr_5_St_13_OFF;
  int ns_5_St_13_OFF_1;
  int lamp_on_1_St_13_OFF;
  int ck_16_1;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int r_5_St_13_ON;
  int s_9_St_13_ON_1;
  int r_5_St_13_OFF;
  int s_9_St_13_OFF_1;
  int nr_6_St_14_OCUPIED;
  int ns_6_St_14_OCUPIED_1;
  int r1_St_14_OCUPIED;
  int nr_6_St_14_EMPTY;
  int ns_6_St_14_EMPTY_1;
  int r1_St_14_EMPTY;
  int ck_14_1;
  int v_71;
  int r_6_St_14_OCUPIED;
  int s_10_St_14_OCUPIED_1;
  int r_6_St_14_EMPTY;
  int s_10_St_14_EMPTY_1;
  int nr_7_St_15_OPEN;
  int ns_7_St_15_OPEN_1;
  int window_open_1_St_15_OPEN;
  int nr_7_St_15_CLOSED;
  int ns_7_St_15_CLOSED_1;
  int window_open_1_St_15_CLOSED;
  int ck_12_1;
  int v_70;
  int v_69;
  int v_68;
  int r_7_St_15_OPEN;
  int s_11_St_15_OPEN_1;
  int r_7_St_15_CLOSED;
  int s_11_St_15_CLOSED_1;
  int nr_8_St_16_OPEN;
  int ns_8_St_16_OPEN_1;
  int door_open_1_St_16_OPEN;
  int nr_8_St_16_CLOSED;
  int ns_8_St_16_CLOSED_1;
  int door_open_1_St_16_CLOSED;
  int ck_10_1;
  int v_67;
  int v_66;
  int v_65;
  int r_8_St_16_OPEN;
  int s_12_St_16_OPEN_1;
  int r_8_St_16_CLOSED;
  int s_12_St_16_CLOSED_1;
  int policy_2_0;
  int policy_2_1;
  int s_7_2_0;
  int s_7_2_1;
  int ns_3_2_0;
  int ns_3_2_1;
  int s_6_2_0;
  int s_6_3_0_0;
  int s_6_3_0_1;
  int s_6_2_1;
  int s_6_3_1_0;
  int s_6_3_1_1;
  int ns_2_2_0;
  int ns_2_3_0_0;
  int ns_2_3_0_1;
  int ns_2_2_1;
  int ns_2_3_1_0;
  int ns_2_3_1_1;
  int s_5_2_0;
  int s_5_3_0_0;
  int s_5_3_0_1;
  int s_5_2_1;
  int s_5_3_1_0;
  int s_5_3_1_1;
  int ns_1_2_0;
  int ns_1_3_0_0;
  int ns_1_3_0_1;
  int ns_1_2_1;
  int ns_1_3_1_0;
  int ns_1_3_1_1;
  int s_4_2_0;
  int s_4_2_1;
  int ns_2_4_0;
  int ns_2_4_1;
  int mode_2_0;
  int mode_2_1;
  int s_12_1;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_11_1;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_10_1;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_9_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_8_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_7_2;
  int s_7_1;
  int ns_3_2;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_6_3;
  int s_6_2;
  int s_6_1;
  int ns_2_3;
  int ns_2_2;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_5_3;
  int s_5_2;
  int s_5_1;
  int ns_1_3;
  int ns_1_2;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_4_2;
  int s_4_1;
  int ns_2_4;
  int ns_1_4;
  int r;
  int nr;
  int eco_input_1;
  int comfort_input_1;
  int mode_2;
  int mode_1;
  int e;
  int s_1;
  int c_3;
  int s1_2;
  int p1_2;
  int f;
  int s;
  int c_2;
  int cold;
  int temp_ok;
  int s1_1;
  int p1_1;
  int u1;
  int d1;
  int u2;
  int d2;
  int c1_2;
  int c2_2;
  int c3;
  int s1;
  int p1;
  int turn_on_1;
  int c1_1;
  int c2_1;
  int lamp_on_2;
  int turn_on;
  int c1;
  int c2;
  int lamp_on_1;
  int presence;
  int r1;
  int push_1;
  int c_1;
  int window_open_1;
  int push;
  int c;
  int door_open_1;
  int v_281;
  int v_280;
  int ck_1;
  int ck_2;
  int rule5_Minimal;
  int rule5_Eco;
  int rule5_Comfort;
  int ck_2_1;
  int ck_2_0;
  int total_power;
  int rule5;
  int rule4;
  int rule3;
  int rule2;
  int rule1;
  int v;
  int v_50;
  int v_51;
  int v_52;
  int v_53;
  int v_54;
  int v_55;
  int v_56;
  int v_57;
  int v_58;
  int v_59;
  int v_60;
  int v_61;
  int v_62;
  int v_63;
  int v_64;
  int c_wash;
  int c2_tv;
  int c2_lamp;
  int c1_tv;
  int c1_lamp;
  int rad_c3;
  int rad_c2;
  int rad_c1;
  int c_oven;
  int c_window;
  int c_door;
  eco_input_1 = eco_input;
  comfort_input_1 = comfort_input;
  ck_25_1 = self->v_292;
  ck_25_2 = self->v_293;
  e = wash_end;
  s_1 = wash_start;
  ck_23_1 = self->v_336;
  ck_23_2 = self->v_337;
  ck_23_3 = self->v_338;
  f = oven_finish;
  s = oven_start;
  cold = oven_cold;
  temp_ok = oven_temp_ok;
  ck_21_1 = self->v_393;
  ck_21_2 = self->v_394;
  ck_21_3 = self->v_395;
  u1 = rad_up1;
  d1 = rad_down1;
  u2 = rad_up2;
  d2 = rad_down2;
  ck_19_1 = self->v_426;
  ck_19_2 = self->v_427;
  turn_on_1 = tv_switch;
  turn_on = lamp_switch;
  presence = room_presence;
  push_1 = push_window;
  push = push_door;
  Controller_controller__controller_controller_step(push_door, push_window,
                                                    room_presence,
                                                    lamp_switch, tv_switch,
                                                    rad_up1, rad_down1,
                                                    rad_up2, rad_down2,
                                                    wash_start, wash_end,
                                                    oven_start, oven_finish,
                                                    oven_temp_ok, oven_cold,
                                                    eco_input, comfort_input,
                                                    self->ck_9_1,
                                                    self->pnr_8,
                                                    self->ck_11_1,
                                                    self->pnr_7,
                                                    self->ck_13_1,
                                                    self->pnr_6,
                                                    self->ck_15_1,
                                                    self->pnr_5,
                                                    self->ck_17_1,
                                                    self->pnr_4, self->v_427,
                                                    self->v_426, self->pnr_3,
                                                    self->v_395, self->v_394,
                                                    self->v_393, self->pnr_2,
                                                    self->v_338, self->v_337,
                                                    self->v_336, self->pnr_1,
                                                    self->v_293, self->v_292,
                                                    self->pnr, true, true,
                                                    true, true, true, true,
                                                    true, true, true, true,
                                                    true,
                                                    &Controller_controller__controller_controller_out_st);
  c_wash = Controller_controller__controller_controller_out_st.controller_c_wash;
  c2_tv = Controller_controller__controller_controller_out_st.controller_c2_tv;
  c2_lamp = Controller_controller__controller_controller_out_st.controller_c2_lamp;
  c1_tv = Controller_controller__controller_controller_out_st.controller_c1_tv;
  c1_lamp = Controller_controller__controller_controller_out_st.controller_c1_lamp;
  rad_c3 = Controller_controller__controller_controller_out_st.controller_rad_c3;
  rad_c2 = Controller_controller__controller_controller_out_st.controller_rad_c2;
  rad_c1 = Controller_controller__controller_controller_out_st.controller_rad_c1;
  c_oven = Controller_controller__controller_controller_out_st.controller_c_oven;
  c_window = Controller_controller__controller_controller_out_st.controller_c_window;
  c_door = Controller_controller__controller_controller_out_st.controller_c_door;
  c_3 = c_wash;
  c_2 = c_oven;
  c1_2 = rad_c1;
  c2_2 = rad_c2;
  c3 = rad_c3;
  c1_1 = c1_tv;
  c2_1 = c2_tv;
  c1 = c1_lamp;
  c2 = c2_lamp;
  c_1 = c_window;
  c = c_door;
  if (ck_25_1) {
    ck_25_2_1 = ck_25_2;
    if (ck_25_2_1) {
      if (eco_input_1) {
        v_122 = true;
        v_121_1 = true;
        v_121_2 = false;
      } else {
        v_122 = self->pnr;
        v_121_1 = true;
        v_121_2 = true;
      };
      v_120 = !(comfort_input_1);
      if (v_120) {
        r_St_8_COMFORT = true;
      } else {
        r_St_8_COMFORT = v_122;
      };
      v_298 = r_St_8_COMFORT;
      if (v_120) {
        s_4_St_8_COMFORT_1 = false;
      } else {
        s_4_St_8_COMFORT_1 = v_121_1;
      };
      v_294 = s_4_St_8_COMFORT_1;
      if (v_120) {
        s_4_St_8_COMFORT_2 = false;
      } else {
        s_4_St_8_COMFORT_2 = v_121_2;
      };
      v_295 = s_4_St_8_COMFORT_2;
    } else {
      v_123 = !(eco_input_1);
      if (v_123) {
        v_125 = true;
      } else {
        v_125 = self->pnr;
      };
      if (comfort_input_1) {
        r_St_8_ECO = true;
      } else {
        r_St_8_ECO = v_125;
      };
      if (v_123) {
        v_124_1 = false;
      } else {
        v_124_1 = true;
      };
      if (comfort_input_1) {
        s_4_St_8_ECO_1 = true;
      } else {
        s_4_St_8_ECO_1 = v_124_1;
      };
      if (v_123) {
        v_124_2 = false;
      } else {
        v_124_2 = false;
      };
      if (comfort_input_1) {
        s_4_St_8_ECO_2 = true;
      } else {
        s_4_St_8_ECO_2 = v_124_2;
      };
      v_298 = r_St_8_ECO;
      v_294 = s_4_St_8_ECO_1;
      v_295 = s_4_St_8_ECO_2;
    };
    s_4_1 = v_294;
    s_4_2 = v_295;
    r = v_298;
  } else {
    ck_25_2_0 = ck_25_2;
    if (ck_25_2_0) {
      v_299 = true;
      v_296 = true;
      v_297 = true;
    } else {
      if (comfort_input_1) {
        v_127 = true;
      } else {
        v_127 = self->pnr;
      };
      if (eco_input_1) {
        r_St_8_MINIMAL_SAFETY = true;
      } else {
        r_St_8_MINIMAL_SAFETY = v_127;
      };
      v_299 = r_St_8_MINIMAL_SAFETY;
      if (comfort_input_1) {
        v_126_1 = true;
      } else {
        v_126_1 = false;
      };
      if (eco_input_1) {
        s_4_St_8_MINIMAL_SAFETY_1 = true;
      } else {
        s_4_St_8_MINIMAL_SAFETY_1 = v_126_1;
      };
      v_296 = s_4_St_8_MINIMAL_SAFETY_1;
      if (comfort_input_1) {
        v_126_2 = true;
      } else {
        v_126_2 = false;
      };
      if (eco_input_1) {
        s_4_St_8_MINIMAL_SAFETY_2 = false;
      } else {
        s_4_St_8_MINIMAL_SAFETY_2 = v_126_2;
      };
      v_297 = s_4_St_8_MINIMAL_SAFETY_2;
      if (v_126_1) {
        v_126_2_1 = v_126_2;
      } else {
        v_126_2_0 = v_126_2;
      };
      if (s_4_St_8_MINIMAL_SAFETY_1) {
        s_4_St_8_MINIMAL_SAFETY_2_1 = s_4_St_8_MINIMAL_SAFETY_2;
      } else {
        s_4_St_8_MINIMAL_SAFETY_2_0 = s_4_St_8_MINIMAL_SAFETY_2;
      };
    };
    s_4_1 = v_296;
    s_4_2 = v_297;
    r = v_299;
  };
  ck_26_1 = s_4_1;
  ck_26_2 = s_4_2;
  if (ck_26_1) {
    ck_26_2_1 = ck_26_2;
    if (ck_26_2_1) {
      mode_St_8_COMFORT_1 = true;
      v_282 = mode_St_8_COMFORT_1;
      mode_St_8_COMFORT_2 = true;
      v_283 = mode_St_8_COMFORT_2;
      nr_St_8_COMFORT = false;
      v_290 = nr_St_8_COMFORT;
      ns_St_8_COMFORT_1 = true;
      v_286 = ns_St_8_COMFORT_1;
      ns_St_8_COMFORT_2 = true;
      v_287 = ns_St_8_COMFORT_2;
    } else {
      mode_St_8_ECO_1 = true;
      mode_St_8_ECO_2 = false;
      nr_St_8_ECO = false;
      ns_St_8_ECO_1 = true;
      ns_St_8_ECO_2 = false;
      v_282 = mode_St_8_ECO_1;
      v_283 = mode_St_8_ECO_2;
      v_290 = nr_St_8_ECO;
      v_286 = ns_St_8_ECO_1;
      v_287 = ns_St_8_ECO_2;
    };
    mode_1 = v_282;
    mode_2 = v_283;
    ns_1_4 = v_286;
    ns_2_4 = v_287;
    nr = v_290;
  } else {
    ck_26_2_0 = ck_26_2;
    if (ck_26_2_0) {
      v_284 = true;
      v_285 = true;
      v_291 = true;
      v_288 = true;
      v_289 = true;
    } else {
      mode_St_8_MINIMAL_SAFETY_1 = false;
      v_284 = mode_St_8_MINIMAL_SAFETY_1;
      mode_St_8_MINIMAL_SAFETY_2 = false;
      v_285 = mode_St_8_MINIMAL_SAFETY_2;
      nr_St_8_MINIMAL_SAFETY = false;
      v_291 = nr_St_8_MINIMAL_SAFETY;
      ns_St_8_MINIMAL_SAFETY_1 = false;
      v_288 = ns_St_8_MINIMAL_SAFETY_1;
      ns_St_8_MINIMAL_SAFETY_2 = false;
      v_289 = ns_St_8_MINIMAL_SAFETY_2;
      if (mode_St_8_MINIMAL_SAFETY_1) {
        mode_St_8_MINIMAL_SAFETY_2_1 = mode_St_8_MINIMAL_SAFETY_2;
      } else {
        mode_St_8_MINIMAL_SAFETY_2_0 = mode_St_8_MINIMAL_SAFETY_2;
      };
      if (ns_St_8_MINIMAL_SAFETY_1) {
        ns_St_8_MINIMAL_SAFETY_2_1 = ns_St_8_MINIMAL_SAFETY_2;
      } else {
        ns_St_8_MINIMAL_SAFETY_2_0 = ns_St_8_MINIMAL_SAFETY_2;
      };
    };
    mode_1 = v_284;
    mode_2 = v_285;
    ns_1_4 = v_288;
    ns_2_4 = v_289;
    nr = v_291;
  };
  _out->policy_1 = mode_1;
  ck_1 = _out->policy_1;
  _out->policy_2 = mode_2;
  ck_2 = _out->policy_2;
  if (ck_1) {
    ck_2_1 = ck_2;
  } else {
    ck_2_0 = ck_2;
  };
  if (_out->policy_1) {
    policy_2_1 = _out->policy_2;
  } else {
    policy_2_0 = _out->policy_2;
  };
  if (mode_1) {
    mode_2_1 = mode_2;
  } else {
    mode_2_0 = mode_2;
  };
  if (ns_1_4) {
    ns_2_4_1 = ns_2_4;
  } else {
    ns_2_4_0 = ns_2_4;
  };
  if (ck_26_1) {
    if (ck_26_2_1) {
      if (mode_St_8_COMFORT_1) {
        mode_St_8_COMFORT_2_1 = mode_St_8_COMFORT_2;
      } else {
        mode_St_8_COMFORT_2_0 = mode_St_8_COMFORT_2;
      };
      if (ns_St_8_COMFORT_1) {
        ns_St_8_COMFORT_2_1 = ns_St_8_COMFORT_2;
      } else {
        ns_St_8_COMFORT_2_0 = ns_St_8_COMFORT_2;
      };
    } else {
      if (mode_St_8_ECO_1) {
        mode_St_8_ECO_2_1 = mode_St_8_ECO_2;
      } else {
        mode_St_8_ECO_2_0 = mode_St_8_ECO_2;
      };
      if (ns_St_8_ECO_1) {
        ns_St_8_ECO_2_1 = ns_St_8_ECO_2;
      } else {
        ns_St_8_ECO_2_0 = ns_St_8_ECO_2;
      };
    };
  };
  if (s_4_1) {
    s_4_2_1 = s_4_2;
  } else {
    s_4_2_0 = s_4_2;
  };
  if (ck_25_1) {
    if (ck_25_2_1) {
      if (v_121_1) {
        v_121_2_1 = v_121_2;
      } else {
        v_121_2_0 = v_121_2;
      };
      if (s_4_St_8_COMFORT_1) {
        s_4_St_8_COMFORT_2_1 = s_4_St_8_COMFORT_2;
      } else {
        s_4_St_8_COMFORT_2_0 = s_4_St_8_COMFORT_2;
      };
    } else {
      if (v_124_1) {
        v_124_2_1 = v_124_2;
      } else {
        v_124_2_0 = v_124_2;
      };
      if (s_4_St_8_ECO_1) {
        s_4_St_8_ECO_2_1 = s_4_St_8_ECO_2;
      } else {
        s_4_St_8_ECO_2_0 = s_4_St_8_ECO_2;
      };
    };
  };
  if (ck_23_1) {
    ck_23_2_1 = ck_23_2;
    if (ck_23_2_1) {
      ck_23_3_1_1 = ck_23_3;
      if (ck_23_3_1_1) {
        if (s_1) {
          r_1_St_9_OFF = true;
          s_5_St_9_OFF_1 = false;
          s_5_St_9_OFF_2 = false;
          s_5_St_9_OFF_3 = false;
        } else {
          r_1_St_9_OFF = self->pnr_1;
          s_5_St_9_OFF_1 = true;
          s_5_St_9_OFF_2 = true;
          s_5_St_9_OFF_3 = true;
        };
        v_357 = r_1_St_9_OFF;
        v_339 = s_5_St_9_OFF_1;
        v_340 = s_5_St_9_OFF_2;
        v_341 = s_5_St_9_OFF_3;
        if (s_5_St_9_OFF_1) {
          s_5_St_9_OFF_2_1 = s_5_St_9_OFF_2;
          if (s_5_St_9_OFF_2_1) {
            s_5_St_9_OFF_3_1_1 = s_5_St_9_OFF_3;
          } else {
            s_5_St_9_OFF_3_1_0 = s_5_St_9_OFF_3;
          };
        } else {
          s_5_St_9_OFF_2_0 = s_5_St_9_OFF_2;
          if (s_5_St_9_OFF_2_0) {
            s_5_St_9_OFF_3_0_1 = s_5_St_9_OFF_3;
          } else {
            s_5_St_9_OFF_3_0_0 = s_5_St_9_OFF_3;
          };
        };
      } else {
        if (e) {
          r_1_St_9_RINSE = true;
        } else {
          r_1_St_9_RINSE = self->pnr_1;
        };
        v_357 = r_1_St_9_RINSE;
        if (e) {
          s_5_St_9_RINSE_1 = true;
        } else {
          s_5_St_9_RINSE_1 = true;
        };
        v_339 = s_5_St_9_RINSE_1;
        if (e) {
          s_5_St_9_RINSE_2 = false;
        } else {
          s_5_St_9_RINSE_2 = true;
        };
        v_340 = s_5_St_9_RINSE_2;
        if (e) {
          s_5_St_9_RINSE_3 = false;
        } else {
          s_5_St_9_RINSE_3 = false;
        };
        v_341 = s_5_St_9_RINSE_3;
        if (s_5_St_9_RINSE_1) {
          s_5_St_9_RINSE_2_1 = s_5_St_9_RINSE_2;
          if (s_5_St_9_RINSE_2_1) {
            s_5_St_9_RINSE_3_1_1 = s_5_St_9_RINSE_3;
          } else {
            s_5_St_9_RINSE_3_1_0 = s_5_St_9_RINSE_3;
          };
        } else {
          s_5_St_9_RINSE_2_0 = s_5_St_9_RINSE_2;
          if (s_5_St_9_RINSE_2_0) {
            s_5_St_9_RINSE_3_0_1 = s_5_St_9_RINSE_3;
          } else {
            s_5_St_9_RINSE_3_0_0 = s_5_St_9_RINSE_3;
          };
        };
      };
      v_351 = v_339;
      v_352 = v_340;
      v_353 = v_341;
      v_359 = v_357;
    } else {
      ck_23_3_1_0 = ck_23_3;
      if (ck_23_3_1_0) {
        v_358 = true;
        v_342 = true;
        v_343 = true;
        v_344 = true;
      } else {
        if (e) {
          r_1_St_9_SPIN = true;
        } else {
          r_1_St_9_SPIN = self->pnr_1;
        };
        v_358 = r_1_St_9_SPIN;
        if (e) {
          s_5_St_9_SPIN_1 = true;
        } else {
          s_5_St_9_SPIN_1 = true;
        };
        v_342 = s_5_St_9_SPIN_1;
        if (e) {
          s_5_St_9_SPIN_2 = true;
        } else {
          s_5_St_9_SPIN_2 = false;
        };
        v_343 = s_5_St_9_SPIN_2;
        if (e) {
          s_5_St_9_SPIN_3 = true;
        } else {
          s_5_St_9_SPIN_3 = false;
        };
        v_344 = s_5_St_9_SPIN_3;
      };
      v_351 = v_342;
      v_352 = v_343;
      v_353 = v_344;
      v_359 = v_358;
      if (!(ck_23_3_1_0)) {
        if (s_5_St_9_SPIN_1) {
          s_5_St_9_SPIN_2_1 = s_5_St_9_SPIN_2;
          if (s_5_St_9_SPIN_2_1) {
            s_5_St_9_SPIN_3_1_1 = s_5_St_9_SPIN_3;
          } else {
            s_5_St_9_SPIN_3_1_0 = s_5_St_9_SPIN_3;
          };
        } else {
          s_5_St_9_SPIN_2_0 = s_5_St_9_SPIN_2;
          if (s_5_St_9_SPIN_2_0) {
            s_5_St_9_SPIN_3_0_1 = s_5_St_9_SPIN_3;
          } else {
            s_5_St_9_SPIN_3_0_0 = s_5_St_9_SPIN_3;
          };
        };
      };
    };
    s_5_1 = v_351;
    s_5_2 = v_352;
    s_5_3 = v_353;
    r_1 = v_359;
  } else {
    ck_23_2_0 = ck_23_2;
    if (ck_23_2_0) {
      ck_23_3_0_1 = ck_23_3;
      if (ck_23_3_0_1) {
        if (c_3) {
          r_1_St_9_STANDBY = true;
          s_5_St_9_STANDBY_1 = false;
          s_5_St_9_STANDBY_2 = true;
          s_5_St_9_STANDBY_3 = false;
        } else {
          r_1_St_9_STANDBY = self->pnr_1;
          s_5_St_9_STANDBY_1 = false;
          s_5_St_9_STANDBY_2 = true;
          s_5_St_9_STANDBY_3 = true;
        };
        v_360 = r_1_St_9_STANDBY;
        v_345 = s_5_St_9_STANDBY_1;
        v_346 = s_5_St_9_STANDBY_2;
        v_347 = s_5_St_9_STANDBY_3;
      } else {
        if (e) {
          r_1_St_9_WASHING = true;
        } else {
          r_1_St_9_WASHING = self->pnr_1;
        };
        v_360 = r_1_St_9_WASHING;
        if (e) {
          s_5_St_9_WASHING_1 = true;
        } else {
          s_5_St_9_WASHING_1 = false;
        };
        v_345 = s_5_St_9_WASHING_1;
        if (e) {
          s_5_St_9_WASHING_2 = true;
        } else {
          s_5_St_9_WASHING_2 = true;
        };
        v_346 = s_5_St_9_WASHING_2;
        if (e) {
          s_5_St_9_WASHING_3 = false;
        } else {
          s_5_St_9_WASHING_3 = false;
        };
        v_347 = s_5_St_9_WASHING_3;
      };
      v_354 = v_345;
      v_355 = v_346;
      v_356 = v_347;
      v_362 = v_360;
    } else {
      ck_23_3_0_0 = ck_23_3;
      if (ck_23_3_0_0) {
        v_361 = true;
        v_348 = true;
        v_349 = true;
        v_350 = true;
      } else {
        v_117 = (e&&c_3);
        if (v_117) {
          v_119 = true;
          v_118_1 = false;
          v_118_2 = true;
          v_118_3 = false;
        } else {
          v_119 = self->pnr_1;
          v_118_1 = false;
          v_118_2 = false;
          v_118_3 = false;
        };
        v_115 = !(c_3);
        v_116 = (e&&v_115);
        if (v_116) {
          r_1_St_9_WATER_FILL = true;
        } else {
          r_1_St_9_WATER_FILL = v_119;
        };
        v_361 = r_1_St_9_WATER_FILL;
        if (v_116) {
          s_5_St_9_WATER_FILL_1 = false;
        } else {
          s_5_St_9_WATER_FILL_1 = v_118_1;
        };
        v_348 = s_5_St_9_WATER_FILL_1;
        if (v_116) {
          s_5_St_9_WATER_FILL_2 = true;
        } else {
          s_5_St_9_WATER_FILL_2 = v_118_2;
        };
        v_349 = s_5_St_9_WATER_FILL_2;
        if (v_116) {
          s_5_St_9_WATER_FILL_3 = true;
        } else {
          s_5_St_9_WATER_FILL_3 = v_118_3;
        };
        v_350 = s_5_St_9_WATER_FILL_3;
        if (v_118_1) {
          v_118_2_1 = v_118_2;
          if (v_118_2_1) {
            v_118_3_1_1 = v_118_3;
          } else {
            v_118_3_1_0 = v_118_3;
          };
        } else {
          v_118_2_0 = v_118_2;
          if (v_118_2_0) {
            v_118_3_0_1 = v_118_3;
          } else {
            v_118_3_0_0 = v_118_3;
          };
        };
        if (s_5_St_9_WATER_FILL_1) {
          s_5_St_9_WATER_FILL_2_1 = s_5_St_9_WATER_FILL_2;
          if (s_5_St_9_WATER_FILL_2_1) {
            s_5_St_9_WATER_FILL_3_1_1 = s_5_St_9_WATER_FILL_3;
          } else {
            s_5_St_9_WATER_FILL_3_1_0 = s_5_St_9_WATER_FILL_3;
          };
        } else {
          s_5_St_9_WATER_FILL_2_0 = s_5_St_9_WATER_FILL_2;
          if (s_5_St_9_WATER_FILL_2_0) {
            s_5_St_9_WATER_FILL_3_0_1 = s_5_St_9_WATER_FILL_3;
          } else {
            s_5_St_9_WATER_FILL_3_0_0 = s_5_St_9_WATER_FILL_3;
          };
        };
      };
      v_354 = v_348;
      v_355 = v_349;
      v_356 = v_350;
      v_362 = v_361;
    };
    s_5_1 = v_354;
    s_5_2 = v_355;
    s_5_3 = v_356;
    r_1 = v_362;
  };
  ck_24_1 = s_5_1;
  ck_24_2 = s_5_2;
  ck_24_3 = s_5_3;
  if (ck_24_1) {
    ck_24_2_1 = ck_24_2;
    if (ck_24_2_1) {
      ck_24_3_1_1 = ck_24_3;
      if (ck_24_3_1_1) {
        s1_2_St_9_OFF = 0;
        p1_2_St_9_OFF = 0;
        nr_1_St_9_OFF = false;
        ns_1_St_9_OFF_1 = true;
        ns_1_St_9_OFF_2 = true;
        ns_1_St_9_OFF_3 = true;
        v_300 = s1_2_St_9_OFF;
        v_306 = p1_2_St_9_OFF;
        v_330 = nr_1_St_9_OFF;
        v_312 = ns_1_St_9_OFF_1;
        v_313 = ns_1_St_9_OFF_2;
        v_314 = ns_1_St_9_OFF_3;
        if (ns_1_St_9_OFF_1) {
          ns_1_St_9_OFF_2_1 = ns_1_St_9_OFF_2;
          if (ns_1_St_9_OFF_2_1) {
            ns_1_St_9_OFF_3_1_1 = ns_1_St_9_OFF_3;
          } else {
            ns_1_St_9_OFF_3_1_0 = ns_1_St_9_OFF_3;
          };
        } else {
          ns_1_St_9_OFF_2_0 = ns_1_St_9_OFF_2;
          if (ns_1_St_9_OFF_2_0) {
            ns_1_St_9_OFF_3_0_1 = ns_1_St_9_OFF_3;
          } else {
            ns_1_St_9_OFF_3_0_0 = ns_1_St_9_OFF_3;
          };
        };
      } else {
        s1_2_St_9_RINSE = 4;
        v_300 = s1_2_St_9_RINSE;
        p1_2_St_9_RINSE = 200;
        v_306 = p1_2_St_9_RINSE;
        nr_1_St_9_RINSE = false;
        v_330 = nr_1_St_9_RINSE;
        ns_1_St_9_RINSE_1 = true;
        v_312 = ns_1_St_9_RINSE_1;
        ns_1_St_9_RINSE_2 = true;
        v_313 = ns_1_St_9_RINSE_2;
        ns_1_St_9_RINSE_3 = false;
        v_314 = ns_1_St_9_RINSE_3;
        if (ns_1_St_9_RINSE_1) {
          ns_1_St_9_RINSE_2_1 = ns_1_St_9_RINSE_2;
          if (ns_1_St_9_RINSE_2_1) {
            ns_1_St_9_RINSE_3_1_1 = ns_1_St_9_RINSE_3;
          } else {
            ns_1_St_9_RINSE_3_1_0 = ns_1_St_9_RINSE_3;
          };
        } else {
          ns_1_St_9_RINSE_2_0 = ns_1_St_9_RINSE_2;
          if (ns_1_St_9_RINSE_2_0) {
            ns_1_St_9_RINSE_3_0_1 = ns_1_St_9_RINSE_3;
          } else {
            ns_1_St_9_RINSE_3_0_0 = ns_1_St_9_RINSE_3;
          };
        };
      };
      v_302 = v_300;
      v_308 = v_306;
      v_324 = v_312;
      v_325 = v_313;
      v_326 = v_314;
      v_332 = v_330;
    } else {
      ck_24_3_1_0 = ck_24_3;
      if (ck_24_3_1_0) {
        v_301 = 0;
        v_307 = 0;
        v_331 = true;
        v_315 = true;
        v_316 = true;
        v_317 = true;
      } else {
        s1_2_St_9_SPIN = 5;
        v_301 = s1_2_St_9_SPIN;
        p1_2_St_9_SPIN = 800;
        v_307 = p1_2_St_9_SPIN;
        nr_1_St_9_SPIN = false;
        v_331 = nr_1_St_9_SPIN;
        ns_1_St_9_SPIN_1 = true;
        v_315 = ns_1_St_9_SPIN_1;
        ns_1_St_9_SPIN_2 = false;
        v_316 = ns_1_St_9_SPIN_2;
        ns_1_St_9_SPIN_3 = false;
        v_317 = ns_1_St_9_SPIN_3;
      };
      v_302 = v_301;
      v_308 = v_307;
      v_324 = v_315;
      v_325 = v_316;
      v_326 = v_317;
      v_332 = v_331;
      if (!(ck_24_3_1_0)) {
        if (ns_1_St_9_SPIN_1) {
          ns_1_St_9_SPIN_2_1 = ns_1_St_9_SPIN_2;
          if (ns_1_St_9_SPIN_2_1) {
            ns_1_St_9_SPIN_3_1_1 = ns_1_St_9_SPIN_3;
          } else {
            ns_1_St_9_SPIN_3_1_0 = ns_1_St_9_SPIN_3;
          };
        } else {
          ns_1_St_9_SPIN_2_0 = ns_1_St_9_SPIN_2;
          if (ns_1_St_9_SPIN_2_0) {
            ns_1_St_9_SPIN_3_0_1 = ns_1_St_9_SPIN_3;
          } else {
            ns_1_St_9_SPIN_3_0_0 = ns_1_St_9_SPIN_3;
          };
        };
      };
    };
    s1_2 = v_302;
    p1_2 = v_308;
    ns_1_1 = v_324;
    ns_1_2 = v_325;
    ns_1_3 = v_326;
    nr_1 = v_332;
  } else {
    ck_24_2_0 = ck_24_2;
    if (ck_24_2_0) {
      ck_24_3_0_1 = ck_24_3;
      if (ck_24_3_0_1) {
        s1_2_St_9_STANDBY = 2;
        p1_2_St_9_STANDBY = 0;
        nr_1_St_9_STANDBY = false;
        ns_1_St_9_STANDBY_1 = false;
        ns_1_St_9_STANDBY_2 = true;
        ns_1_St_9_STANDBY_3 = true;
        v_303 = s1_2_St_9_STANDBY;
        v_309 = p1_2_St_9_STANDBY;
        v_333 = nr_1_St_9_STANDBY;
        v_318 = ns_1_St_9_STANDBY_1;
        v_319 = ns_1_St_9_STANDBY_2;
        v_320 = ns_1_St_9_STANDBY_3;
      } else {
        s1_2_St_9_WASHING = 3;
        v_303 = s1_2_St_9_WASHING;
        p1_2_St_9_WASHING = 250;
        v_309 = p1_2_St_9_WASHING;
        nr_1_St_9_WASHING = false;
        v_333 = nr_1_St_9_WASHING;
        ns_1_St_9_WASHING_1 = false;
        v_318 = ns_1_St_9_WASHING_1;
        ns_1_St_9_WASHING_2 = true;
        v_319 = ns_1_St_9_WASHING_2;
        ns_1_St_9_WASHING_3 = false;
        v_320 = ns_1_St_9_WASHING_3;
      };
      v_305 = v_303;
      v_311 = v_309;
      v_327 = v_318;
      v_328 = v_319;
      v_329 = v_320;
      v_335 = v_333;
    } else {
      ck_24_3_0_0 = ck_24_3;
      if (ck_24_3_0_0) {
        v_304 = 0;
        v_310 = 0;
        v_334 = true;
        v_321 = true;
        v_322 = true;
        v_323 = true;
      } else {
        s1_2_St_9_WATER_FILL = 1;
        v_304 = s1_2_St_9_WATER_FILL;
        p1_2_St_9_WATER_FILL = 15;
        v_310 = p1_2_St_9_WATER_FILL;
        nr_1_St_9_WATER_FILL = false;
        v_334 = nr_1_St_9_WATER_FILL;
        ns_1_St_9_WATER_FILL_1 = false;
        v_321 = ns_1_St_9_WATER_FILL_1;
        ns_1_St_9_WATER_FILL_2 = false;
        v_322 = ns_1_St_9_WATER_FILL_2;
        ns_1_St_9_WATER_FILL_3 = false;
        v_323 = ns_1_St_9_WATER_FILL_3;
        if (ns_1_St_9_WATER_FILL_1) {
          ns_1_St_9_WATER_FILL_2_1 = ns_1_St_9_WATER_FILL_2;
          if (ns_1_St_9_WATER_FILL_2_1) {
            ns_1_St_9_WATER_FILL_3_1_1 = ns_1_St_9_WATER_FILL_3;
          } else {
            ns_1_St_9_WATER_FILL_3_1_0 = ns_1_St_9_WATER_FILL_3;
          };
        } else {
          ns_1_St_9_WATER_FILL_2_0 = ns_1_St_9_WATER_FILL_2;
          if (ns_1_St_9_WATER_FILL_2_0) {
            ns_1_St_9_WATER_FILL_3_0_1 = ns_1_St_9_WATER_FILL_3;
          } else {
            ns_1_St_9_WATER_FILL_3_0_0 = ns_1_St_9_WATER_FILL_3;
          };
        };
      };
      v_305 = v_304;
      v_311 = v_310;
      v_327 = v_321;
      v_328 = v_322;
      v_329 = v_323;
      v_335 = v_334;
    };
    s1_2 = v_305;
    p1_2 = v_311;
    ns_1_1 = v_327;
    ns_1_2 = v_328;
    ns_1_3 = v_329;
    nr_1 = v_335;
  };
  _out->wash_power = p1_2;
  _out->wash_state = s1_2;
  if (ns_1_1) {
    ns_1_2_1 = ns_1_2;
    if (ns_1_2_1) {
      ns_1_3_1_1 = ns_1_3;
    } else {
      ns_1_3_1_0 = ns_1_3;
    };
  } else {
    ns_1_2_0 = ns_1_2;
    if (ns_1_2_0) {
      ns_1_3_0_1 = ns_1_3;
    } else {
      ns_1_3_0_0 = ns_1_3;
    };
  };
  if (!(ck_24_1)) {
    if (ck_24_2_0) {
      if (ck_24_3_0_1) {
        if (ns_1_St_9_STANDBY_1) {
          ns_1_St_9_STANDBY_2_1 = ns_1_St_9_STANDBY_2;
          if (ns_1_St_9_STANDBY_2_1) {
            ns_1_St_9_STANDBY_3_1_1 = ns_1_St_9_STANDBY_3;
          } else {
            ns_1_St_9_STANDBY_3_1_0 = ns_1_St_9_STANDBY_3;
          };
        } else {
          ns_1_St_9_STANDBY_2_0 = ns_1_St_9_STANDBY_2;
          if (ns_1_St_9_STANDBY_2_0) {
            ns_1_St_9_STANDBY_3_0_1 = ns_1_St_9_STANDBY_3;
          } else {
            ns_1_St_9_STANDBY_3_0_0 = ns_1_St_9_STANDBY_3;
          };
        };
      } else {
        if (ns_1_St_9_WASHING_1) {
          ns_1_St_9_WASHING_2_1 = ns_1_St_9_WASHING_2;
          if (ns_1_St_9_WASHING_2_1) {
            ns_1_St_9_WASHING_3_1_1 = ns_1_St_9_WASHING_3;
          } else {
            ns_1_St_9_WASHING_3_1_0 = ns_1_St_9_WASHING_3;
          };
        } else {
          ns_1_St_9_WASHING_2_0 = ns_1_St_9_WASHING_2;
          if (ns_1_St_9_WASHING_2_0) {
            ns_1_St_9_WASHING_3_0_1 = ns_1_St_9_WASHING_3;
          } else {
            ns_1_St_9_WASHING_3_0_0 = ns_1_St_9_WASHING_3;
          };
        };
      };
    };
  };
  if (s_5_1) {
    s_5_2_1 = s_5_2;
    if (s_5_2_1) {
      s_5_3_1_1 = s_5_3;
    } else {
      s_5_3_1_0 = s_5_3;
    };
  } else {
    s_5_2_0 = s_5_2;
    if (s_5_2_0) {
      s_5_3_0_1 = s_5_3;
    } else {
      s_5_3_0_0 = s_5_3;
    };
  };
  if (!(ck_23_1)) {
    if (ck_23_2_0) {
      if (ck_23_3_0_1) {
        if (s_5_St_9_STANDBY_1) {
          s_5_St_9_STANDBY_2_1 = s_5_St_9_STANDBY_2;
          if (s_5_St_9_STANDBY_2_1) {
            s_5_St_9_STANDBY_3_1_1 = s_5_St_9_STANDBY_3;
          } else {
            s_5_St_9_STANDBY_3_1_0 = s_5_St_9_STANDBY_3;
          };
        } else {
          s_5_St_9_STANDBY_2_0 = s_5_St_9_STANDBY_2;
          if (s_5_St_9_STANDBY_2_0) {
            s_5_St_9_STANDBY_3_0_1 = s_5_St_9_STANDBY_3;
          } else {
            s_5_St_9_STANDBY_3_0_0 = s_5_St_9_STANDBY_3;
          };
        };
      } else {
        if (s_5_St_9_WASHING_1) {
          s_5_St_9_WASHING_2_1 = s_5_St_9_WASHING_2;
          if (s_5_St_9_WASHING_2_1) {
            s_5_St_9_WASHING_3_1_1 = s_5_St_9_WASHING_3;
          } else {
            s_5_St_9_WASHING_3_1_0 = s_5_St_9_WASHING_3;
          };
        } else {
          s_5_St_9_WASHING_2_0 = s_5_St_9_WASHING_2;
          if (s_5_St_9_WASHING_2_0) {
            s_5_St_9_WASHING_3_0_1 = s_5_St_9_WASHING_3;
          } else {
            s_5_St_9_WASHING_3_0_0 = s_5_St_9_WASHING_3;
          };
        };
      };
    };
  };
  if (ck_21_1) {
    ck_21_2_1 = ck_21_2;
    if (ck_21_2_1) {
      ck_21_3_1_1 = ck_21_3;
      if (ck_21_3_1_1) {
        if (temp_ok) {
          v_109 = true;
        } else {
          v_109 = self->pnr_2;
        };
        if (f) {
          r_2_St_10_HEAT = true;
        } else {
          r_2_St_10_HEAT = v_109;
        };
        if (temp_ok) {
          v_108_1 = true;
        } else {
          v_108_1 = true;
        };
        if (f) {
          s_6_St_10_HEAT_1 = true;
        } else {
          s_6_St_10_HEAT_1 = v_108_1;
        };
        if (temp_ok) {
          v_108_2 = true;
        } else {
          v_108_2 = true;
        };
        if (f) {
          s_6_St_10_HEAT_2 = false;
        } else {
          s_6_St_10_HEAT_2 = v_108_2;
        };
        if (temp_ok) {
          v_108_3 = false;
        } else {
          v_108_3 = true;
        };
        if (f) {
          s_6_St_10_HEAT_3 = false;
        } else {
          s_6_St_10_HEAT_3 = v_108_3;
        };
        v_411 = r_2_St_10_HEAT;
        v_396 = s_6_St_10_HEAT_1;
        v_397 = s_6_St_10_HEAT_2;
        v_398 = s_6_St_10_HEAT_3;
      } else {
        if (f) {
          v_107 = true;
          v_106_1 = true;
          v_106_2 = false;
          v_106_3 = false;
        } else {
          v_107 = self->pnr_2;
          v_106_1 = true;
          v_106_2 = true;
          v_106_3 = false;
        };
        v_105 = (cold&&c_2);
        if (v_105) {
          r_2_St_10_MAINTAIN = true;
        } else {
          r_2_St_10_MAINTAIN = v_107;
        };
        v_411 = r_2_St_10_MAINTAIN;
        if (v_105) {
          s_6_St_10_MAINTAIN_1 = false;
        } else {
          s_6_St_10_MAINTAIN_1 = v_106_1;
        };
        v_396 = s_6_St_10_MAINTAIN_1;
        if (v_105) {
          s_6_St_10_MAINTAIN_2 = false;
        } else {
          s_6_St_10_MAINTAIN_2 = v_106_2;
        };
        v_397 = s_6_St_10_MAINTAIN_2;
        if (v_105) {
          s_6_St_10_MAINTAIN_3 = true;
        } else {
          s_6_St_10_MAINTAIN_3 = v_106_3;
        };
        v_398 = s_6_St_10_MAINTAIN_3;
      };
      v_405 = v_396;
      v_406 = v_397;
      v_407 = v_398;
      v_413 = v_411;
      if (ck_21_3_1_1) {
        if (v_108_1) {
          v_108_2_1 = v_108_2;
          if (v_108_2_1) {
            v_108_3_1_1 = v_108_3;
          } else {
            v_108_3_1_0 = v_108_3;
          };
        } else {
          v_108_2_0 = v_108_2;
          if (v_108_2_0) {
            v_108_3_0_1 = v_108_3;
          } else {
            v_108_3_0_0 = v_108_3;
          };
        };
        if (s_6_St_10_HEAT_1) {
          s_6_St_10_HEAT_2_1 = s_6_St_10_HEAT_2;
          if (s_6_St_10_HEAT_2_1) {
            s_6_St_10_HEAT_3_1_1 = s_6_St_10_HEAT_3;
          } else {
            s_6_St_10_HEAT_3_1_0 = s_6_St_10_HEAT_3;
          };
        } else {
          s_6_St_10_HEAT_2_0 = s_6_St_10_HEAT_2;
          if (s_6_St_10_HEAT_2_0) {
            s_6_St_10_HEAT_3_0_1 = s_6_St_10_HEAT_3;
          } else {
            s_6_St_10_HEAT_3_0_0 = s_6_St_10_HEAT_3;
          };
        };
      } else {
        if (v_106_1) {
          v_106_2_1 = v_106_2;
          if (v_106_2_1) {
            v_106_3_1_1 = v_106_3;
          } else {
            v_106_3_1_0 = v_106_3;
          };
        } else {
          v_106_2_0 = v_106_2;
          if (v_106_2_0) {
            v_106_3_0_1 = v_106_3;
          } else {
            v_106_3_0_0 = v_106_3;
          };
        };
        if (s_6_St_10_MAINTAIN_1) {
          s_6_St_10_MAINTAIN_2_1 = s_6_St_10_MAINTAIN_2;
          if (s_6_St_10_MAINTAIN_2_1) {
            s_6_St_10_MAINTAIN_3_1_1 = s_6_St_10_MAINTAIN_3;
          } else {
            s_6_St_10_MAINTAIN_3_1_0 = s_6_St_10_MAINTAIN_3;
          };
        } else {
          s_6_St_10_MAINTAIN_2_0 = s_6_St_10_MAINTAIN_2;
          if (s_6_St_10_MAINTAIN_2_0) {
            s_6_St_10_MAINTAIN_3_0_1 = s_6_St_10_MAINTAIN_3;
          } else {
            s_6_St_10_MAINTAIN_3_0_0 = s_6_St_10_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_21_3_1_0 = ck_21_3;
      if (ck_21_3_1_0) {
        v_412 = true;
        v_399 = true;
        v_400 = true;
        v_401 = true;
      } else {
        v_112 = (s&&c_2);
        if (v_112) {
          v_114 = true;
          v_113_1 = true;
          v_113_2 = true;
          v_113_3 = true;
        } else {
          v_114 = self->pnr_2;
          v_113_1 = true;
          v_113_2 = false;
          v_113_3 = false;
        };
        v_110 = !(c_2);
        v_111 = (s&&v_110);
        if (v_111) {
          r_2_St_10_OFF = true;
        } else {
          r_2_St_10_OFF = v_114;
        };
        v_412 = r_2_St_10_OFF;
        if (v_111) {
          s_6_St_10_OFF_1 = false;
        } else {
          s_6_St_10_OFF_1 = v_113_1;
        };
        v_399 = s_6_St_10_OFF_1;
        if (v_111) {
          s_6_St_10_OFF_2 = false;
        } else {
          s_6_St_10_OFF_2 = v_113_2;
        };
        v_400 = s_6_St_10_OFF_2;
        if (v_111) {
          s_6_St_10_OFF_3 = false;
        } else {
          s_6_St_10_OFF_3 = v_113_3;
        };
        v_401 = s_6_St_10_OFF_3;
        if (v_113_1) {
          v_113_2_1 = v_113_2;
          if (v_113_2_1) {
            v_113_3_1_1 = v_113_3;
          } else {
            v_113_3_1_0 = v_113_3;
          };
        } else {
          v_113_2_0 = v_113_2;
          if (v_113_2_0) {
            v_113_3_0_1 = v_113_3;
          } else {
            v_113_3_0_0 = v_113_3;
          };
        };
        if (s_6_St_10_OFF_1) {
          s_6_St_10_OFF_2_1 = s_6_St_10_OFF_2;
          if (s_6_St_10_OFF_2_1) {
            s_6_St_10_OFF_3_1_1 = s_6_St_10_OFF_3;
          } else {
            s_6_St_10_OFF_3_1_0 = s_6_St_10_OFF_3;
          };
        } else {
          s_6_St_10_OFF_2_0 = s_6_St_10_OFF_2;
          if (s_6_St_10_OFF_2_0) {
            s_6_St_10_OFF_3_0_1 = s_6_St_10_OFF_3;
          } else {
            s_6_St_10_OFF_3_0_0 = s_6_St_10_OFF_3;
          };
        };
      };
      v_405 = v_399;
      v_406 = v_400;
      v_407 = v_401;
      v_413 = v_412;
    };
    s_6_1 = v_405;
    s_6_2 = v_406;
    s_6_3 = v_407;
    r_2 = v_413;
  } else {
    ck_21_2_0 = ck_21_2;
    if (ck_21_2_0) {
      ck_21_3_0_1 = ck_21_3;
      v_408 = true;
      v_409 = true;
      v_410 = true;
      v_415 = true;
    } else {
      ck_21_3_0_0 = ck_21_3;
      if (ck_21_3_0_0) {
        if (temp_ok) {
          r_2_St_10_REHEAT = true;
        } else {
          r_2_St_10_REHEAT = self->pnr_2;
        };
        v_414 = r_2_St_10_REHEAT;
        if (temp_ok) {
          s_6_St_10_REHEAT_1 = true;
        } else {
          s_6_St_10_REHEAT_1 = false;
        };
        v_402 = s_6_St_10_REHEAT_1;
        if (temp_ok) {
          s_6_St_10_REHEAT_2 = true;
        } else {
          s_6_St_10_REHEAT_2 = false;
        };
        v_403 = s_6_St_10_REHEAT_2;
        if (temp_ok) {
          s_6_St_10_REHEAT_3 = false;
        } else {
          s_6_St_10_REHEAT_3 = true;
        };
        v_404 = s_6_St_10_REHEAT_3;
      } else {
        if (c_2) {
          r_2_St_10_STANDBY = true;
          s_6_St_10_STANDBY_1 = true;
          s_6_St_10_STANDBY_2 = true;
          s_6_St_10_STANDBY_3 = true;
        } else {
          r_2_St_10_STANDBY = self->pnr_2;
          s_6_St_10_STANDBY_1 = false;
          s_6_St_10_STANDBY_2 = false;
          s_6_St_10_STANDBY_3 = false;
        };
        v_414 = r_2_St_10_STANDBY;
        v_402 = s_6_St_10_STANDBY_1;
        v_403 = s_6_St_10_STANDBY_2;
        v_404 = s_6_St_10_STANDBY_3;
      };
      v_408 = v_402;
      v_409 = v_403;
      v_410 = v_404;
      v_415 = v_414;
    };
    s_6_1 = v_408;
    s_6_2 = v_409;
    s_6_3 = v_410;
    r_2 = v_415;
  };
  ck_22_1 = s_6_1;
  ck_22_2 = s_6_2;
  ck_22_3 = s_6_3;
  if (ck_22_1) {
    ck_22_2_1 = ck_22_2;
    if (ck_22_2_1) {
      ck_22_3_1_1 = ck_22_3;
      if (ck_22_3_1_1) {
        s1_1_St_10_HEAT = 2;
        p1_1_St_10_HEAT = 1500;
        nr_2_St_10_HEAT = false;
        ns_2_St_10_HEAT_1 = true;
        ns_2_St_10_HEAT_2 = true;
        ns_2_St_10_HEAT_3 = true;
        v_363 = s1_1_St_10_HEAT;
        v_368 = p1_1_St_10_HEAT;
        v_388 = nr_2_St_10_HEAT;
        v_373 = ns_2_St_10_HEAT_1;
        v_374 = ns_2_St_10_HEAT_2;
        v_375 = ns_2_St_10_HEAT_3;
      } else {
        s1_1_St_10_MAINTAIN = 3;
        v_363 = s1_1_St_10_MAINTAIN;
        p1_1_St_10_MAINTAIN = 300;
        v_368 = p1_1_St_10_MAINTAIN;
        nr_2_St_10_MAINTAIN = false;
        v_388 = nr_2_St_10_MAINTAIN;
        ns_2_St_10_MAINTAIN_1 = true;
        v_373 = ns_2_St_10_MAINTAIN_1;
        ns_2_St_10_MAINTAIN_2 = true;
        v_374 = ns_2_St_10_MAINTAIN_2;
        ns_2_St_10_MAINTAIN_3 = false;
        v_375 = ns_2_St_10_MAINTAIN_3;
      };
      v_365 = v_363;
      v_370 = v_368;
      v_382 = v_373;
      v_383 = v_374;
      v_384 = v_375;
      v_390 = v_388;
      if (ck_22_3_1_1) {
        if (ns_2_St_10_HEAT_1) {
          ns_2_St_10_HEAT_2_1 = ns_2_St_10_HEAT_2;
          if (ns_2_St_10_HEAT_2_1) {
            ns_2_St_10_HEAT_3_1_1 = ns_2_St_10_HEAT_3;
          } else {
            ns_2_St_10_HEAT_3_1_0 = ns_2_St_10_HEAT_3;
          };
        } else {
          ns_2_St_10_HEAT_2_0 = ns_2_St_10_HEAT_2;
          if (ns_2_St_10_HEAT_2_0) {
            ns_2_St_10_HEAT_3_0_1 = ns_2_St_10_HEAT_3;
          } else {
            ns_2_St_10_HEAT_3_0_0 = ns_2_St_10_HEAT_3;
          };
        };
      } else {
        if (ns_2_St_10_MAINTAIN_1) {
          ns_2_St_10_MAINTAIN_2_1 = ns_2_St_10_MAINTAIN_2;
          if (ns_2_St_10_MAINTAIN_2_1) {
            ns_2_St_10_MAINTAIN_3_1_1 = ns_2_St_10_MAINTAIN_3;
          } else {
            ns_2_St_10_MAINTAIN_3_1_0 = ns_2_St_10_MAINTAIN_3;
          };
        } else {
          ns_2_St_10_MAINTAIN_2_0 = ns_2_St_10_MAINTAIN_2;
          if (ns_2_St_10_MAINTAIN_2_0) {
            ns_2_St_10_MAINTAIN_3_0_1 = ns_2_St_10_MAINTAIN_3;
          } else {
            ns_2_St_10_MAINTAIN_3_0_0 = ns_2_St_10_MAINTAIN_3;
          };
        };
      };
    } else {
      ck_22_3_1_0 = ck_22_3;
      if (ck_22_3_1_0) {
        v_364 = 0;
        v_369 = 0;
        v_389 = true;
        v_376 = true;
        v_377 = true;
        v_378 = true;
      } else {
        s1_1_St_10_OFF = 0;
        v_364 = s1_1_St_10_OFF;
        p1_1_St_10_OFF = 0;
        v_369 = p1_1_St_10_OFF;
        nr_2_St_10_OFF = false;
        v_389 = nr_2_St_10_OFF;
        ns_2_St_10_OFF_1 = true;
        v_376 = ns_2_St_10_OFF_1;
        ns_2_St_10_OFF_2 = false;
        v_377 = ns_2_St_10_OFF_2;
        ns_2_St_10_OFF_3 = false;
        v_378 = ns_2_St_10_OFF_3;
        if (ns_2_St_10_OFF_1) {
          ns_2_St_10_OFF_2_1 = ns_2_St_10_OFF_2;
          if (ns_2_St_10_OFF_2_1) {
            ns_2_St_10_OFF_3_1_1 = ns_2_St_10_OFF_3;
          } else {
            ns_2_St_10_OFF_3_1_0 = ns_2_St_10_OFF_3;
          };
        } else {
          ns_2_St_10_OFF_2_0 = ns_2_St_10_OFF_2;
          if (ns_2_St_10_OFF_2_0) {
            ns_2_St_10_OFF_3_0_1 = ns_2_St_10_OFF_3;
          } else {
            ns_2_St_10_OFF_3_0_0 = ns_2_St_10_OFF_3;
          };
        };
      };
      v_365 = v_364;
      v_370 = v_369;
      v_382 = v_376;
      v_383 = v_377;
      v_384 = v_378;
      v_390 = v_389;
    };
    s1_1 = v_365;
    p1_1 = v_370;
    ns_2_1 = v_382;
    ns_2_2 = v_383;
    ns_2_3 = v_384;
    nr_2 = v_390;
  } else {
    ck_22_2_0 = ck_22_2;
    if (ck_22_2_0) {
      ck_22_3_0_1 = ck_22_3;
      v_367 = 0;
      v_372 = 0;
      v_385 = true;
      v_386 = true;
      v_387 = true;
      v_392 = true;
    } else {
      ck_22_3_0_0 = ck_22_3;
      if (ck_22_3_0_0) {
        s1_1_St_10_REHEAT = 4;
        v_366 = s1_1_St_10_REHEAT;
        p1_1_St_10_REHEAT = 1000;
        v_371 = p1_1_St_10_REHEAT;
        nr_2_St_10_REHEAT = false;
        v_391 = nr_2_St_10_REHEAT;
        ns_2_St_10_REHEAT_1 = false;
        v_379 = ns_2_St_10_REHEAT_1;
        ns_2_St_10_REHEAT_2 = false;
        v_380 = ns_2_St_10_REHEAT_2;
        ns_2_St_10_REHEAT_3 = true;
        v_381 = ns_2_St_10_REHEAT_3;
      } else {
        s1_1_St_10_STANDBY = 1;
        p1_1_St_10_STANDBY = 0;
        nr_2_St_10_STANDBY = false;
        ns_2_St_10_STANDBY_1 = false;
        ns_2_St_10_STANDBY_2 = false;
        ns_2_St_10_STANDBY_3 = false;
        v_366 = s1_1_St_10_STANDBY;
        v_371 = p1_1_St_10_STANDBY;
        v_391 = nr_2_St_10_STANDBY;
        v_379 = ns_2_St_10_STANDBY_1;
        v_380 = ns_2_St_10_STANDBY_2;
        v_381 = ns_2_St_10_STANDBY_3;
      };
      v_367 = v_366;
      v_372 = v_371;
      v_385 = v_379;
      v_386 = v_380;
      v_387 = v_381;
      v_392 = v_391;
    };
    s1_1 = v_367;
    p1_1 = v_372;
    ns_2_1 = v_385;
    ns_2_2 = v_386;
    ns_2_3 = v_387;
    nr_2 = v_392;
  };
  _out->oven_power = p1_1;
  _out->oven_state = s1_1;
  if (ns_2_1) {
    ns_2_2_1 = ns_2_2;
    if (ns_2_2_1) {
      ns_2_3_1_1 = ns_2_3;
    } else {
      ns_2_3_1_0 = ns_2_3;
    };
  } else {
    ns_2_2_0 = ns_2_2;
    if (ns_2_2_0) {
      ns_2_3_0_1 = ns_2_3;
    } else {
      ns_2_3_0_0 = ns_2_3;
    };
  };
  if (!(ck_22_1)) {
    if (!(ck_22_2_0)) {
      if (ck_22_3_0_0) {
        if (ns_2_St_10_REHEAT_1) {
          ns_2_St_10_REHEAT_2_1 = ns_2_St_10_REHEAT_2;
          if (ns_2_St_10_REHEAT_2_1) {
            ns_2_St_10_REHEAT_3_1_1 = ns_2_St_10_REHEAT_3;
          } else {
            ns_2_St_10_REHEAT_3_1_0 = ns_2_St_10_REHEAT_3;
          };
        } else {
          ns_2_St_10_REHEAT_2_0 = ns_2_St_10_REHEAT_2;
          if (ns_2_St_10_REHEAT_2_0) {
            ns_2_St_10_REHEAT_3_0_1 = ns_2_St_10_REHEAT_3;
          } else {
            ns_2_St_10_REHEAT_3_0_0 = ns_2_St_10_REHEAT_3;
          };
        };
      } else {
        if (ns_2_St_10_STANDBY_1) {
          ns_2_St_10_STANDBY_2_1 = ns_2_St_10_STANDBY_2;
          if (ns_2_St_10_STANDBY_2_1) {
            ns_2_St_10_STANDBY_3_1_1 = ns_2_St_10_STANDBY_3;
          } else {
            ns_2_St_10_STANDBY_3_1_0 = ns_2_St_10_STANDBY_3;
          };
        } else {
          ns_2_St_10_STANDBY_2_0 = ns_2_St_10_STANDBY_2;
          if (ns_2_St_10_STANDBY_2_0) {
            ns_2_St_10_STANDBY_3_0_1 = ns_2_St_10_STANDBY_3;
          } else {
            ns_2_St_10_STANDBY_3_0_0 = ns_2_St_10_STANDBY_3;
          };
        };
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
    if (s_6_2_1) {
      s_6_3_1_1 = s_6_3;
    } else {
      s_6_3_1_0 = s_6_3;
    };
  } else {
    s_6_2_0 = s_6_2;
    if (s_6_2_0) {
      s_6_3_0_1 = s_6_3;
    } else {
      s_6_3_0_0 = s_6_3;
    };
  };
  if (!(ck_21_1)) {
    if (!(ck_21_2_0)) {
      if (ck_21_3_0_0) {
        if (s_6_St_10_REHEAT_1) {
          s_6_St_10_REHEAT_2_1 = s_6_St_10_REHEAT_2;
          if (s_6_St_10_REHEAT_2_1) {
            s_6_St_10_REHEAT_3_1_1 = s_6_St_10_REHEAT_3;
          } else {
            s_6_St_10_REHEAT_3_1_0 = s_6_St_10_REHEAT_3;
          };
        } else {
          s_6_St_10_REHEAT_2_0 = s_6_St_10_REHEAT_2;
          if (s_6_St_10_REHEAT_2_0) {
            s_6_St_10_REHEAT_3_0_1 = s_6_St_10_REHEAT_3;
          } else {
            s_6_St_10_REHEAT_3_0_0 = s_6_St_10_REHEAT_3;
          };
        };
      } else {
        if (s_6_St_10_STANDBY_1) {
          s_6_St_10_STANDBY_2_1 = s_6_St_10_STANDBY_2;
          if (s_6_St_10_STANDBY_2_1) {
            s_6_St_10_STANDBY_3_1_1 = s_6_St_10_STANDBY_3;
          } else {
            s_6_St_10_STANDBY_3_1_0 = s_6_St_10_STANDBY_3;
          };
        } else {
          s_6_St_10_STANDBY_2_0 = s_6_St_10_STANDBY_2;
          if (s_6_St_10_STANDBY_2_0) {
            s_6_St_10_STANDBY_3_0_1 = s_6_St_10_STANDBY_3;
          } else {
            s_6_St_10_STANDBY_3_0_0 = s_6_St_10_STANDBY_3;
          };
        };
      };
    };
  };
  if (ck_19_1) {
    ck_19_2_1 = ck_19_2;
    if (ck_19_2_1) {
      v_91 = !(c1_2);
      v_92 = (d1||v_91);
      if (v_92) {
        v_94 = true;
        v_93_1 = true;
        v_93_2 = false;
      } else {
        v_94 = self->pnr_3;
        v_93_1 = true;
        v_93_2 = true;
      };
      v_90 = (u2&&c2_2);
      if (v_90) {
        r_3_St_11_ECO = true;
      } else {
        r_3_St_11_ECO = v_94;
      };
      v_432 = r_3_St_11_ECO;
      if (v_90) {
        s_7_St_11_ECO_1 = false;
      } else {
        s_7_St_11_ECO_1 = v_93_1;
      };
      v_428 = s_7_St_11_ECO_1;
      if (v_90) {
        s_7_St_11_ECO_2 = true;
      } else {
        s_7_St_11_ECO_2 = v_93_2;
      };
      v_429 = s_7_St_11_ECO_2;
      if (v_93_1) {
        v_93_2_1 = v_93_2;
      } else {
        v_93_2_0 = v_93_2;
      };
      if (s_7_St_11_ECO_1) {
        s_7_St_11_ECO_2_1 = s_7_St_11_ECO_2;
      } else {
        s_7_St_11_ECO_2_0 = s_7_St_11_ECO_2;
      };
    } else {
      v_98 = (u2&&c2_2);
      if (v_98) {
        v_100 = true;
        v_99_1 = false;
        v_99_2 = true;
      } else {
        v_100 = self->pnr_3;
        v_99_1 = true;
        v_99_2 = false;
      };
      v_96 = !(c3);
      v_97 = (d1||v_96);
      if (v_97) {
        v_102 = true;
        v_101_1 = false;
        v_101_2 = false;
      } else {
        v_102 = v_100;
        v_101_1 = v_99_1;
        v_101_2 = v_99_2;
      };
      v_95 = (u1&&c1_2);
      if (v_95) {
        r_3_St_11_FROST = true;
        s_7_St_11_FROST_1 = true;
        s_7_St_11_FROST_2 = true;
      } else {
        r_3_St_11_FROST = v_102;
        s_7_St_11_FROST_1 = v_101_1;
        s_7_St_11_FROST_2 = v_101_2;
      };
      v_432 = r_3_St_11_FROST;
      v_428 = s_7_St_11_FROST_1;
      v_429 = s_7_St_11_FROST_2;
      if (v_99_1) {
        v_99_2_1 = v_99_2;
      } else {
        v_99_2_0 = v_99_2;
      };
      if (v_101_1) {
        v_101_2_1 = v_101_2;
      } else {
        v_101_2_0 = v_101_2;
      };
      if (s_7_St_11_FROST_1) {
        s_7_St_11_FROST_2_1 = s_7_St_11_FROST_2;
      } else {
        s_7_St_11_FROST_2_0 = s_7_St_11_FROST_2;
      };
    };
    s_7_1 = v_428;
    s_7_2 = v_429;
    r_3 = v_432;
  } else {
    ck_19_2_0 = ck_19_2;
    if (ck_19_2_0) {
      v_86 = !(c1_2);
      v_87 = (d1||v_86);
      if (v_87) {
        v_89 = true;
        v_88_1 = true;
        v_88_2 = true;
      } else {
        v_89 = self->pnr_3;
        v_88_1 = false;
        v_88_2 = true;
      };
      v_84 = !(c2_2);
      v_85 = (d2||v_84);
      if (v_85) {
        r_3_St_11_HIGH = true;
      } else {
        r_3_St_11_HIGH = v_89;
      };
      v_433 = r_3_St_11_HIGH;
      if (v_85) {
        s_7_St_11_HIGH_1 = true;
      } else {
        s_7_St_11_HIGH_1 = v_88_1;
      };
      v_430 = s_7_St_11_HIGH_1;
      if (v_85) {
        s_7_St_11_HIGH_2 = false;
      } else {
        s_7_St_11_HIGH_2 = v_88_2;
      };
      v_431 = s_7_St_11_HIGH_2;
    } else {
      v_103 = !(c1_2);
      v_104 = (u1||v_103);
      if (v_104) {
        r_3_St_11_OFF = true;
        s_7_St_11_OFF_1 = true;
        s_7_St_11_OFF_2 = false;
      } else {
        r_3_St_11_OFF = self->pnr_3;
        s_7_St_11_OFF_1 = false;
        s_7_St_11_OFF_2 = false;
      };
      v_433 = r_3_St_11_OFF;
      v_430 = s_7_St_11_OFF_1;
      v_431 = s_7_St_11_OFF_2;
    };
    s_7_1 = v_430;
    s_7_2 = v_431;
    r_3 = v_433;
  };
  ck_20_1 = s_7_1;
  ck_20_2 = s_7_2;
  if (ck_20_1) {
    ck_20_2_1 = ck_20_2;
    if (ck_20_2_1) {
      s1_St_11_ECO = 2;
      v_416 = s1_St_11_ECO;
      p1_St_11_ECO = 1500;
      v_418 = p1_St_11_ECO;
      nr_3_St_11_ECO = false;
      v_424 = nr_3_St_11_ECO;
      ns_3_St_11_ECO_1 = true;
      v_420 = ns_3_St_11_ECO_1;
      ns_3_St_11_ECO_2 = true;
      v_421 = ns_3_St_11_ECO_2;
      if (ns_3_St_11_ECO_1) {
        ns_3_St_11_ECO_2_1 = ns_3_St_11_ECO_2;
      } else {
        ns_3_St_11_ECO_2_0 = ns_3_St_11_ECO_2;
      };
    } else {
      s1_St_11_FROST = 1;
      p1_St_11_FROST = 300;
      nr_3_St_11_FROST = false;
      ns_3_St_11_FROST_1 = true;
      ns_3_St_11_FROST_2 = false;
      v_416 = s1_St_11_FROST;
      v_418 = p1_St_11_FROST;
      v_424 = nr_3_St_11_FROST;
      v_420 = ns_3_St_11_FROST_1;
      v_421 = ns_3_St_11_FROST_2;
      if (ns_3_St_11_FROST_1) {
        ns_3_St_11_FROST_2_1 = ns_3_St_11_FROST_2;
      } else {
        ns_3_St_11_FROST_2_0 = ns_3_St_11_FROST_2;
      };
    };
    s1 = v_416;
    p1 = v_418;
    ns_3_1 = v_420;
    ns_3_2 = v_421;
    nr_3 = v_424;
  } else {
    ck_20_2_0 = ck_20_2;
    if (ck_20_2_0) {
      s1_St_11_HIGH = 3;
      v_417 = s1_St_11_HIGH;
      p1_St_11_HIGH = 2000;
      v_419 = p1_St_11_HIGH;
      nr_3_St_11_HIGH = false;
      v_425 = nr_3_St_11_HIGH;
      ns_3_St_11_HIGH_1 = false;
      v_422 = ns_3_St_11_HIGH_1;
      ns_3_St_11_HIGH_2 = true;
      v_423 = ns_3_St_11_HIGH_2;
    } else {
      s1_St_11_OFF = 0;
      p1_St_11_OFF = 0;
      nr_3_St_11_OFF = false;
      ns_3_St_11_OFF_1 = false;
      ns_3_St_11_OFF_2 = false;
      v_417 = s1_St_11_OFF;
      v_419 = p1_St_11_OFF;
      v_425 = nr_3_St_11_OFF;
      v_422 = ns_3_St_11_OFF_1;
      v_423 = ns_3_St_11_OFF_2;
    };
    s1 = v_417;
    p1 = v_419;
    ns_3_1 = v_422;
    ns_3_2 = v_423;
    nr_3 = v_425;
  };
  _out->rad_power = p1;
  v = (_out->rad_power+_out->wash_power);
  total_power = (v+_out->oven_power);
  _out->rad_state = s1;
  v_52 = (_out->rad_state<=1);
  v_56 = (_out->rad_state<=1);
  if (ck_1) {
    if (ck_2_1) {
      rule5_Comfort = (total_power<=7000);
      v_281 = rule5_Comfort;
    } else {
      rule5_Eco = (total_power<=5000);
      v_281 = rule5_Eco;
    };
    rule5 = v_281;
  } else {
    if (ck_2_0) {
      v_280 = true;
    } else {
      rule5_Minimal = (total_power<=3000);
      v_280 = rule5_Minimal;
    };
    rule5 = v_280;
  };
  if (ns_3_1) {
    ns_3_2_1 = ns_3_2;
  } else {
    ns_3_2_0 = ns_3_2;
  };
  if (!(ck_20_1)) {
    if (ck_20_2_0) {
      if (ns_3_St_11_HIGH_1) {
        ns_3_St_11_HIGH_2_1 = ns_3_St_11_HIGH_2;
      } else {
        ns_3_St_11_HIGH_2_0 = ns_3_St_11_HIGH_2;
      };
    } else {
      if (ns_3_St_11_OFF_1) {
        ns_3_St_11_OFF_2_1 = ns_3_St_11_OFF_2;
      } else {
        ns_3_St_11_OFF_2_0 = ns_3_St_11_OFF_2;
      };
    };
  };
  if (s_7_1) {
    s_7_2_1 = s_7_2;
  } else {
    s_7_2_0 = s_7_2;
  };
  if (!(ck_19_1)) {
    if (ck_19_2_0) {
      if (v_88_1) {
        v_88_2_1 = v_88_2;
      } else {
        v_88_2_0 = v_88_2;
      };
      if (s_7_St_11_HIGH_1) {
        s_7_St_11_HIGH_2_1 = s_7_St_11_HIGH_2;
      } else {
        s_7_St_11_HIGH_2_0 = s_7_St_11_HIGH_2;
      };
    } else {
      if (s_7_St_11_OFF_1) {
        s_7_St_11_OFF_2_1 = s_7_St_11_OFF_2;
      } else {
        s_7_St_11_OFF_2_0 = s_7_St_11_OFF_2;
      };
    };
  };
  if (self->ck_17_1) {
    v_82 = !(c2_1);
    v_81 = (turn_on_1&&c1_1);
    v_83 = (v_81||v_82);
    if (v_83) {
      r_4_St_12_OFF = true;
      s_8_St_12_OFF_1 = false;
    } else {
      r_4_St_12_OFF = self->pnr_4;
      s_8_St_12_OFF_1 = true;
    };
    r_4 = r_4_St_12_OFF;
    s_8_1 = s_8_St_12_OFF_1;
  } else {
    v_79 = !(c1_1);
    v_78 = (turn_on_1&&c2_1);
    v_80 = (v_78||v_79);
    if (v_80) {
      r_4_St_12_ON = true;
    } else {
      r_4_St_12_ON = self->pnr_4;
    };
    r_4 = r_4_St_12_ON;
    if (v_80) {
      s_8_St_12_ON_1 = true;
    } else {
      s_8_St_12_ON_1 = false;
    };
    s_8_1 = s_8_St_12_ON_1;
  };
  ck_18_1 = s_8_1;
  if (ck_18_1) {
    lamp_on_2_St_12_OFF = false;
    nr_4_St_12_OFF = false;
    ns_4_St_12_OFF_1 = true;
    lamp_on_2 = lamp_on_2_St_12_OFF;
    nr_4 = nr_4_St_12_OFF;
    ns_4_1 = ns_4_St_12_OFF_1;
  } else {
    lamp_on_2_St_12_ON = true;
    lamp_on_2 = lamp_on_2_St_12_ON;
    nr_4_St_12_ON = false;
    nr_4 = nr_4_St_12_ON;
    ns_4_St_12_ON_1 = false;
    ns_4_1 = ns_4_St_12_ON_1;
  };
  _out->tv_on = lamp_on_2;
  if (self->ck_15_1) {
    v_76 = !(c2);
    v_75 = (turn_on&&c1);
    v_77 = (v_75||v_76);
    if (v_77) {
      r_5_St_13_OFF = true;
      s_9_St_13_OFF_1 = false;
    } else {
      r_5_St_13_OFF = self->pnr_5;
      s_9_St_13_OFF_1 = true;
    };
    r_5 = r_5_St_13_OFF;
    s_9_1 = s_9_St_13_OFF_1;
  } else {
    v_73 = !(c1);
    v_72 = (turn_on&&c2);
    v_74 = (v_72||v_73);
    if (v_74) {
      r_5_St_13_ON = true;
    } else {
      r_5_St_13_ON = self->pnr_5;
    };
    r_5 = r_5_St_13_ON;
    if (v_74) {
      s_9_St_13_ON_1 = true;
    } else {
      s_9_St_13_ON_1 = false;
    };
    s_9_1 = s_9_St_13_ON_1;
  };
  ck_16_1 = s_9_1;
  if (ck_16_1) {
    lamp_on_1_St_13_OFF = false;
    nr_5_St_13_OFF = false;
    ns_5_St_13_OFF_1 = true;
    lamp_on_1 = lamp_on_1_St_13_OFF;
    nr_5 = nr_5_St_13_OFF;
    ns_5_1 = ns_5_St_13_OFF_1;
  } else {
    lamp_on_1_St_13_ON = true;
    lamp_on_1 = lamp_on_1_St_13_ON;
    nr_5_St_13_ON = false;
    nr_5 = nr_5_St_13_ON;
    ns_5_St_13_ON_1 = false;
    ns_5_1 = ns_5_St_13_ON_1;
  };
  _out->lamp_on = lamp_on_1;
  v_50 = (_out->lamp_on||_out->tv_on);
  v_51 = !(v_50);
  v_53 = (v_51&&v_52);
  v_60 = (_out->lamp_on||_out->tv_on);
  if (self->ck_13_1) {
    if (presence) {
      r_6_St_14_EMPTY = true;
      s_10_St_14_EMPTY_1 = false;
    } else {
      r_6_St_14_EMPTY = self->pnr_6;
      s_10_St_14_EMPTY_1 = true;
    };
    r_6 = r_6_St_14_EMPTY;
    s_10_1 = s_10_St_14_EMPTY_1;
  } else {
    v_71 = !(presence);
    if (v_71) {
      r_6_St_14_OCUPIED = true;
    } else {
      r_6_St_14_OCUPIED = self->pnr_6;
    };
    r_6 = r_6_St_14_OCUPIED;
    if (v_71) {
      s_10_St_14_OCUPIED_1 = true;
    } else {
      s_10_St_14_OCUPIED_1 = false;
    };
    s_10_1 = s_10_St_14_OCUPIED_1;
  };
  ck_14_1 = s_10_1;
  if (ck_14_1) {
    r1_St_14_EMPTY = false;
    nr_6_St_14_EMPTY = false;
    ns_6_St_14_EMPTY_1 = true;
    r1 = r1_St_14_EMPTY;
    nr_6 = nr_6_St_14_EMPTY;
    ns_6_1 = ns_6_St_14_EMPTY_1;
  } else {
    r1_St_14_OCUPIED = true;
    r1 = r1_St_14_OCUPIED;
    nr_6_St_14_OCUPIED = false;
    nr_6 = nr_6_St_14_OCUPIED;
    ns_6_St_14_OCUPIED_1 = false;
    ns_6_1 = ns_6_St_14_OCUPIED_1;
  };
  _out->room_ocupied = r1;
  rule4 = (_out->room_ocupied||v_53);
  v_59 = !(_out->room_ocupied);
  rule1 = (v_59||v_60);
  if (self->ck_11_1) {
    v_70 = (push_1&&c_1);
    if (v_70) {
      r_7_St_15_CLOSED = true;
      s_11_St_15_CLOSED_1 = false;
    } else {
      r_7_St_15_CLOSED = self->pnr_7;
      s_11_St_15_CLOSED_1 = true;
    };
    r_7 = r_7_St_15_CLOSED;
    s_11_1 = s_11_St_15_CLOSED_1;
  } else {
    v_68 = !(c_1);
    v_69 = (push_1||v_68);
    if (v_69) {
      r_7_St_15_OPEN = true;
    } else {
      r_7_St_15_OPEN = self->pnr_7;
    };
    r_7 = r_7_St_15_OPEN;
    if (v_69) {
      s_11_St_15_OPEN_1 = true;
    } else {
      s_11_St_15_OPEN_1 = false;
    };
    s_11_1 = s_11_St_15_OPEN_1;
  };
  ck_12_1 = s_11_1;
  if (ck_12_1) {
    window_open_1_St_15_CLOSED = false;
    nr_7_St_15_CLOSED = false;
    ns_7_St_15_CLOSED_1 = true;
    window_open_1 = window_open_1_St_15_CLOSED;
    nr_7 = nr_7_St_15_CLOSED;
    ns_7_1 = ns_7_St_15_CLOSED_1;
  } else {
    window_open_1_St_15_OPEN = true;
    window_open_1 = window_open_1_St_15_OPEN;
    nr_7_St_15_OPEN = false;
    nr_7 = nr_7_St_15_OPEN;
    ns_7_St_15_OPEN_1 = false;
    ns_7_1 = ns_7_St_15_OPEN_1;
  };
  _out->window_open = window_open_1;
  if (self->ck_9_1) {
    v_67 = (push&&c);
    if (v_67) {
      r_8_St_16_CLOSED = true;
      s_12_St_16_CLOSED_1 = false;
    } else {
      r_8_St_16_CLOSED = self->pnr_8;
      s_12_St_16_CLOSED_1 = true;
    };
    r_8 = r_8_St_16_CLOSED;
    s_12_1 = s_12_St_16_CLOSED_1;
  } else {
    v_65 = !(c);
    v_66 = (push||v_65);
    if (v_66) {
      r_8_St_16_OPEN = true;
    } else {
      r_8_St_16_OPEN = self->pnr_8;
    };
    r_8 = r_8_St_16_OPEN;
    if (v_66) {
      s_12_St_16_OPEN_1 = true;
    } else {
      s_12_St_16_OPEN_1 = false;
    };
    s_12_1 = s_12_St_16_OPEN_1;
  };
  ck_10_1 = s_12_1;
  if (ck_10_1) {
    door_open_1_St_16_CLOSED = false;
    nr_8_St_16_CLOSED = false;
    ns_8_St_16_CLOSED_1 = true;
    door_open_1 = door_open_1_St_16_CLOSED;
    nr_8 = nr_8_St_16_CLOSED;
    ns_8_1 = ns_8_St_16_CLOSED_1;
  } else {
    door_open_1_St_16_OPEN = true;
    door_open_1 = door_open_1_St_16_OPEN;
    nr_8_St_16_OPEN = false;
    nr_8 = nr_8_St_16_OPEN;
    ns_8_St_16_OPEN_1 = false;
    ns_8_1 = ns_8_St_16_OPEN_1;
  };
  _out->door_open = door_open_1;
  v_54 = (_out->door_open||_out->window_open);
  v_55 = !(v_54);
  rule3 = (v_55||v_56);
  v_57 = (_out->door_open||_out->window_open);
  v_58 = !(v_57);
  rule2 = (_out->room_ocupied||v_58);
  v_61 = (rule1&&rule2);
  v_62 = (v_61&&rule3);
  v_63 = (v_62&&rule4);
  v_64 = (v_63&&rule5);
  self->pnr = nr;
  self->v_292 = ns_1_4;
  self->v_293 = ns_2_4;
  self->pnr_1 = nr_1;
  self->v_336 = ns_1_1;
  self->v_337 = ns_1_2;
  self->v_338 = ns_1_3;
  self->pnr_2 = nr_2;
  self->v_393 = ns_2_1;
  self->v_394 = ns_2_2;
  self->v_395 = ns_2_3;
  self->pnr_3 = nr_3;
  self->v_426 = ns_3_1;
  self->v_427 = ns_3_2;
  self->pnr_4 = nr_4;
  self->ck_17_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_15_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_13_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_11_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_9_1 = ns_8_1;;
}

