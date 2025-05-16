#include <stdio.h>
int main(void){
	float Peso = 0, IMC = 0, Altura = 0;

	printf("Ingresar peso (Kg): ");
	scanf("%f", &Peso);
	printf("Ingresar altura (m): ");
	scanf("%f", &Altura);

	IMC = Peso / (Altura * Altura);

	printf("Tu indice de masa corporal es: %.2f\n\n", IMC);

	printf("	Indice | Condicion\n ");
	printf("      --------------------\n");
	printf("	 <18.5 | Bajo peso\n");
	printf("   18.5 a 24.9 | Normal\n");
	printf("   25.0 a 29.9 | Sobrepeso\n");
	printf("	  >=30 | Obesidad\n");

	return 0;
}