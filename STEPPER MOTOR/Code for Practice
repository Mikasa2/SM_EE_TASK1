# EE_TASK1_2
Electrical Engineering path TASK1_2  ( Stepper Motor )
# code for practice your circle on tinkercad website

#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution

// for your motor


// initialize the stepper library on pins 8 through 11:

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

int stepCount = 0;  // number of steps the motor has taken

void setup() {

  // nothing to do inside the setup
  
}

void loop() {

  // read the sensor value:
  
  int sensorReading = analogRead(A0);
  
  // map it to a range from 0 to 100:
  
  int motorSpeed = map(sensorReading, 0, 1023, 0, 250);
  
  // set the motor speed:
  
  if (motorSpeed > 0) {
  
    myStepper.setSpeed(motorSpeed);
    
    // step 1/100 of a revolution:
    
    myStepper.step(stepsPerRevolution / 100);
    
  }
  
}

# the result of practice this code 

![SteppermotorRESULT](https://user-images.githubusercontent.com/101830434/179373657-09bad90a-38e3-41de-9563-592820b0a19d.png)
