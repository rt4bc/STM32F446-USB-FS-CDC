#include <Arduino.h>
HardwareSerial Usart(PA3,PA2);
USBSerial Cdc;
int counter;

char buffer[64] = {0};

void setup() {
  // initialize digital pin PB2 as an output.
  pinMode(PA5, OUTPUT); // LED connect to pin PB2

  //Usart.begin(115200);
  
  Cdc.begin();

  counter = 0;
  
}
void loop() {
  //digitalWrite(PA5, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(100);               // wait for 100mS
  //digitalWrite(PA5, LOW);    // turn the LED off by making the voltage LOW
  //delay(100);               // wait for 100mS

  //Usart.write("UUUU\r\n");
  
  Cdc.readBytes(buffer,64);
  //Cdc.write(buffer,64);

}
