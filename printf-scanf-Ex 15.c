// Leia um �ngulo em radianos e apresete-o convertido em graus. A f�rmula de convers�o �: G = R * 180 / PI.
// Sendo G o �ngulo em graus e R em radianos e PI = 3.14. 

#include <stdio.h>

void main()
{
	float PI = 3.14, r, g;
	
	printf ("Informe qual o angulo em radianos e sera convertido em graus: \n");
	scanf ("%f", &r);
	
	g = r * (180 / PI);
	printf ("%.2f graus", g);	
}
