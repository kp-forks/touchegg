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
#ifndef ACTIONS_MAXIMIZE_RESTORE_WINDOW_H_
#define ACTIONS_MAXIMIZE_RESTORE_WINDOW_H_

#include <string>
#include <unordered_map>

#include "actions/action.h"

class MaximizeRestoreWindow : public Action {
 public:
  using Action::Action;
  // explicit MaximizeRestoreWindow(
  //     std::unordered_map<std::string, std::string> settings);

  void onGestureBegin(const Gesture &gesture) override;
  void onGestureUpdate(const Gesture &gesture) override;
  void onGestureEnd(const Gesture &gesture) override;
};

#endif  // ACTIONS_MAXIMIZE_RESTORE_WINDOW_H_
