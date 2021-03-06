/******************************************************************************
 *
 * Copyright(c) 2007 - 2017 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *****************************************************************************/
#ifndef __RTL8188F_DM_H__
#define __RTL8188F_DM_H__
/* ************************************************************
 * Description:
 *
 * This file is for 8188F dynamic mechanism only
 *
 *
 * ************************************************************ */

/* ************************************************************
 * structure and define
 * ************************************************************ */

/* ************************************************************
 * function prototype
 * ************************************************************ */

void rtl8188f_init_dm_priv(PADAPTER padapter);
void rtl8188f_deinit_dm_priv(PADAPTER padapter);

void rtl8188f_InitHalDm(PADAPTER padapter);
void rtl8188f_HalDmWatchDog(PADAPTER padapter);

#endif
