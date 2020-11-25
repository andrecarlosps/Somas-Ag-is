#include <iostream>
#include <stdio.h>


int main(int argc, char *argv[]) {
    //variaveis //
	int x, y, soma=0, opcao;
  
  // criado o 'DO' junto com 'while' em caso do cliente querer realizar mais de uma soma juntos criam uma repetição, até o cliente sair//
    do{
    	//inicio //
 printf("Bem vindo ao Inovador Sistemas de Somas Ageis!\n \n");

   //cliente digita o primeiro numero ele vai ficar gravado em 'X'//
    printf("Digite o primeiro valor: \n");
    scanf("%d", &x);
  
  //cliente digita o segundo numero ele vai ficar gravado em 'Y'//
    printf("Digite o segundo valor: \n");
    scanf("%d", &y);
  
    //comando 'CLS' para limpar a tela//
	system("cls");
  
  //Soma vai pegar o valor de 'X' e Somar com 'Y' na variavel eu ja disse que soma é igual zero//
  soma=x+y;
  
  // Em tela vai printar o a soma dos valores//
    printf("Total para pagamento: %d\n\n", soma);;
 
  // repetição caso o cliente queira realizar uma nova operação//
        printf("Para realizar uma nova soma Digite 1 ou 2-Sair\n");
        scanf("%d", &opcao);
    }while(opcao == 1);
         
		 //comando 'CLS' para limpar a tela//
      system("cls");

       //FIM//
 printf("Ate mais, ficamos felizes em utilizar nossos servicos\n");
	return 0;
}
