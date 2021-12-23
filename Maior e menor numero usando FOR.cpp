#include <iostream>
#include <stdlib.h>
#include <locale.h>

int Array[50];
double Min, Max;
int NumElementos;

int main(){
	setlocale(LC_ALL, "portuguese");
	std::cout<<"Entre com a quantidade de elementos: ";
	std::cin>>NumElementos;
	std::cout<<"\n\nEntre com os números a serem verificados\n\n";
	
	for (int i=0; i< NumElementos; i++){
	std::cout<<"Valor "<< (i+1)<< ": ";
	std::cin>>Array[i];
	}

	Min=Array[0];
	Max=Array[0];	
			
	for (int i=0; i< NumElementos; i++){
	if (Min>Array[i])
	Min=Array[i];
	
	else if (Max<Array[i])
	Max=Array[i];
	}
	std::cout<<"\nO menor número é "<<Min<<" e o maior número é "<<Max<<"\n\n";
	
	
system("PAUSE");
	
return 0;
}
