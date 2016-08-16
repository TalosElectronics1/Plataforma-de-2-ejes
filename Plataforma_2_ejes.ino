/*
Talos Electronics
Rafael Lozano Rolón 
25/Noviembre/2015 
*/
#include <Servo.h> //Libreria para Servomotores

Servo Servo_1;
Servo Servo_2;

int Angulo = 0;    // Variable que contendra el angulo de giro del servo
int Angulo_2=0;    // Variable que contendra el angulo de giro del servo
void setup() 
{ 
  Servo_1.attach(2);  // Definir el pin (2) que se utilizara para el control del servo
  Servo_2.attach(3);  // Definir el pin (3) que se utilizara para el control del servo
} 


void loop() 
{ 
  for(Angulo= 0;Angulo < 180; Angulo += 1)  //Incrementar de 1 en 1 el angulo que va de 0° hasta 180°
  {                                  
    Servo_1.write(Angulo);                  // Decirle al Servo_1 que se mueva los grados que estan en la variable angulo
    delay(100);                              // Esperar 15 ms para que el servo alcance la posicion
  } 
  
  for(Angulo_2= 0;Angulo_2 < 100; Angulo_2 += 1)  //Incrementar de 1 en 1 el angulo que va de 0° hasta 180°
  {                                  
    Servo_2.write(Angulo_2);                  // Decirle al Servo_1 que se mueva los grados que estan en la variable angulo
    delay(100);                              // Esperar 15 ms para que el servo alcance la posicion
  }
                                 
  for(Angulo = 180; Angulo>=1; Angulo-=1)    // Decrementar de 1 en 1 el angulo que va de 180° hasta 0°
  {                                
    Servo_1.write(Angulo);                   // Decirle al Servo_1 que se mueva los grados que estan en la variable angulo
    delay(100);                              // Esperar 15 ms para que el servo alcance la posicion
  } 
  
   for(Angulo_2 = 100; Angulo_2>=1; Angulo_2-=1)    // Decrementar de 1 en 1 el angulo que va de 180° hasta 0°
  {                                
    Servo_2.write(Angulo_2);                   // Decirle al Servo_2 que se mueva los grados que estan en la variable angulo
    delay(100);                              // Esperar 15 ms para que el servo alcance la posicion
  } 
  
} 
