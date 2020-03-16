#include <Servo.h>  // add servo library



Servo myservo;  // create servo object to control a servo



int state = 0;



void setup() {

  Serial.begin(9600);

 

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

}



void loop() {

 

   



      state = 0 ;

             if( Serial.available()  > 0)

                  state = Serial.read();

                  if( state != 0)

              Serial.println(state);

             if( state == 50){                                       

                                   

                    myservo.write(20);

                    delay(15);

             }

             else if(state == 49){

                                               

                   myservo.write(170);

                   delay(15);

             }

             else if(state == 51){

                             

               

                 

                   myservo.write(90);

                   delay(15);

             }

             else if(state == 52){

                             

               

                 

                   myservo.write(45);

                   delay(15);

             } 

           

         

   

       // waits for the servo to get there

}



