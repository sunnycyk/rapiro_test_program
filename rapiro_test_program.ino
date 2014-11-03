/* Test Program.  
 * BLE Nano and Rapiro 
 * Author: Sunny Cheung
 * website: http://www.sunnycyk.com
 * Copyright 2014 Sunny Cheung
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  delay(500);
  Serial.println("#M1");
  delay(5000);
  Serial.println("#M2");
  delay(5000);
  Serial.println("#M0");
  delay(500);
  Serial.println("#M6");
  delay(3000);
  Serial.println("#M8");
  delay(3000);
  Serial.println("#M5");
  delay(3000);
  Serial.println("#M0");
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
