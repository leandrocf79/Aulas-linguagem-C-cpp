#include <iostream>

using namespace std;

void valor_alocando_memoria(int* p)  //Ponteiro por valor
{
  p = new int; // Aqui vai chamar para outra região de memória. NADA MUDA FORA DA FUNÇÃO. Esse efeito é somente aqui dentro.
  *p = 7; 
}


void valor_modificando_memoria(int* p)  //Ponteiro por valor 
{
  *p = 8;  // Trocando valor do ponteiro na mesma região de memória.
}


void referencia(int*& p)  // Ponteiro por referência.
{
  p = new int; // Aqui vai chamar para outra região de memória. POR REFERÊNCIA, FORA DA FUNÇÃO, O PONTEIRO QUE CHAMOU TAMBÉM VAI APONTAR PARA O NOVO VALOR.
  *p = 9;
}

int main()
{
  int a  = 1;
  int b  = 2;
  int c  = 3; 
  int* p1 = &a;
  int* p2 = &b;
  int* p3 = &c;

  cout <<"Antes: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout <<"Antes: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << endl;
  
  valor_alocando_memoria(p1); 
  valor_modificando_memoria(p2);
  referencia(p3);  

  std::cout <<"Observe os valores modificados e se houve mudança na região, endereço de memória. 
  cout << "Depois: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout << "Depois: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << "Depois: "<< a <<" "<< b <<" "<< c << endl;

  return 0;
}
