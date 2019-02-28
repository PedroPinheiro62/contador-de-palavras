/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

/*Aluno: Pedro Jairo Nogueira Pinheiro Neto
 *RA: 156992
 */

#include <stdio.h>

int main() {
	//Contador inicializado em 0
	int counter;
  	char c;
	
	counter = 0;
	
	//Percorremos a serie de caracteres um a um checando seus valores com a tabela ASCII.
  	do{
		//Se encontramos uma letra, trata-se de uma palavra.
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
			counter = counter + 1;
			//Percorremos a palavra ate o fim e adicionamos 1 ao contador.
			while ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
				scanf("%c", &c);
			}
		}
		//Se encontramos um algorismo, trata-se de um numero.
		else if(c >= 48 && c <= 57){
			counter = counter + 1;
			//Percorremos um numero ate o fim.
			while (c >= 48 && c <= 57){
				scanf("%c", &c);
			}
			//checamos se o numero eh um numero decimal separado por um ponto.
			if (c = 46){
				scanf("%c", &c);
				if(c >= 48 && c <= 57){
					while (c >= 48 && c <= 57){
						scanf("%c", &c);
					}
				}
			}
		}
		//Se nao se trata nem de um algorismo nem de uma letra, pegamos o proximo caractere da serie.
		else{
			scanf("%c", &c);
		}
  	}while (c != '\n'); 

	//Impressao do numero de palavras presentes na serie de caracteres.
  	printf("%d\n", counter);
  	return 0;
}
