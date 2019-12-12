// Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A fórmula de conversão é:
// P = C / 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.

#include <stdio.h>

void main()
{
	float c, p;
	
	printf ("Informe o valor de comprimento em centimetros e sera convertido em polegadas: \n");
	scanf ("%f", &c);
	
	p = c / 2.54;
	printf ("%.2f polegadas", p);		
}
