#include <iostream>
using namespace std;

/*9. Elabore um algoritmo que solicite ao usu�rio um n�mero inteiro que indicar� a quantidade
de vezes que o texto "Hello World!" ser� impresso na tela, um em cada linha.*/

int main(){
	int numero;
	cout << "Digite um numero inteiro: ";
	cin >> numero;
	
	for(int i = 1; i <= numero; i++ ) {
		cout << i << ". Hello World\n";
	}
}
