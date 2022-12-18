/*Construa um programa em C que contenha um Menu Principal com as opções:
-Adicionar valores ao vetor;
-Remover um valor;
-Rotinas especiais;
-Exibir Elementos;

O menu 'Rotinas Especiais' deve conter:
-Mostrar maior elemento;
-Mostrar menor elemento;
-Exibir a soma total;
-Exibir a média;
-Retornar ao menu principal;

Lembre-se de fazer uso dos conhecimentos em:
-Switch Case;
-Vetores;
-Funções;*/

#include<stdio.h>
#include<locale.h>



int opcao,vetor[7];



void adicionar(){
		int i;
			for(i=0;i<7;i++){
				printf("Digite o %do Valor: ",i+1);
				scanf("%d",& vetor[i]);
							}
}



void remover(){
	int valor,i;	
			printf("\n\nDigite o valor que deseja remover: ");
			scanf("%d",&valor);
				for(i=0;i<7;i++){
					if(valor==vetor[i]){
						vetor[i]=0;
										}
								}
}



void exibir(){
	int i;
			printf("\nEstes foram respectivamente os Valores escolhidos:\n\n\n\n\n");
			for(i=0;i<7;i++){
				printf("%d\n",vetor[i]);
			}
}



void maiorvalor(){
	int maior=vetor[0],i;
		for(i=0;i<7;i++){
			if(vetor[i]>maior){
				maior=vetor[i];
			}
		}
	printf("O Maior Valor Digitado é: %d\n\n",maior);
}



void menorvalor(){
	int menor=vetor[0],i;
		for(i=0;i<7;i++){
			if(vetor[i]<menor){
				menor=vetor[i];
			}
		}
	printf("O Menor Valor Digitado é: %d\n\n",menor);
}


void soma(){
	int soma=0,i;
		for(i=0;i<7;i++){
			soma=soma+vetor[i];
	}
	printf("A soma de todos os Elementos é: %d\n\n",soma);
}



void media(){
	int soma=0,i;
	float media;
		for(i=0;i<7;i++){
			soma=soma+vetor[i];
			media=soma/7;
	}
		
		printf("A Média dos Elementos é igual à: %f\n\n",media);
}



int main(){
	while(0==0){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("MENU PRINCIPAL\n\n\n");
	printf("1- Adicionar Valores ao Vetor.\n");
	printf("2- Remover um Valor Especícfico.\n");
	printf("3- Rotinas Especiais.\n");
	printf("4- Exibir os Elementos.\n");
		
		
	
			printf("\nDigite a opção escolhida: \n");
			scanf("%d",& opcao);
			
			
	switch (opcao){
		
		case 1:{
			adicionar();
			break;
				}
					
		case 2:{
			remover();
			break;
				}
				
		case 3:{
			printf("\nMENU ROTINAS ESPECIAIS\n\n\n");
			printf("1- Mostrar o Maior Elemento do Vetor.\n");
			printf("2- Mostrar o Menor Elemento do Vetor.\n");
			printf("3- Exiir a Soma Total dos Elementos.\n");
			printf("4- Exibir a Média dos Elementos.\n");
			printf("5- Retornar ao Menu Princial.\n");
			printf("\nDigite a opção escolhida: \n\n");
			scanf("%d",& opcao);
			
			switch (opcao){
		
			case 1:{
				maiorvalor();
				break;
				}
					
			case 2:{
				menorvalor();
				break;
				}
				
			case 3:{
				soma();
				break;
				}
				
			case 4:{
				media();
				break;
					}
		
			case 5:{
				printf("Retornando...\n\n");
				break;
					}
			default :
				printf("Opção Inválida!\n\n\n\n\n");
			
				break;
						}	
			break;
				}
				
		case 4:{
			exibir();
			break;
		}
		
		default :
			printf("Opção Inválida!\n\n\n\n\n");
			break;					
	}
	
	
	}
	
	//Created by Wildson Santos
	
	return 0;
}

