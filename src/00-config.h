/* -*- mode: c++ -*-
 * Model01-Sketch -- algernon's Model01 Sketch
 * Copyright (C) 2016, 2017  Gergely Nagy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
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

#pragma once

#define FOCUS_WITHOUT_DOCS           1

#define KALEIDOSCOPE_HOSTOS_GUESSER  0

#define WITH_PROGMEM_KEYMAP          0

#define WITH_STENO                   1

#if !WITH_PROGMEM_KEYMAP
# define WITH_CYCLE_REPORT           0
# define WITH_STALKER_EFFECT         0
# define WITH_WAVEPOOL_EFFECT        0
# define WITH_MATRIX_EFFECT          0
#endif
