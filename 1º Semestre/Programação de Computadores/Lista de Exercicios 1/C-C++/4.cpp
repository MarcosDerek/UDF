#include <iostream>
using namespace std;

/*4. Escreva um programa que solicite ao usu�rio dois n�meros inteiros e ao final apresente na
tela os dois n�meros informados da seguinte forma: "Voce informou os numeros X e Y"*/

int main(){
	int primeiro, segundo;
	
	printf("Digite o primeiro numero inteiro: ");
	scanf("%i", &primeiro);
	
	printf("Digite o segundo numero inteiro: ");
	scanf("%i", &segundo);
	
	printf("Voce informou os numeros %i e %i", primeiro, segundo);
}
