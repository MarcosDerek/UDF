#include <iostream>
using namespace std;

/*7. Desenvolva um algoritmo que classifique um n�mero inteiro fornecido pelo usu�rio como
par ou �mpar*/

int main(){
	int numero;
	
	printf("digite um numero inteiro: ");
	scanf("%i", &numero);
	
	if(numero % 2 == 0){
		printf("O numero %i que voce informou e PAR", numero);
	} else {
		printf("O numero %i que voce informou e IMPAR", numero);
	}
}
