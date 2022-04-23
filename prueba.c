#include <stdio.h>

int main (){
	
	int edad;
	char nombre [30];
	
	printf ("Cual es tu nombre? : ");
	scanf ("%s" , nombre);
	printf ("Cual es tu edad? : ");
	scanf ("%d" , &edad);
	printf ("Tu nombre es %s y tienes %d anios.",nombre,edad);
	
	return 0;
}
