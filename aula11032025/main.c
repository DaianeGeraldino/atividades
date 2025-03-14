#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double soma(double num1, double num2){
	return num1 + num2;
}

double subtracao(double num1, double num2){
	return num1 - num2;
}

double divisao(double num1, double num2){
	return num1/num2;
}

double multiplicacao(double num1, double num2){
	return num1*num2;
}

int main(int argc, char** argv) {
	char operacao;
	double a, b;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	printf("Digite o operador(+, -, /, *): ");
	scanf("%c", &operacao);
	
	switch (operador){
		case '+':
			printf(soma(a, b));
			break;
		case '-':
			printf(subtracao(a, b);
			break;
		case '/':
			printf(divisao(a, b));
			break:
		case '*':
			printf(multiplicacao(a, b));
			break;
	}
	
	return 0;
}
