// Leia uma velocidade em m/s (metros por segundo) e apresente-se a convertida em km/h (quilômetros por hora).
// A fórmula de conversão é: K = M * 3.6, sendo K a velocidade em km/hr e M em m/s.

#include <stdio.h>

void main()
{
	float m;
	
	printf ("Informe a velocidade em m/s (metros por segundo) \n");
	scanf ("%f", &m);
	
	printf ("A velocidade em km/hr (quilometros por hora) eh: %.2f", m * 3.6);	
}
