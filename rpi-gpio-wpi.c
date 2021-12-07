#include <string.h>
#include <studio.h>
#include <stdlib.h
#include <wiringPi.h>

int pinGPIO;

int main(int argc, char *argv[])
{
   pinGPIO=atoi(argv[1]);
   wiringPiSetupGpio();
   pinMode (pin, OUTPUT);

   if(strcmp("on", argv[2]) == 0)
   {
      printf("HIGH");
      digitalWrite (pin, HIGH);
   }


   if(strcmp("off", argv[2]) == 0)
   {
      printf("low");
      digitalWrite (pin, LOW); 
   }

   return 0;
}


