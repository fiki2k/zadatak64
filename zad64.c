//Program ce izracunat volumen i oplosje kugle.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14

//Funkcija za izracunavanje oplosja kugle.
float oplosje(int radijus){
	
	float oplosje;
	oplosje=4*PI*radijus*radijus;
	return oplosje;
}

//Funkcija za izracunavanje volumena kugle.
float volumen(int radijus){
	
	float vol;
	vol=(4.0/3.0)*PI*radijus* radijus*radijus;
	return vol;
}

int main(){
   int radijus;
   printf("Unesi radijus kugle:\n");
   scanf("%d",&radijus);
   float O=oplosje(radijus);
   printf("Oplosje kugle je %f\n",O);
   float V=volumen(radijus);
   printf("Volumen kugle je %f\n",V);
   return 0;
}
