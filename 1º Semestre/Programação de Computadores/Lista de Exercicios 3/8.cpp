#include <iostream>
using namespace std;

/*8. Elabore um algoritmo que leia um n�mero, e se ele for maior do que 20, imprimir a metade
desse n�mero, caso contr�rio, imprimir o dobro do n�mero*/

int main(){
	float numero;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	if(numero >= 20){
		printf("%0.2f e maior que 20 e sua metade e: %0.2f", numero, numero/2);
	} else {
		printf("%0.2f nao e maior que 20 e seu dobro e: %0.2f", numero, numero*2);
	}
}
