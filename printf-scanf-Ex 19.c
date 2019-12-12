// Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m^3. A fórmula de conversão é:
// M = L / 1000, sendo L o volume em litros e M o volume em metros cúbicos.

#include <stdio.h>

void main()
{
	float m, l;
	
	printf ("Informe o valor do volume em litros e sera convertido em metros cubicos: \n");
	scanf ("%f", &l);
	
	m = l / 1000;
	printf ("%f metros cubicos", m);		
}
