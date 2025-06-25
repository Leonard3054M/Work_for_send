#include <stdio.h>
int main(void){
	float Peso = 0, IMC = 0, Altura = 0;
	
//modificacion del TP N°5
	do{
		printf("\nIngresar peso (Kg): ");
		scanf("%f", &Peso);

		if (Peso < 0)
		printf("\nPeso incorrecto, ingresar de nuevo");
	} while (Peso < 0);

	do{
		printf("\nIngresar altura (m): ");
		scanf("%f", &Altura);

		if (Altura < 0)
		printf("\nAltura incorrecta, ingresar de nuevo");
	} while (Altura < 0);


	

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