/* Copyright (C) Bauwks 2012
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

/* Base this config off the SD card boot config */
#include <configs/nt2ndboot_sd.h>

/* Redefine the boot command to load an image at offset 256K on the
 * internal "boot" partition. The expectation is that the 2nd u-boot is
 * using the first 256K of the partition so that it gets loaded by the
 * 1st u-boot. */
#undef CONFIG_BOOTCOMMAND
#define CONFIG_BOOTCOMMAND "mmcinit 1; booti mmc1 boot 0x40000"
