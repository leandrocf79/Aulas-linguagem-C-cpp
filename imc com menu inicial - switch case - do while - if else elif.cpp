#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main(){
	
int op;
char resposta;
float imc,  peso, altura;

do{ // Cria o loop para a solicitacao se deseja repetir operacao
	printf("\n\t\t Calculadora IMC \n\n\n"); //Cabecalho
	std::cout<<"\t\t 1.  Calculadora IMC \n";
	std::cout<<"\t\t 2.  Sair\n\n\n";
	std::cout<<"Escolha uma opcao para iniciar: ";
	std::cin>>op;
		
	switch (op) {
	case 1: 
	std::cout<<"\n\nEntre com seu peso em Kg: ";
	std::cin>>peso;
	
	std::cout<<"\nEntre com sua altura: ";
	std::cin>>altura;
	
	imc= peso/(altura*altura);
	std::cout<<"___________________________________________";
	printf("\n\n\t\tValor do seu IMC: %.2f\n", imc);
	
	if (imc <18.5)
		std::cout<<"\n\t\tEsta abaixo do peso ideal.\n\n";
	
	else if (imc >=18.5 && imc <25)
		std::cout<<"\n\t\tPeso considerado normal.\n\n";
		
	else if (imc >= 25 && imc <30)
		std::cout<<"\n\t\tEsta com sobrepeso.\n\n";
		
	else if (imc >=30 && imc <35)
		std::cout<<"\n\t\tObesidade grau I.";
		 
	else if (imc >=35 && imc <40)
		std::cout<<"\n\t\tObesidade grau II. Procure ajuda medica.\n\n";
		
	else
	std::cout<<"\n\t\tObesidade grau III, tambem chamada de morbida. \n\n\t\t***Altamente indicada ajuda medica.\n\n";
	
			
	case 2:
	break;
} // chave do switch
	std::cout<<"\n\n\tDeseja voltar ao menu inicial?\n\n\tDigite S para sim ou N para nao: ";
	std::cin>>resposta; // Variavel para fazer o loop 
	std::cout<<"___________________________________________";
} //chave do DO

while (resposta=='s' || resposta=='S' || resposta==1); // Aqui vai fazer looping para o DO

//system("PAUSE");

return 0;
}
