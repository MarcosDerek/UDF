#include <iostream>
using namespace std;

/*8. Escreva um programa que solicite ao usu�rio a primeira letra de seu nome e ao final
apresente na tela a letra informada pelo usu�rio da seguinte forma: "Voce digitou w"*/

int main(){
	string letra;
	
	printf("Digite a primeira letra do seu nome: ");
	scanf("%s", &letra);
	
	printf("Voce digitou %s", &letra);
}
