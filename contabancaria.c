#include <stdio.h>
#include <stdlib.h>

void main() {
	//Declaração de Variáveis
	int opcao= 'z';
	int valor_deposito=0;
	int valor_retirada=0;
	int	saldo_atual=0;
	//inicio
while(opcao == 'z'){
		printf("----------MOVIMENTACAO BANCARIA----------\n");
		printf("A.Deposito\n");
		printf("B.Retirada\n");
		printf("C.Saldo atua\n");
		printf("D.sair\n");
		scanf("%c",&opcao);
			while(opcao != 'd'){
				switch (opcao){
					case 'a': //OPÇAO PARA REALIZAR DEPOSITO
						printf("------REALIZAR DEPOSITO-------\n");
						printf("Insira o valor do deposito:\n");
						scanf("%d",&valor_deposito);
						saldo_atual= saldo_atual+ valor_deposito;
						opcao='z';
						printf("-------------------------------\n");
					break;	
					case 'b':
						printf("------REALIZAR RETIRADA-------\n");
						printf("Insira o valor da retirada:\n");
						scanf("%d",&valor_retirada);
						saldo_atual= saldo_atual-valor_retirada;
						printf("-------------------------------\n");
						opcao='z';
					break;
						
				}
			}
	}
	
}
