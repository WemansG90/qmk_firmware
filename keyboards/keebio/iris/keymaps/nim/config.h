/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Use I2C or Serial, not both */
#define I2C

/* Select hand configuration */
#define EE_HANDS

#define TAPPING_TERM 150
#define PREVENT_STUCK_MODIFIERS

#undef	BACKLIGHT_LEVELS
#define	BACKLIGHT_LEVELS 6 

#undef  RGBLED_NUM
#define RGBLED_NUM 12
#define RGBLED_SPLIT { 6, 6 }
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 10
#define RGBLIGHT_VAL_STEP 10

#define QMK_ESC_OUTPUT F1 // usually COL
#define QMK_ESC_INPUT D5 // usually ROW
#define QMK_LED B0

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION


