/*  Gamepad.h
 * 
 *  Copyright (c) 2020 Mikael Norrgård <http://daemonbite.com>
 *
 *  GNU GENERAL PUBLIC LICENSE
 *  Version 3, 29 June 2007
 *  
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *  
 */

#include "HID.h"

typedef struct {
  uint16_t buttons;
  int8_t X  ;
  int8_t Y  ;  
} GamepadReport;

class Gamepad_
{  
  private:
    uint8_t reportId;
    
  public:
    GamepadReport _GamepadReport;
    Gamepad_(void);
    void begin(uint8_t id);
    void end(void);
    void reset(void);
    void send();
};
extern Gamepad_ Gamepad;
