#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* Este projeto deve apresentar resultado float de 0 a 10 sendo 4 testes avaliativos
 com peso de 40% final, pontos extras para nota final e 1 prova com peso de 60% final.
  Aprovado se >=5 nota final.
*/

int main(){
float ava1, ava2, ava3, ava4, prova, mediaAva, notaFinal, pExtra=0;

std::cout<<"Nota do teste avaliativo semana 1: ", "\n";
std::cin>>ava1; 

std::cout<<"Nota do teste avaliativo semana 2: ", "\n";
std::cin>>ava2;

std::cout<<"Nota do teste avaliativo semana 3: ", "\n";
std::cin>>ava3;

std::cout<<"Nota do teste avaliativo semana 4: ";
std::cin>>ava4;
std::cout<<std::endl;

std::cout<<"Nota da PROVA: ";
std::cin>>prova;
std::cout<<std::endl;

std::cout<<"Pontos extras na nota final: ";
std::cin>>pExtra;
std::cout<<std::endl;

/* o calculo da média e resultado tem que valer 40% da nota final de 0 a 10,  
entao foi feita diretamente para o resultado desejado dividindo apenas por 10.

		OBSERVAÇÃO: exemplo, se fossem 5 avaliativas ou os pontos extras colocados na nota avaliativa:
notaAva=(n1+n2+n3+n4+n5)/5;
notaAva=(notaAva*0.4);


		A ideia foi abstrair e deixar o processamento mais rápido!!
*/
mediaAva=(ava1+ava2+ava3+ava4)/10;

// A nota da prova precisa valer 60%
prova= prova*0.6;

notaFinal=mediaAva+prova+ pExtra;

// Exibir nota final

if (notaFinal>=10){
std::cout<<"\n\nSua nota media do bimestre foi: 10"<<std::endl;
}
else{
std::cout<<"___________________________________________________________"<<std::endl;
std::cout<<"\n\nSua nota final desta materia foi: " <<notaFinal<<std::endl;
}

// Exibir se passou ou não 

if (notaFinal>=5){
std::cout<<"\n\n\tParabens! Voce esta aprovado nesta materia.\n\n\n";
}
else{
std::cout<<"\n\n\tReprovado. Aguarde a chamada para dependencia.\n\n\n";
}

std::cout<<"___________________________________________________________"<<std::endl;
system("PAUSE");

return 0;
}
