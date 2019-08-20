#include <stdio.h>
#include <stdlib.h>

int main() {
	//Declaração de Variáveis
	int opcao= 'z';
	int valor_deposito=0;
	int valor_retirada=0;
	int	saldo_atual=0;
	int opcao1='z';
	//inicio
while(opcao1 != 'd'){
		printf("----MOVIMENTACAO BANCARIA-----\n");
		printf("A.Deposito\n");
		printf("B.Retirada\n");
		printf("C.Saldo atual\n");
		printf("D.sair\n");
		scanf("%s",&opcao);
			while(opcao != 'p'){
				switch (opcao){
					case 'a': //OPÇAO PARA REALIZAR DEPOSITO
						system("cls");
						printf("------REALIZAR DEPOSITO-------\n");
						printf("Insira o valor do deposito:\n");
						scanf("%d",&valor_deposito);
						saldo_atual= saldo_atual+ valor_deposito;
						opcao= 'p';
						printf("-------------------------------\n");
						system("cls");
					break;	
					case 'A': //OPCAO PARA REALIZAR DEPOSITO POREM COM LETRAS MAIUCULAS PARA NÃO HAVER ERROS
						system("cls");
						printf("------REALIZAR DEPOSITO-------\n");
						printf("Insira o valor do deposito:\n");
						scanf("%d",&valor_deposito);
						saldo_atual= saldo_atual+ valor_deposito;
						opcao= 'p';
						printf("-------------------------------\n");
						system("cls");
					break;	
					case 'b'://OPCAO PARA REALIZAR RETIRADA
						system("cls");
						printf("------REALIZAR RETIRADA-------\n");
						printf("Insira o valor da retirada:\n");
						scanf("%d",&valor_retirada);
						printf("-------------------------------\n");
						if(valor_retirada<=saldo_atual){
							saldo_atual= saldo_atual-valor_retirada;
							opcao='p';
							printf("Valor retirado R$ %d\n",valor_retirada);
							}
						else{
							printf("Saldo Indisponivel\n");
							opcao='p';
						}
					break;
					case 'B'://OPCAO PARA REALIZAR RETIRADA POREM COM LETRAS MAIUCULAS PARA NÃO HAVER ERROS
						system("cls");
						printf("------REALIZAR RETIRADA-------\n");
						printf("Insira o valor da retirada:\n");
						scanf("%d",&valor_retirada);
						printf("-------------------------------\n");
						if(valor_retirada<=saldo_atual){
							saldo_atual= saldo_atual-valor_retirada;
							opcao='p';
							printf("Valor retirado R$ %d\n",valor_retirada);
							}
						else{
							printf("Saldo Indisponivel\n");
							opcao='p';
						}
					break;
					case 'c'://OPCAO PARA VER O SALDO
						system("cls");
						printf("------SALDO ATUAL-------\n");
						printf("Saldo atual R$ %d\n",saldo_atual);
						opcao='p';
						printf("------------------------\n");
					break;
					case 'C'://OPCAO PARA VER O SALDO POREM COM LETRAS MAIUCULAS PARA NÃO HAVER ERROS
						system("cls");
						printf("------SALDO ATUAL-------\n");
						printf("Saldo atual R$ %d\n",saldo_atual);
						opcao='p';
						printf("------------------------\n");
					break;
					default:
						printf("------------------------\n");
						printf("OPERACAO FINALIZADA");
						opcao='p';
						opcao1='d';
					break;
				}
			}
	}
	
}
