/*
 * @author: jorge andres da costa ribeiro
 * 
 * @date: 21/09/2015
 * 
 * 
*/

int switchState = 0;
void setup() {

  //seleccionamos los pines de entrada de info  y salida 

  /*LED´S*/
  pinMode(3,OUTPUT);   //LED verde   
  pinMode(4,OUTPUT);   //LED rojo
  pinMode(5,OUTPUT);  //LED rojo

  /*BOTONES*/
  pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);
  if (switchState == LOW){ // boton 0 el led de la salida 3 esta 1

     digitalWrite(3, HIGH); // LED verde 
     digitalWrite(4, LOW);  // LED rojo
     digitalWrite(5, LOW);  // LED rojo
     
    }else{                  //si el boton esta 1  pasa esto.
        
       digitalWrite(3, LOW);    //LED VERDE = 0
       digitalWrite(4, LOW);    // LED rojo.4  = 0
       digitalWrite(5, HIGH);   //LED rojo.5 = 0

         
      delay(250);   //espera de 250ms
      
       digitalWrite(4, HIGH);  //LED rojo.4 = 1
       digitalWrite(5, LOW);   //LED rojo.5 = 0


        /*
        esto cre una alternacia enrter los LED´S rojos de intercambio a 0 y 1, es decir nunca en ningun caso estan los 3 leds encendicos
        */
        
      delay(250);  //espera de 250ms
      }
}
