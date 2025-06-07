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

	//agregado para el TP N°4:

	printf("\nSu condicion actual de peso es: ");

	if (IMC >= 30){
			printf("\nObesidad");
		}else if (IMC >= 25 && IMC < 30){
			printf("\nSobrepeso");
		}else if (IMC >= 18.5 && IMC < 25){
			printf("\nNormal");
		}else if (IMC < 18.5){
			printf("\nBajo peso");
		};

	return 0;
}