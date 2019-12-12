// Leia um valor de volume em metros cúbicos m^3 e apresente-o convertido em litros. A fórmula de conversão é:
// L = 1000 * M, sendo L o volume em litros e M o volume em metros cúbicos.

#include <stdio.h>

void main()
{
	float m, l;
	
	printf ("Informe o valor do volume em metros cubicos e sera convertido em litros: \n");
	scanf ("%f", &m);
	
	l = 1000 * m;
	printf ("%.2f litros", l);		
}
