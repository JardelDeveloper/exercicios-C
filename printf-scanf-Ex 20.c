// Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de conversão é:
// L = K / 0.45, sendo K a massa em quilogramas e l a massa em libras.

#include <stdio.h>

void main()
{
	float k, l;
	
	printf ("Informe o valor de massa em quilogramas e sera convertido em libras: \n");
	scanf ("%f", &k);
	
	l = k / 0.45;
	printf ("%.2f libras,", l);		
}
