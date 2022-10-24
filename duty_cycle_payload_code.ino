void setup() {
  // put your setup code here, to run once:
  //using:https://docs.arduino.cc/tutorials/generic/secrets-of-arduino-pwm
pinMode(2, OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);


}
// int freq = 0.5; //hz
// int duty_cycle = 50; //percent value
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3, HIGH);
digitalWrite(4, LOW);

// digitalWrite(2, HIGH);
// delayMicroseconds(100); // Approximately 10% duty cycle @ 1KHz
// digitalWrite(2, LOW);
// delayMicroseconds(1000 - 100);

digitalWrite(2, HIGH);
delay(500); // 0.5 seconds, or 500 ms; 1Hz, 50% duty cycle
digitalWrite(2, LOW);
delay(1000 - 500);


// digitalWrite(2, HIGH);
// delay((duty_cycle/100)*(1/freq)*1000); // 0.5 seconds, or 500 ms; 1Hz, 50% duty cycle
// digitalWrite(2, LOW);
// delay((1/freq)*1000 - (duty_cycle/100)*(1/freq)*1000); //83 ms is 12 Hz

}
