#include <iostream>
using namespace std;

/*10. Elabore um algoritmo que solicite ao usu�rio uma palavra e um n�mero inteiro que
indicar� a quantidade de vezes que a palavra digitada ser� impressa na tela, um em cada
linha.*/

int main(){
	int numero;
	string palavra;
	
	cout << "Digite uma palavra: ";
	cin >> palavra;
	
	cout << "Digite um numero inteiro: ";
	cin >> numero;
	
	for(int i = 1; i <= numero; i++ ) {
		cout << i << ". " << palavra << "\n";
	}
}
