/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 */

#ifndef __IA_CSS_HB_PARAM_H
#define __IA_CSS_HB_PARAM_H

#include "type_support.h"

#ifndef PIPE_GENERATION
#define __INLINE_HMEM__
#include "hmem.h"
#endif

#include "ia_css_bh_types.h"

/* AE (3A Support) */
struct sh_css_isp_bh_params {
	/* coefficients to calculate Y */
	s32 y_coef_r;
	s32 y_coef_g;
	s32 y_coef_b;
};

/* This should be hmem_data_t, but that breaks the pipe generator */
struct sh_css_isp_bh_hmem_params {
	u32 bh[ISP_HIST_COMPONENTS][IA_CSS_HMEM_BH_UNIT_SIZE];
};

#endif /* __IA_CSS_HB_PARAM_H */
