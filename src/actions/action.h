/**
 * Copyright 2011 - 2020 José Expósito <jose.exposito89@gmail.com>
 *
 * This file is part of Touchégg.
 *
 * Touchégg is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License  as  published by  the  Free Software
 * Foundation,  either version 2 of the License,  or (at your option)  any later
 * version.
 *
 * Touchégg is distributed in the hope that it will be useful,  but  WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
 * A PARTICULAR PURPOSE.  See the  GNU General Public License  for more details.
 *
 * You should have received a copy of the  GNU General Public License along with
 * Touchégg. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef ACTIONS_ACTION_H_
#define ACTIONS_ACTION_H_

#include <string>
#include <unordered_map>

#include "gesture/gesture.h"

class Action {
 public:
  explicit Action(std::unordered_map<std::string, std::string> settings)
      : settings(settings) {}
  virtual ~Action() = default;

  virtual void onGestureBegin(const Gesture &gesture) = 0;
  virtual void onGestureUpdate(const Gesture &gesture) = 0;
  virtual void onGestureEnd(const Gesture &gesture) = 0;

 protected:
  std::unordered_map<std::string, std::string> settings;
};

#endif  // ACTIONS_ACTION_H_
