#include <iostream>
using namespace std;

/*7. Escreva um programa que solicite ao usu�rio um n�mero inteiro e um n�mero real e ao final
apresente na tela os dois n�meros informados formatando com duas casas decimais
somente o n�mero real da seguinte forma: "Voce informou os numeros N e X.YY"*/

int main(){
	int primeiro;
	float segundo;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &primeiro);
	
	printf("Digite um numero real: ");
	scanf("%f", &segundo);
	
	printf("Voce informou os numeros %i e %0.02f", primeiro, segundo);
}
