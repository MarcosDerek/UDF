#include <iostream>
using namespace std;

//7. Escreva um programa que solicite ao usu�rio um n�mero inteiro e um n�mero real e ao final
//apresente na tela os dois n�meros informados formatando com duas casas decimais
//somente o n�mero real da seguinte forma: "Voce informou os numeros N e X.YY"

int main(){
	float primeiro, segundo;
	
	printf("Digite um numero inteiro: ");
	scanf("%f", &primeiro);
	
	printf("Digite um numero real: ");
	scanf("%f", &segundo);
	
	printf("Voce informou os numeros %0.0f e %0.02f", primeiro, segundo);
}
