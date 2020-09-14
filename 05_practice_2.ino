#define PIN_LED 7


void setup() {
  pinMode(PIN_LED, OUTPUT);
  int count = 0;
     
//  처음 1초동안 LED를 켜고 다음 1초동안 LED가 5회 깜빡이도록 할 것
//  LED를 끄고 무한루프 상태에서 종료
    while(1){
      if(count == 0){
        digitalWrite(PIN_LED, HIGH); 
        delay(1000); 
        digitalWrite(PIN_LED, LOW); 
        delay(1000); 
      }
      else if(count > 0 && count < 6){
        digitalWrite(PIN_LED, HIGH); 
        delay(200); 
        digitalWrite(PIN_LED, LOW); 
        delay(200); 
      }
      else{
        digitalWrite(PIN_LED, 1);
        break;
      }
      count++; 
    }
    
}

void loop() {
     
}

int toggle_state(int toggle) {
   
}
