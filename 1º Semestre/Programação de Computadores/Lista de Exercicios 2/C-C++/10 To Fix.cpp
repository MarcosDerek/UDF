#include <iostream>
using namespace std;

/*10. O sistema de avalia��o de determinada disciplina � composto por tr�s provas. 
A primeira prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Considerando que a m�dia para aprova��o � 6.0,
fa�a um algoritmo para calcular a m�dia final de um aluno desta disciplina e dizer se o aluno foi aprovado ou n�o*/ 

int main(){
	float nota1, nota2, nota3;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	if(nota1 + nota2 + nota3 >= 6){
		printf("Voce foi aprovado! Sua media foi %0.2f pontos", (nota1 * 1 + nota2 * 2 + nota3 * 3)/6);
	} else {
		printf("Voce foi reprovado! Sua media foi %0.2f pontos", (nota1 * 1 + nota2 * 2 + nota3 * 3)/6);
	}
}
