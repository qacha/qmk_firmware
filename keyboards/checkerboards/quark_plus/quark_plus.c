/* Copyright 2022 Nathan Spears
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

#include "quark_plus.h"

bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_kb(index, clockwise)) { return false; }
    if (index == 1) { /* left encoder*/
                if (clockwise){
                    tap_code(KC_WH_U);
                } else {
                    tap_code(KC_WH_D);
                }
    } else if (index == 0) { /* right encoder */
                if (clockwise){
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
        }
    }
    return true;
}