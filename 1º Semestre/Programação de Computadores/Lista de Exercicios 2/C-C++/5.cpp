#include <iostream>
using namespace std;

/*5. Elabore um algoritmo que leia um n�mero inteiro e imprima uma das mensagens: � m�ltiplo
de 3, ou, n�o � m�ltiplo de 3*/

int main(){
	int numero;
	
	printf("digite um numero inteiro: ");
	scanf("%i", &numero);
	
	if(numero % 3 == 0){
		printf("e multiplo de 3", numero);
	} else {
		printf("nao e multiplo de 3", numero);
	}
}
