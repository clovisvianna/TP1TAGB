#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	float numeros [3] [5];
	int linha, coluna;
  
    for ( linha = 0; linha < 3; linha++) {
    	for ( coluna = 0; coluna < 5; coluna++ ) {
      		printf ("Digite o elemento [%d, %d] da matriz= ", linha, coluna);
      		scanf ("%f", &numeros [linha] [coluna]);
    	}
    	printf ("\n");
	}	
  
	for (linha = 0; linha < 3; linha++) {
    	for (coluna = 0; coluna < 5; coluna++) {
    		if (((linha == 0) && (coluna == 0)) || ((linha == 1) && (coluna == 2)) || ((linha == 2) && (coluna == 4))){
    			printf ("O elemento[%d, %d] da matriz é %.2f\n", linha, coluna, numeros [linha] [coluna]);
      			printf ("\n");	
			}
   		}	
	}

	printf ("\n\nFim do processamento.");
	
	getch();
	
	return(0);
}
