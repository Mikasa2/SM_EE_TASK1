// C++ code
//
int brightness = 0;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  for (brightness = 0; brightness <= 255; brightness += 5) { //high 
    analogWrite(9, brightness);
    delay(30); // Wait for 30 millisecond(s)
  }
  for (brightness = 255; brightness >= 0; brightness -= 5) { //low 
    analogWrite(9, brightness);
    delay(30); // Wait for 30 millisecond(s)
  }
}
