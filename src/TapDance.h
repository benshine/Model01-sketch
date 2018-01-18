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

#include <Kaleidoscope-TapDance.h>

// Tap-dance
enum {
  TMUX,
  TMUXP,
  LPB,
  RPB,
  COLON,
  MNP,
  VOLD,
};

extern void tapDanceAction(uint8_t tapDanceIndex, uint8_t tapCount, kaleidoscope::TapDance::ActionType tapDanceAction);

namespace algernon {
namespace TapDance {

extern bool cancelOneShot;
void configure(void);

}
}
