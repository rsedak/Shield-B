/* Control DC motor with RV1
 *  
 * Connect DC motor to M1 and M2 connectors
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

void setup() {
}

void loop() {
  int RV1 = analogRead(A0);
  RV1 = RV1 /2;
  if (RV1 >= 256) {
    analogWrite(5, RV1 - 256);
    analogWrite(6, 0);    
  } else {
    analogWrite(5, 0);       
    analogWrite(6, 255 - RV1);
  }
}
