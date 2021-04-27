#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h> // necessaria para funcionar as fun��es matematicas ( raiz quadrada )

// CALCULADORA COMANDOS BASICOS **** + - * / % R�*****
// Desenvolvida por JefersonL16 -- TESTE DE FUN��ES E PROCEDIMENTOS


float num1, num2, resultado;	

void Entrada() {  // PROCEDIMENTOS
	
	setlocale(LC_ALL,""); // 	Comando para acentua��o
	
	printf("\n\nDigite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("\n\nDigite o segundo n�mero: ");
	scanf("%f", &num2);	}
	
void Entrada2 () { // Entrada para raiz quadrada
	
	printf("\n\nDigite um n�mero:");
	scanf("%f", &num1);
}

float Adicao (){ // FUN��ES
	
	resultado = num1 + num2;
	return (resultado); }

float subtracao (){
	
	resultado = num1 - num2;
	return (resultado); }

float multiplicacao (){
	
	resultado = num1 * num2;
	return (resultado); }

float divisao (){
	
	resultado = num1 / num2;
	return (resultado); }
	
float Porcentagem () {
	
	resultado = num1 * (num2 / 100);
	return(resultado);
}

float quadrado2 () {
	
	resultado = num1 * num1;
	return(resultado);
}

float raizquadrada (){
	
	resultado = sqrt(num1); // comando sqrt da raiz quadrada
	return(resultado);
}
	
main (){
	
	setlocale(LC_ALL,"");
	
	int opcao=0;
	float result;
	char decisao[1]; 
	//char escolha[2]= {'S','s'};
	
	while ( opcao != 8) {
		
		system("cls");
		printf("\n1-adi��o");
		printf("\n2-subtra��o");
		printf("\n3-multiplica��o");
		printf("\n4-divis�o");
		printf("\n5-porcentagem");
		printf("\n6-ao quadrado");
		printf("\n7-raiz quadrada");
		printf("\n8-sair");
		printf("\n\n Escolha uma opera��o: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			
			case 1: {

				Entrada();
				result = Adicao ();
				printf("\n\n%.1f + %.1f = %.1f\n\n",num1,num2, result);
				system("PAUSE");
				break;
			}
			
			case 2: 
				
				Entrada ();
				result = subtracao();
				printf("\n\n%.1f - %.1f = %.1f\n\n",num1,num2, result);
				system("PAUSE");
				break;
			
			
			case 3: 
				
				Entrada ();
				result = multiplicacao();
				printf("\n\n%.1f x %.1f = %.1f\n\n",num1,num2, result);
				system("PAUSE");
				break;
			
			
			case 4: 
				
				Entrada ();
				result = divisao();
				printf("\n\n%.1f / %.1f = %.1f\n\n",num1,num2, result);
				system("PAUSE");
				break;
			
			case 5: 
				
				Entrada ();
				result = Porcentagem();
				printf("\n\n%.1f por cento de %.1f = %.1f\n\n",num1,num2, result);
				system("PAUSE");
				break;
			
			case 6: 
				 
				 Entrada2 ();
				 result = quadrado2();
				 printf("\n\n%.1f ao quadrado � = %.1f\n\n", num1, result);
				 system("PAUSE");
				 break;
			
			case 7: 
				 
				 Entrada2 ();
				 result = raizquadrada();
				 printf("\n\nA raiz quadrada de %.1f � = %.1f\n\n", num1, result);
				 system("PAUSE");
				 break;
			
			case 8: 
				
				system("cls");
				printf("Deseja sair? Sim(S) ou N�o(N)");
				scanf("%s", &decisao[0]);				
				
				
				if ( decisao[0] == 's','S'){
					
					exit(0);
				}
				else {
					
					return(opcao); }
			
			
			default: 
				
			printf("\n\nEssa fun��o n�o existe!\n\n");
			
		}
	}
	
	getch();
	return 0;
}






