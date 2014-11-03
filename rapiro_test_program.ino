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
  
  // Move Forward for 5 seconds
  Serial.println("#M1");
  delay(5000);
  
  // Move Backward for 5 seconds
  Serial.println("#M2");
  delay(5000);
  
  // stop and initial position
  Serial.println("#M0");
  delay(500);
  
  // Wave right arm for 3 seconds
  Serial.println("#M6");
  delay(3000);
  
  // wave left arm for 3 seconds
  Serial.println("#M8");
  delay(3000);
  
  // wave both arms for 3 seconds
  Serial.println("#M5");
  delay(3000);
  
  // stop and back to initial position
  Serial.println("#M0");
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
