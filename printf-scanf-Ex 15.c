// Leia um ângulo em radianos e apresete-o convertido em graus. A fórmula de conversão é: G = R * 180 / PI.
// Sendo G o ângulo em graus e R em radianos e PI = 3.14. 

#include <stdio.h>

void main()
{
	float PI = 3.14, r, g;
	
	printf ("Informe qual o angulo em radianos e sera convertido em graus: \n");
	scanf ("%f", &r);
	
	g = r * (180 / PI);
	printf ("%.2f graus", g);	
}
