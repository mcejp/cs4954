#ifndef CS4954_H
#define CS4954_H

#define CS4954_CONTROL_0                0x00
#define CS4954_CONTROL_0_DEFAULT        0x01
#define CS4954_CONTROL_0_TV_FMT_NTSC_M_CCIR601  (0<<5)
#define CS4954_CONTROL_0_TV_FMT_NTSC_M_RS170A   (1<<5)
#define CS4954_CONTROL_0_TV_FMT_PAL_B_D_G_H_I   (2<<5)
#define CS4954_CONTROL_0_TV_FMT_PAL_M           (3<<5)
#define CS4954_CONTROL_0_TV_FMT_PAL_N_ARGENTINA (4<<5)
#define CS4954_CONTROL_0_TV_FMT_PAL_N_WORLD     (5<<5)
#define CS4954_CONTROL_0_MSTR           (1<<4)
#define CS4954_CONTROL_0_CCIR656        (1<<3)
#define CS4954_CONTROL_0_PROG           (1<<2)
#define CS4954_CONTROL_0_IN_MODE        (1<<1)
#define CS4954_CONTROL_0_CBCR_UV        (1<<0)


#define CS4954_CONTROL_3                0x03
#define CS4954_CONTROL_3_DEFAULT        0x00
#define CS4954_CONTROL_3_FD_THR_C1      (1<<4)
#define CS4954_CONTROL_3_FD_THR_C2      (1<<3)
#define CS4954_CONTROL_3_FD_THR_SV      (1<<2)
#define CS4954_CONTROL_3_FD_THR_EN      (1<<1)
#define CS4954_CONTROL_3_CBAR           (1<<0)

#define CS4954_CONTROL_4                0x04
#define CS4954_CONTROL_4_DEFAULT        0x3F
#define CS4954_CONTROL_4_CB_H_SEL       (1<<7)
#define CS4954_CONTROL_4_CB_FLD_SEL     (1<<6)
#define CS4954_CONTROL_4_COMDAC_PD      (1<<5)
#define CS4954_CONTROL_4_SVIDLUM_PD     (1<<4)
#define CS4954_CONTROL_4_SVIDCHR_PD     (1<<3)
#define CS4954_CONTROL_4_R_PD           (1<<2)
#define CS4954_CONTROL_4_G_PD           (1<<1)
#define CS4954_CONTROL_4_B_PD           (1<<0)

#define CS4954_CONTROL_5                0x05
#define CS4954_CONTROL_5_DEFAULT        0x00
#define CS4954_CONTROL_5_LOW_IMP        (1<<6)
#define CS4954_CONTROL_5_EN_COM         (1<<5)
#define CS4954_CONTROL_5_EN_L           (1<<4)
#define CS4954_CONTROL_5_EN_C           (1<<3)
#define CS4954_CONTROL_5_EN_R           (1<<2)
#define CS4954_CONTROL_5_EN_G           (1<<1)
#define CS4954_CONTROL_5_EN_B           (1<<0)

#define CS4954_GPIO_CNTRL               0x09
#define CS4954_GPIO_REG                 0x0A

#define CS4954_SC_AMP                   0x10
#define CS4954_SC_SYNTH0                0x11
#define CS4954_SC_SYNTH1                0x12
#define CS4954_SC_SYNTH2                0x13
#define CS4954_SC_SYNTH3                0x14

#define CS4954_STATUS_1                 0x5A
#define CS4954_STATUS_1_DEFAULT         0x04

#endif
