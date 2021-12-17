#include <iostream>
#include <locale.h>
#include <cmath> // para usar Raiz quadrada, sqrt(), e potencia, pow(2, 3) --> 2**3 

//FUNÇÕES: Iniciar com letra maiuscula por padrão.
float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
double Divisao(double num1, double num2);
float Multiplicacao(float num1, float num2);
float Media(float num1, float num2);
double Potencia(double num1, double num2);
float RaizQuadrada(float num1); // <--- unico número
float RaizQuadrada2(float num2);

int main(){
	setlocale(LC_ALL, "portuguese");
	float Num01, Num02;
	std::cout<<"Digite o primero número: ";
	std::cin>>Num01;
	
	std::cout<<"\n\nDigite o segundo número: ";
	std::cin>>Num02;

	std::cout<< "\n\nSoma: "<<Soma(Num01, Num02);
	std::cout<< "\nSubtração: "<<Subtracao(Num01, Num02);
	std::cout<< "\nDivisão: " <<Divisao(Num01, Num02);
	std::cout<< "\nMultiplicação: "<<Multiplicacao(Num01, Num02);
	std::cout<< "\nMédia: "<<Media(Num01, Num02);
	std::cout<< "\nPotenciação: "<<Potencia(Num01, Num02);
	std::cout<< "\nRaiz Quadrada do primeiro número: "<<RaizQuadrada(Num01);
	std::cout<< "\nRaiz Quadrada do segundo número: " <<RaizQuadrada2(Num02)<<"\n";
	std::cout<<std::endl;
system("PAUSE");
return 0;
}


float Soma(float num1, float num2){
	return num1 + num2;
}

float Subtracao(float num1, float num2){
	return num1 - num2;
}

double Divisao(double num1, double num2){
	return num1 / num2;
}

float Multiplicacao(float num1, float num2){
	return num1 * num2;
}

float Media(float num1, float num2){
	return (num1 + num2)/2;
}

double Potencia(double num1, double num2){
	return pow(num1, num2);
}

float RaizQuadrada(float num1){
	return sqrt(num1);
}

float RaizQuadrada2(float num2){
	return sqrt(num2);
}


