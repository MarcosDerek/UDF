#include <iostream>
using namespace std;

/*3. Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela se o
n�mero informado � maior que dez, se � menor que dez, ou se � igual a dez*/

int main(){
	float numero;
	
	printf("digite um numero real: ");
	scanf("%f", &numero);
	
	if(numero > 10){
		printf("O numero que voce informou e MAIOR que 10");
	} else if(numero == 10) {
		printf("O numero que voce informou e IGUAL que 10");
	} else {
		printf("O numero que voce informou e MENOR que 10");
	}
}
