#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma(float num1, float num2);
float divisao(float num1, float num2);
float multiplicacao(float num1, float num2);


int main(){
	setlocale(LC_ALL, "portuguese");
	float num001, num002;
	std::cout<<"Digite um número: ";
	std::cin>>num001;
	
	std::cout<<"\n\nDigite outro número: ";
	std::cin>>num002;

	std::cout<< "\n\nSoma: "<<soma(num001, num002);
	std::cout<< "\nDivisão: " <<divisao(num001, num002);
	std::cout<< "\nMultiplicação: "<<multiplicacao(num001, num002);
	std::cout<<std::endl;
system("PAUSE");
return 0;
}


float soma(float num1, float num2)
{
	return num1 + num2;
}

float divisao(float num1, float num2)
{
	return num1 / num2;
}

float multiplicacao(float num1, float num2)
{
	return num1 * num2;
}
