#include <iostream>
using namespace std;

/*12. Elabore um algoritmo que indique se um n�mero digitado est� compreendido entre 20 e 90, ou n�o*/

int main(){
	float numero;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	if(numero >= 20 && numero <= 90){
		printf("%0.0f esta entre 20 e 90", numero);
	} else {
		printf("%0.0f nao esta entre 20 e 90", numero);
	}
}
