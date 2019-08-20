#include <iostream>

int main() {
	float peso_terra,peso_final,gravidade;
	int opcao;
	peso_final =0;
while(peso_final <= 11.55){
	printf("\n------PESO EM OUTROS PLANETAS--------\n");
	printf("Digite seu peso na terra:");
	scanf("%f",&peso_terra);
	printf("\n-------------------------------------\n");
	printf("----SELECIONE O PLANETA DESEJADO-------\n");
	printf("\n1-mercurio");
	printf("\n2-venus");
	printf("\n3-marte");
	printf("\n4-jupiter");
	printf("\n5-saturno");
	printf("\n6-urano");
	printf("\n7-netuno");
	printf("\nEscolha um planeta para saber seu peso no mesmo\n");
	scanf("%d",&opcao);
		switch(opcao){
			case 1:
				gravidade = 0.376;
			break;
			case 2:
				gravidade = 0.903;
			break;
			case 3:
				gravidade = 0.380;
			break;
			case 4:
				gravidade = 2.340;
			break;
			case 5:
				gravidade = 1.160;
			break;
			case 6:
				gravidade = 1.150;
			break;
			case 7:
				gravidade = 1.190;
			break;
		}
	system("cls");
	peso_final = peso_terra * gravidade;
	printf("\no seu peso seria %0.2f kg\n",peso_final);
	
}

}	

