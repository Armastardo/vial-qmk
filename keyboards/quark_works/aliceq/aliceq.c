/* Copyright 2021 Quark
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "aliceq.h"

#define H_SEP 28
#define V_SEP 16

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 20, 21, 22, 23, 1, 2, 3, 4 },
  { 19, 5 },
  { 18, 6 },
  { 14, 13, 12, 11, 10, 9, 8, 7 },
  { 15, 16, 17}
}, {
  // LED Index to Physical Position
  { H_SEP*5,  V_SEP*1 }, { H_SEP*6,  V_SEP*1 }, { H_SEP*7,  V_SEP*1 }, { H_SEP*8,  V_SEP*1 },
  { H_SEP*8,  V_SEP*2 }, { H_SEP*8,  V_SEP*3 },
  { H_SEP*8,  V_SEP*4 }, { H_SEP*7,  V_SEP*4 }, { H_SEP*6,  V_SEP*4 }, { H_SEP*5,  V_SEP*4 },
  { H_SEP*4,  V_SEP*4 }, { H_SEP*3,  V_SEP*4 }, { H_SEP*2,  V_SEP*1 }, { H_SEP*1,  V_SEP*4 },

  { H_SEP*1,  V_SEP*4 }, { H_SEP*1,  V_SEP*4 }, { H_SEP*1,  V_SEP*4 },
  { H_SEP*1,  V_SEP*3 }, { H_SEP*1,  V_SEP*2 },

  { H_SEP*1,  V_SEP*1 }, { H_SEP*2,  V_SEP*1 }, { H_SEP*3,  V_SEP*1 }, { H_SEP*4,  V_SEP*1 },
}, {
  // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8, 8, 8, 4, 4, 4, 4, 4, 4
    } 
};
