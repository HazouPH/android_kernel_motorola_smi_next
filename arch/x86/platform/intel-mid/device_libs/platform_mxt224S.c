/*
 * Copyright (c) 2010, Motorola, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

//#include <linux/delay.h>
//#include <linux/gpio.h>
//#include <linux/gpio_keys.h>
//#include <linux/kernel.h>
//#include <linux/i2c.h>
//#include <linux/init.h>
//#include <linux/irq.h>
//#include <linux/input.h>
#include <linux/interrupt.h>
#include <linux/platform_device.h>
#include <linux/input/touch_platform.h>

#include "platform_mxt224S.h"

#include <asm/intel-mid.h>

/*
* Just outcomment the ones the driver now needs. Should be automated
* but this is the easy workaround. And sinds I don't know how
* this is the best solution
*/ 

static	uint8_t tdat_filename_p2[] = "atmxt-r2.tdat";
//static	uint8_t tdat_filename_p1[] = "atmxt-r1.tdat";
//static	uint8_t tdat_filename_p05[] = "atmxt-r0.tdat";


struct touch_platform_data ts_platform_data_atmxt;

void *mot_setup_touch_atmxt(void *info)
{
	/*
	* Just outcomment the ones the driver now needs. Should be automated
	* but this is the easy workaround. And sinds I don't know how
	* this is the best solution
	*/ 

	//strcpy(ts_platform_data_atmxt.filename, tdat_filename_p05);
	//strcpy(ts_platform_data_atmxt.filename, tdat_filename_p1);
	strcpy(ts_platform_data_atmxt.filename, tdat_filename_p2);

	/* Setup GPIOs */
	ts_platform_data_atmxt.gpio_reset = get_gpio_by_name("ts_rst");
	ts_platform_data_atmxt.gpio_irq = get_gpio_by_name("ts_int");

	return &ts_platform_data_atmxt;
}
