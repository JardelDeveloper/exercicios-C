// Leia um valor de volume em metros c�bicos m^3 e apresente-o convertido em litros. A f�rmula de convers�o �:
// L = 1000 * M, sendo L o volume em litros e M o volume em metros c�bicos.

#include <stdio.h>

void main()
{
	float m, l;
	
	printf ("Informe o valor do volume em metros cubicos e sera convertido em litros: \n");
	scanf ("%f", &m);
	
	l = 1000 * m;
	printf ("%.2f litros", l);		
}
