#include <iostream>
using namespace std;

/*5. Escreva um programa que solicite ao usu�rio um n�mero real e ao final apresente na tela o
n�mero informado formatado com duas casas decimais da seguinte forma: "Voce informou
o numero X.YY"*/

int main(){
	float numero;
	
	printf("Digite um numero real: ");
	scanf("%f", &numero);
	
	printf("Voce informou o numero %0.2f", numero);
}
