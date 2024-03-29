Linguagem C

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n = 10;
    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    return 0;
}



__________________________________
Linguagem C++
	
#include <iostream>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n = 10;
    std::cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << std::endl;
    return 0;
}


----- ou

#include <iostream>

int fibonacci(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0) return a;
    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n = 10;
    std::cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << std::endl;
    return 0;
}





_________________________________
	
Liguagem C#

using System;

class Program
{
    static int fibonacci(int n)
    {
        if (n <= 1) return n;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    static void Main(string[] args)
    {
        int n = 10;
        Console.WriteLine("Fibonacci number at position {0} is {1}", n, fibonacci(n));
    }
}


	
	
_______________________________________
	
	
	
	
	
	
	
	


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


