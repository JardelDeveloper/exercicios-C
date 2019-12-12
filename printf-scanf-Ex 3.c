// Peça ao Usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

void main()
{
	int a, b, c, soma;
	
	printf ("Infome o valor de A, B e C \n");
	scanf ("%d %d %d", &a, &b, &c);
	
	printf ("%d + %d + %d = %d", a, b, c, a + b + c);
}
