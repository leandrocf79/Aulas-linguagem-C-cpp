#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>      // std::setw 

int main(){
	
char op;
char resposta;
float imc,  peso, altura;


do{ // Cria o loop para a solicitacao se deseja repetir operacao
	//do{
	system("cls");
	printf("\n\t\t Calculadora IMC"); //Cabecalho
	printf("\n\t\t_________________\n\n\n");	
	std::cout<<"\t\tTecle: [1] - Calculadora IMC \n";
	std::cout<<"\t\t       [2] - Sair\n\n\n";
	std::cout<< std::setw(1)<<"Escolha uma opcao para iniciar: ";   // std::setw 
	std::cin>>std::setw(1)>>op;

	switch(op){
	case '1': 
		std::cout<<"\n\nEntre com seu peso em Kg: ";
		std::cin>>peso;
		
		std::cout<<"\nEntre com sua altura: ";
		std::cin>>altura;
		
		imc= peso/(altura*altura);
		std::cout<<"______________________________________________________";
		printf("\n\n\t\tValor do seu IMC: %.2f\n", imc);
		
		if (imc <18.5)
			std::cout<<"\n\t\tMagreza. Esta abaixo do peso ideal.\n______________________________________________________\n\n";
			
		
		else if (imc >=18.5 && imc <25)
			std::cout<<"\n\t\tPeso considerado normal.\n______________________________________________________\n\n";
		
			
		else if (imc >= 25 && imc <30)
			std::cout<<"\n\t\tEsta com sobrepeso.\n______________________________________________________\n\n";
		
			
		else if (imc >=30 && imc <35)
			std::cout<<"\n\t\tObesidade grau I.\n______________________________________________________\n\n";
		
			 
		else if (imc >=35 && imc <40)
			std::cout<<"\n\t\tObesidade grau II. Procure ajuda medica.\n______________________________________________________\n\n";
		
			
		else
		std::cout<<"\n      Obesidade grau III, tambem chamada de morbida. \n\n\t   ***Altamente indicada ajuda medica.\n______________________________________________________\n\n";
		break;
	
	
	case '2':
		break;	
		
		 	
	default:
	//if ((op<1) || (op>2))	
		std::cout<<"\n\n** Selecione uma opcao correta para continuar. **\n\n";
		std::cout<<"______________________________________________________\n\n";
		system("PAUSE");
		break;
			
} // chave do switch
	
	std::cout<<"\n\n\tDeseja voltar ao menu inicial?\n\n\tDigite S para sim ou N para nao: ";
	std::cin>>resposta;
		
} //chave do DO

while (resposta=='s' || resposta=='S' || resposta=='1'); // Aqui vai fazer looping para o DO

//system("PAUSE");

return 0;
}
