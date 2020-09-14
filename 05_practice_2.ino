#define PIN_LED 7
unsigned int count, toggle;
boolean ledOn=false; 

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
//  Serial.println(++count);
  
  // toggle = toggle_state(toggle); // toggle LED value.
  while(count < 12){
    if(count == 0){
      toggle = toggle_state(toggle); // toggle LED value.
      digitalWrite(PIN_LED, toggle); // update LED status.
      delay(1000); // wait for 1,000 milliseconds
      }
    else{
      toggle = toggle_state(toggle); // toggle LED value.
      digitalWrite(PIN_LED, toggle); // update LED status.
      delay(100); // wait for 200 milliseconds  
    }
    count++;
  }
  
   while(1){}
}

int toggle_state(int toggle) {
    if(ledOn==true) {
    toggle = 1;
   } 
   else { 
    toggle = 0; 
  } 
    ledOn=!ledOn;
  return toggle;
}
