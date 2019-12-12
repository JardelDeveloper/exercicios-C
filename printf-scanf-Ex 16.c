// Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula de conversão é:
// C = P * 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.

#include <stdio.h>

void main()
{
	float c, p;
	
	printf ("Informe o valor de comprimento em polegadas e sera convertido em centimetros: \n");
	scanf ("%f", &p);
	
	c = p * 2.54;
	printf ("%.2f centimetros", c);	
}
