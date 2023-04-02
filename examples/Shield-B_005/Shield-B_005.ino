/* Control step motor with SW2 and SW3
 *  
 * Connect step motor to J6 connector
 * 
 * Created 2022 by Robert Sedak
 * 
 * This example code is in the public domain.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
 *  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHOR(S) OR 
 *  CONTRIBUTOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
 *  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR 
 *  THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

byte s_step = 0;
byte s_i = 1;
byte s_table[8] = {0b1000,
                   0b1100,
                   0b0100,
                   0b0110,
                   0b0010,
                   0b0011,
                   0b0001,
                   0b1001};

void setup() {
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  s_move();
}

void loop() {
  if (digitalRead(A2) == 0) {
    s_i = s_i + 2;
  }
  if (digitalRead(A3) == 0) {
    s_i = s_i - 2;
  }
  s_move();
  delay(200);
}

void s_move() {
  s_i = s_i & 0b0000111;
  s_step = s_table[s_i];
  digitalWrite(2, bitRead(s_step, 3));
  digitalWrite(4, bitRead(s_step, 2));
  digitalWrite(7, bitRead(s_step, 1));
  digitalWrite(8, bitRead(s_step, 0));
}
