// Leia uma velocidade em km/hr (quil�metros por hora) e apresente-se a convertida em m/s (metros por segundo). 
// A f�rmula de convers�o � M = K / 3.6, sendo K a velocidade em k/h e M em m/s.

#include <stdio.h>

void main()
{
	float k;
	
	printf ("Informe a velocidade em km/hr (quilometros por hora) \n");
	scanf ("%f", &k);
	
	printf ("A velocidade em m/s (metros por segundo) eh: %.2f", k / 3.6);
}
