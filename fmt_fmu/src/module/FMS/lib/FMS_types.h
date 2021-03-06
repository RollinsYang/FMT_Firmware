/*
 * File: FMS_types.h
 *
 * Code generated for Simulink model 'FMS'.
 *
 * Model version                  : 1.718
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sun Sep 20 09:13:05 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_FMS_types_h_
#define RTW_HEADER_FMS_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_Pilot_Cmd_Bus_
#define DEFINED_TYPEDEF_FOR_Pilot_Cmd_Bus_

typedef struct {
  uint32_T timestamp;

  /* Left stick left/right */
  real32_T ls_lr;

  /* Left stick up/down */
  real32_T ls_ud;

  /* Right stick left/right */
  real32_T rs_lr;

  /* Right stick up/down */
  real32_T rs_ud;

  /* flight mode, 0: attitude  1: altitude hold  2: autonomous */
  uint32_T mode;

  /* Operation channel 1 */
  uint32_T cmd_1;

  /* Operation channel 2 */
  uint32_T cmd_2;
} Pilot_Cmd_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_INS_Out_Bus_
#define DEFINED_TYPEDEF_FOR_INS_Out_Bus_

typedef struct {
  uint32_T timestamp;
  real32_T phi;
  real32_T theta;
  real32_T psi;
  real32_T quat[4];
  real32_T p;
  real32_T q;
  real32_T r;
  real32_T ax;
  real32_T ay;
  real32_T az;
  real32_T vn;
  real32_T ve;
  real32_T vd;

  /* padding */
  real32_T reserved;
  real_T lon;
  real_T lat;
  real_T alt;
  real32_T x_R;
  real32_T y_R;
  real32_T h_R;
  real32_T h_AGL;
  uint32_T flag;
  uint32_T status;
} INS_Out_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Control_Out_Bus_
#define DEFINED_TYPEDEF_FOR_Control_Out_Bus_

typedef struct {
  uint32_T timestamp;
  uint16_T actuator_cmd[16];
} Control_Out_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_FMS_Out_Bus_
#define DEFINED_TYPEDEF_FOR_FMS_Out_Bus_

typedef struct {
  uint32_T timestamp;

  /* rate x command in body frame */
  real32_T p_cmd;

  /* rate y command in body frame */
  real32_T q_cmd;

  /* rate z command in body frame */
  real32_T r_cmd;

  /* roll command */
  real32_T phi_cmd;

  /* pitch command */
  real32_T theta_cmd;

  /* yaw rate command */
  real32_T psi_rate_cmd;

  /* velocity x command in control frame */
  real32_T u_cmd;

  /* velocity y command in control frame */
  real32_T v_cmd;

  /* velocity z command in control frame */
  real32_T w_cmd;

  /* throttle command */
  uint32_T throttle_cmd;

  /* actuator command, e.g, pwm command for motors */
  uint16_T actuator_cmd[16];

  /* state
     0: Disarm
     1: Standby
     2: Arm */
  uint8_T state;

  /* mode
     0: Unknown Mode
     1: Mission Mode
     2: Position Mode
     3: Altitude Hold Mode
     4: Manual Mode
     5: Acro Mode */
  uint8_T mode;

  /* reset the controller */
  uint8_T reset;
  uint8_T reserved;
} FMS_Out_Bus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_QTHD3FieMDlB4oEKy11VyG_
#define DEFINED_TYPEDEF_FOR_struct_QTHD3FieMDlB4oEKy11VyG_

typedef struct {
  real32_T StickDeadZone;
  real32_T XY_P;
  real32_T Z_P;
  real32_T VEL_XY_LIM;
  real32_T VEL_Z_LIM;
  real32_T YAW_P;
  real32_T YAW_RATE_LIM;
  real32_T ROLL_PITCH_LIM;
} struct_QTHD3FieMDlB4oEKy11VyG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_i7E80ZuatMf603HOn7rPOE_
#define DEFINED_TYPEDEF_FOR_struct_i7E80ZuatMf603HOn7rPOE_

typedef struct {
  uint32_T period;
  int8_T model_info[9];
} struct_i7E80ZuatMf603HOn7rPOE;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_FMS_T RT_MODEL_FMS_T;

#endif                                 /* RTW_HEADER_FMS_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
