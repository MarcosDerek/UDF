#include <iostream>
using namespace std;

/*3. Escreva um programa que solicite ao usu�rio um n�mero inteiro e ao final apresente na tela
o n�mero informado da seguinte forma: "Foi informado o valor: X"*/

int main(){
	int numero;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &numero);
	
	printf("Foi informado o valor: %i", numero);
}
