// PRATICANDO C e C++ com as aulas distribuidas no https://github.com/professormarcosp/AprendaCParaGamesUE4
								
					PROGRAMAÇÃO ESTRUTURADA (segunda parte será orientada a objetos) TOP DOWN (DE CIMA PARA BAIXO)
								
			                          ********** OBSERVAÇÃO***********

	O conteúdo disponibilizado aqui serve para ajudar na hora do estudo, portanto, 
este não se trata de um arquivo executável.
	Será atualizado constantemente.
*************************************************************************************
CUIDADO ao usar o "using namespace std;" podem haver conflitos com utilização de comandos


//ACENTUAÇÃO

#include <locale.h>  // acentuação.

int main() {
	setlocale(LC_ALL, "portuguese");  //Define idioma de acentuação.   #include <locale.h> 
	std:: ...
}

						   
***************************


#include <iomanip>

// Comentario de uma linha
/* Comentario
de 
varias 
linhas*/

int main(int argc, char** argv) {
// o primeiro digito eh a cor do fundo(4) e a segunda (7) do texto
system("color 53");	
std::cout<<"Teste"<< std::endl;	
std::cout
	<<"1"<< std::endl
	<<"  2"<<std::endl
	<<"    3\n"<<std::endl
	<<"       4"<<"\n"
	<<"          5"<<
	std::endl;

std::cout<<"Eh possivel"<<std::endl<<"dar ENTER no texto"<<std::endl<<"mesmo escrevendo tudo na mesma"<<std::endl<<"linha"<< std::endl;
	
system("pause");
system("color 07");

//************

	int numero;
	numero = 45;
	
	std::cout<<"\n\n\nValor do numero:"<<numero<<std::endl;
	std::cout<<"Tamanho na memoria da variavel numero: "<<sizeof(numero)<<" Bytes"<<std::endl;
	std::cout<<"Endereco carregado na memoria: "<< &numero 
	<<"\n\n\n";
	system("PAUSE");

//************

int Num_Computadores=100;
int Serie_Computadores=11111;

std::cout<<"\n\n*****************************************"<<std::endl;
std::cout<<"\tNum_Computadores: "<<Num_Computadores<<std::endl;
std::cout<<"\tSerie_Computadores: "<<Serie_Computadores<<std::endl;
std::cout<<"*****************************************\n\n"<<std::endl;
system("PAUSE");

//*************

int Num;
	char Caractere = 'A';
        Num = Caractere;
        std::cout << "\nValor do numero do caracter A na tabela ASCII: "<< Num<<"\n\n";
 		system("PAUSE");

/* Enquanto tiver -->      int Num;
RESPOSTA é 65, pois Número é um inteiro e neste caso vai receber o 
valor contido na variável Caractere. Como a variável caractere contém 
dentro dela a letra A será coletado o valor inteiro de A na tabela ASCII que é 65

*** Se colocar -->     char Num;
a RESPOSTA será a letra A
*/

//***************************************
	if (system("cls")){
	}else{
system("PAUSE");}

int numero1 = 55;
float numero2 = 72.95;
double numero3 = 34.34536657567567456754453453452635756;
	std::cout<<"\n\n************************************************\n";
	std::cout<<"int";
	std::cout<<"\n\n\nValor do numero1: "<<numero<<std::endl;
	std::cout<<"Tamanho na memoria da variavel numero 1:  "<<sizeof(numero1)<<" Bytes"<<std::endl;
	std::cout<<"Endereco carregado na memoria: "<< &numero1 
	<<"\n\n";
	
	std::cout<<"\n_______________________\n";
	std::cout<<"float";
	std::cout<<"\n\n\nValor do numero2: "<<numero2<<std::endl;
	std::cout<<"Tamanho na memoria da variavel numero 2:  "<<sizeof(numero2)<<" Bytes"<<std::endl;
	std::cout<<"Endereco carregado na memoria: "<< &numero2<<"\n\n";
	
	std::cout<<"\n_______________________\n";
	std::cout<<"double";
	std::cout<<"\n\n\nValor do numero3: "<<numero3<<std::endl;
	std::cout<<"Tamanho na memoria da variavel numero 3:  "<<sizeof(numero3)<<" Bytes"<<std::endl;
	std::cout<<"Endereco carregado na memoria: "<< &numero3<<"\n\n";
	std::cout<<"\n************************************************\n\n";
	system("PAUSE");


//***************************************

//#include <iomanip>
std::cout<<"\n_______________________\n";
std::cout<<"Para double, neste caso, foi incluido iomanip"<<std::endl;
std::cout<<"\ndouble com include iomanip e setprecision (10)";   // coloca 2 digitos após a vírgula   < ----- std::scientifc<<   coloca em anotação científica



// incluso o     std::setprecision (10) 
	std::cout<<"\n\n\n\tValor do numero3: "<< std::setprecision (10)<<numero3<<std::endl;     // coloca 2 digitos após a vírgula   < ----- std::fixed<<std::setprecision
	std::cout<<"\tTamanho na memoria da variavel numero 3:  "<<sizeof(numero3)<<" Bytes"<<std::endl;
	std::cout<<"\tEndereco carregado na memoria: "<< &numero3<<"\n\n";
	std::cout<<"\n************************************************\n\n";
system("PAUSE");
	if (system("cls")){
	}else{system("PAUSE");}

//****************************************

#include <iostream>

int main()
{
	std::cout << "Tamanho char : " << sizeof(char) << std::endl;
	std::cout << "Tamanho int : " << sizeof(int) << std::endl;
	std::cout << "Tamanho short int : " << sizeof(short int) << std::endl;
	std::cout << "Tamanho long int : " << sizeof(long int) << std::endl;
	std::cout << "Tamanho long long int : " << sizeof(long long int) << std::endl;
	std::cout << "Tamanho float : " << sizeof(float) << std::endl;
	std::cout << "Tamanho float : " << sizeof(long float) << std::endl;
	std::cout << "Tamanho double : " << sizeof(double) << std::endl;
	std::cout << "Tamanho long double : " << sizeof(long double) << std::endl;
	std::cout << "Tamanho wchar_t : " << sizeof(wchar_t) << std::endl;
	system("PAUSE");

	return 0;
}

/*Código alterado devido a excelente contribuição do Aluno Thiago Castro de meu curso na UDEMUY que indicou que a saída estava incorreta para os modificadores unsigned
Fiz a alteração e agora está OK*/
#include <limits>
#include <iostream>

int main()
{
	// \t insere uma tabulação 
	std::cout << "Tipo\t\t Minimo\t\t Maximo\n\n";

	std::cout << "bool\t\t"
		<< +std::numeric_limits<bool>::min() << '\t' << '\t'
		<< +std::numeric_limits<bool>::max() << '\n';
	std::cout << "char\t\t"
		<< +std::numeric_limits<char>::min() << '\t' << '\t'
		<< +std::numeric_limits<char>::max() << '\n';
	std::cout << "unsigned char\t"
		<< +std::numeric_limits<unsigned char>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned char>::max() << '\n';
	std::cout << "short\t\t"
		<< +std::numeric_limits<short>::min() << '\t' << '\t'
		<< +std::numeric_limits<short>::max() << '\n';
	std::cout << "unsigned short\t"
		<< +std::numeric_limits<unsigned short>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned short>::max() << '\n';
	std::cout << "int\t\t"
		<< +std::numeric_limits<int>::min() << '\t'
		<< +std::numeric_limits<int>::max() << '\n';
	std::cout << "unsigned int\t"
		<< +std::numeric_limits<unsigned int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned int>::max() << '\n';
	std::cout << "long int\t"
		<< +std::numeric_limits<long int>::min() << '\t'
		<< +std::numeric_limits<long int>::max() << '\n';
	std::cout << "unsigned long int "
		<< +std::numeric_limits<unsigned long int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned long int>::max() << '\n';
	std::cout << "long long int\t"
		<< +std::numeric_limits<long long int>::min() << '\t' << '\t'
		<< +std::numeric_limits<long long int>::max() << '\n';
	std::cout << "float\t\t"
		<< +std::numeric_limits<float>::min() << '\t' << '\t'
		<< +std::numeric_limits<float>::max() << '\n';
	std::cout << "double\t\t"
		<< +std::numeric_limits<double>::min() << '\t' << '\t'
		<< +std::numeric_limits<double>::max() << '\n';
	std::cout << "long double\t"
		<< +std::numeric_limits<long double>::min() << '\t' << '\t'
		<< +std::numeric_limits<long double>::max() << '\n';
	system("PAUSE");

}

#include <iostream>
//Para usar #define precisa colocar aqui abaixo dos includes
//#define NUM_VIDAS 10
//Observe que não tem ; no final!!!

int main()
{
	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de Vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Endereço de Memória de NUM_VIDAS: " << &NUM_VIDAS << "\n";
	system("PAUSE");

}


Para ajustar de forma simples você pode usar espaços via string - std::string(30, ' ')
Neste caso você está colocando 30 caracteres espaço ' ' na tela
veja o código e saída dele e lembre de colocar #include <string>
#include <iostream>
#include <string>

#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw      std::cout<< std::setw(10)<<"Escolha uma opcao para iniciar: ";

int main()
{
int Numero01, Numero02;
std::cout << std::string(30, ' ') << "Digite o primeiro numero: ";
std::cin >> Numero01;
std::cout << std::string(30, ' ') << "Numero01 = " << Numero01 << std::endl;
std::cout << std::string(30, ' ') << "Digite o segundo numero: ";
std::cin >> Numero02;
std::cout << std::string(30, ' ') << "Numero02 = " << Numero02 << std::endl << std::string(30, ' ');
system("PAUSE");
}
Existem claro outras opções mais elaboradas
Existe uma função de nome std::setw(n ). A função setw recebe como parâmetro o tamanho do campo de texto que você deseja colocar na tela e justifica este texto à direita. Portanto na função setw(n) este n
indica o tamanho de caracteres que o campo de saída do fluxo cout vai possuir, ou seja, define a largura do campo a ser usada nas operações de saída.
Como assim?
Considere e execute o código abaixo
include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
cout << setw(10) << "ABCDEFGHJ" << "\n";
system("PAUSE");
}
Observe que no código acima queremos colocar na tela as letras ABCDEFGHIJ que possui 10 caracteres . Ocorre que se fizermos setw(10) não desloca nada, pois você definiu que o campo deve ter a largura de 10
caracteres, ou seja que o campo de saída do fluxo de cout deve ter tamanho 10. Mas ABCDEFGHIJ já tem 10 de largura/tamanho. Logo a saída não desloca nada pois o texto vai se encaixar nesta largura de
tamanho 10 e não sobra nada.
Agora tente colocar setw(11) e veja o que acontece. Neste caso o tamanho, a largura que especificou em setw é 11. Como o texto tem 10 caracteres o comando setw justifica à direita este texto e o desloca uma
unidade
E se você colocar setw(20)? Veja que agora a largura do fluxo será 20 e ai o texto será deslocado 10 e ocupará as 10 posições restantes à direita totalizando a largura de 20 especificada por setw(20)
Você pode usar o código abaixo para por exemplo centralizar seu texto através da função std::setw
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
 string str = "Texto Centralizado";
 int console_width = 120;// Largura do seu console.
 int len = str.length();// Tamanho da String
 cout << setw((console_width / 2) + (len / 2)) << str << endl;
 //ou seja o mesmo que 120/2 = 60 ou setw(60);
 system("PAUSE");
}
Observe que setw((console_width / 2) + (len / 2)) pega o tamanho(largura) da tela que é 120 e dividi por dois. Logo será 120/2 = 60. Porém ainda temos que considerar o tamanho do texto que tem 18 contando
com o caractere espaço. Então para o texto ficar centralizado vai ficar metade na esquerda do centro e metade na direita do centro da tela. Assim temos que somar ao setw o tamamho da tela/2 mais o
tamamhodo texto/2.
Neste caso o texto será centralizado, mas estamos usando o que chamados de NUMERO MÁGICO para a largura do console e isso não é recomendado. Mesmo porque a largura de cada console pode variar, no
geral é 40 mais no meu coloquei 120. Para funcionar você precisa configurar o tamanho do console como 120.
Para ver ou alterar a largura do console clique com botão direito do mouse sobre a barra branca e escolha propriedades
Vá até a aba layout e verifique que podemos ver ou alterar a largura e até altura do terminal. A largura será usada no cálculo para definir a posição do texto centralizado na tela
Execute o código e veja a saída
Mas e se você quiser ao executar o programa já modificar automaticamente o tamanho do console windows (CMD) ou prompt de comandos ? Você pode modificar as linhas e colunas da tela com o comando
system assim:
system("MODE CON: COLS=80 LINES=40");
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
 system("MODE CON: COLS=80 LINES=40"); // Já coloca a janela com 80 de largura e 40 altura
 string str = "Texto Centralizado";
 int console_width = 80;// Largura do seu console.
 int len = str.length();// Tamanho da String
 cout << setw((console_width / 2) + len / 2) << str << endl;
 system("PAUSE");
}
Execute o código acima e veja o resultado
Obs: Caso você receba a informação de aviso(Warning) do compilador
faça o seguinte:
isso é apenas um aviso que indica que os valores limites das variáveis podem ser ultrapassados pois são do tipo inteiro simples. Você pode seguir com o programa.
Mas se quiser que o erro desapareça você pode fazer um CAST para que os valores sejam de um tipo mais robusto com precisão maior de valores
faça o seguinte coloque desta forma a linha do cálculo e compile
cout << setw(((unsigned __int64)console_width / 2) + (unsigned __int64)(len / 2)) << str << endl;
Veja que agora o aviso não aparece mais
Veja o que informa a Microsoft sobre o tipo __int64, basicamente é um tipo para valores altíssimos de variáveis
Link para o artigo: https://docs.microsoft.com/pt-br/cpp/cpp/int8-int16-int32-int64?view=msvc-160
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Como podemos obter automaticamente o tamanho da tela do console?
Você pode usar a API do windows.h
obs: API(Interface de Programação de Aplicativos) é um conjunto de funções e padrões de programação disponibilizadas por uma plataforma de software(neste caso a plataforma windows). Ou seja, os
programadores e programadoras do sistema operacional windows nos fornecem diversas funções, tipos de dados, etc que podemos usar para usar recursos do sistema operacional windows.
Veja
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
using namespace std;
int main()
{
 HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE); // Aqui você obtem a janela de Console e coloca em screen um endereço para manipular(HANDLE) esta janela
 COORD max_size = GetLargestConsoleWindowSize(screen);
 //max_size terá as coordenadas X (Largura) e Y (Altura)
 //Então max_size.X será a Largura e max_size.Y será a altura
 //Precisamos apenas da Largura
 string str = "Texto Centralizado";
 int LarguraConsole = max_size.X;// Largura do seu console obtida automaticamente.
 int Tam = str.length();// Tamanho da String
 if (Tam % 2 == 0) str += " ";
 cout << setw((LarguraConsole / 2) + Tam / 2) << right << str << endl;
 system("PAUSE");
}
Há ainda o que você deseja que é colocar o texto em local específico da tela
Na linguagem C existe um função de nome gotoxy mas em C++ podemos criar a própria função usando a API do windows.h
#include <iostream>
#include <windows.h>
COORD GotoXY(int x, int y)
{
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 COORD pos;
 pos.X = x;
 pos.Y = y;
 SetConsoleCursorPosition(hConsole, pos);
 return pos;
}
int main()
{
 COORD Posicao;
 Posicao = GotoXY(5, 5);
 std::cout << "TEXTO POSICIONADO";
 GotoXY(5, 6);
 std::cout << "Texto foi Deslocado " << Posicao.X << " (De largura ou coluna) e " << Posicao.Y << " de altura ou linha " << "\n";
 system("PAUSE");
 return 0;
}
Veja a saída
Você ainda pode usar bibliotecas feitas por terceiros e que simplificam o uso de gotoxy
vá até o site
https://tapiov.net/rlutil/
Clique em .zip para fazer o download de um arquivo zipado
Descompacte e copie o arquivo rlutils.h para dentro da pasta de seu projeto
Agora dentro do visual studio clique com botão direito do mouse em header files e escolha ADD->Existing item
Escolha o arquivo que você copiou e clique no botão ADD
Veja que aparece agora
Então no código basta incluir entre aspas duplas este arquivo "rlutils.h". Em aspas duplas pois está no mesmo diretório
Veja o código bem mais simplicado
#include <iostream>
#include "rlutil.h"
int main()
{
 gotoxy(15,5);
 std::cout << "TEXTO POSICIONADO";
 gotoxy(15,6);
 system("PAUSE");
 return 0;
}

#include <iostream>

int main()
{
	int Numero01, Numero02;
	int Resultado;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << "\n";
	Resultado = Numero01 % Numero02; //   % mostra o resto da divisao
	std::cout << "A Resto da Divisao inteira dos dois Numeros: " << Resultado << "\n";
	system("PAUSE");
}



Para receber múltiplas entradas com std::cin basta colocar as entradas separadas com >>

Veja exemplo a seguir que consegue receber quatro números em uma única linha de std::cin

std::cin >> Num1 >> Num2 >> Num3 >> Num4;

#include <iostream>
int main()
{
	int Num1, Num2, Num3, Num4;
	
	std::cout << "Digite Quatro numeros separados por espaco e pressione ENTER: ";
	
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	
	std::cout << "\nSoma = " << (Num1 + Num2 +Num3 + Num4) << std::endl;
 
	return 0;
}


Para receber múltiplas entradas com std::cin basta colocar as entradas separadas com >>

Veja exemplo a seguir que consegue receber quatro números em uma única linha de std::cin

std::cin >> Num1 >> Num2 >> Num3 >> Num4;

#include <iostream>
int main()
{
	int Num1, Num2, Num3, Num4;
	
	std::cout << "Digite Quatro numeros separados por espaco e pressione ENTER: ";
	
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	
	std::cout << "\nSoma = " << (Num1 + Num2 +Num3 + Num4) << std::endl;
 
	return 0;
}






#include <iostream>

int main()
{
	int Num1, Num2;
	char Operacao;
	std::cout << "\nDigite Um Numero: ";
	std::cin >> Num1;
	std::cout << "\nDigite Outro Numero: ";
	std::cin >> Num2;
	std::cout << "\nQual Operacao Deseja Efetuar? \n+ Adicao \n- Substracao \n* Multiplicao\n/ Divisao?";
	std::cout << "\nDigite sua opcao: ";
	std::cin >> Operacao;

	//O Usuario vai digitar um caracter. Como um caracter é mapeado como inteiro da tabela ascii o switch este tipo de expressão.
	//Logo Operacao pode ser + - * /
	
	switch (Operacao)
	{
	//Caso seja + esta linha será executada
	case '+': 
		std::cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2;
		break;
	case '-':
		std::cout << "\nSubtracao de Num1 - Num2 = " << Num1 - Num2;
		break;
	case '*':
		std::cout << "\nMultiplicacao de Num1 * Num2 = " << Num1 * Num2;
		break;
	case '/':
		std::cout << "\nDivisao de Num1 / Num2 = " << Num1 / Num2;
		break;
	//Caso Operador não tenha um valor de nenhum destas casos + - * ou /
	//você pode colocar de forma opcional um valor que padrão(default)
	//que será executado se nenhum dos casos sejam válidos
	default:
		std::cout << "\nVoce nao digitou um operador valido! ";
		break;
	}
	std::cout << "\n";
	system("PAUSE");

}








Embora isso seja possível e interessante para quem estar testando um programa, recomendo que na versão final você utilize cada entrada recebida separadamente para deixar o código mais legível....

Abraço

Como você faria para não encerrar o programa depois do resultado?

Neste caso  seria com loop. Vai aparecer uma mensagem para o usuário e ai você indica S para Continuar no programa Ou  N para Sair

Ou seja um loop usando o do-while

veja o código

#include <iostream>
#include <iomanip> // necessário para uso do set precision
 
int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media = 0.0;
	char Resposta;
	do // Cria loop até que Resposta seja S e ai sai do loop
	{
		std::cout << "Digite o Primeiro Número: ";
		std::cin >> Num1;
		std::cout << "Digite o Primeiro Número: ";
		std::cin >> Num2;
		std::cout << "Digite o Primeiro Número: ";
		std::cin >> Num3;
 
		Media = (Num1 + Num2 + Num3) / 3;
 
		std::cout << "Números Digitados: " << Num1 << " " << Num2 << " " << Num3 << "\n";
		std::cout << "Média dos Números: " << std::fixed << std::setprecision(2) << Media << "\n";  // coloca 2 digitos após a vírgula   < -----
		std::cout << "\nDeseja calcular outra Média Artmética? (Responda S para Sim e N para não:) ";
		std::cin >> Resposta;
	} while (Resposta == 'S' || Resposta == 's'); // Sai do loop apenas de o OU for falso ou seja se
//Se resposta for diferente de S e diferente de s. Lembre que o OU || só será falso de todas as sentenças forem //falsas. Assim se o usuário digitar N ou qualquer outra coisa o programa sairá mas se digitar S ou s o programa volta e pede novamente os números.
 
	std::cout << "\nSaindo do programa...";
	system("Pause");
	return 0;
} 


return 0;
}





#include <iostream>

int main()
{
	int Numero01, Numero02;
	bool Comparacao;
	std::cout << "Digite o primeiro Numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;	
        std::cout << "Digite o segundo Numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << std::endl;	
	// = é comando de atribuição
	//== é operador de igualdade. Para verificar se o operando é igual a outro operando
	Comparacao = (Numero01 == Numero02);
	std::cout << "Numero01 igual a Numero02?:  " << Comparacao << "\n";
	Comparacao = (Numero01 != Numero02);
	std::cout << "Numero01 Diferente a Numero02?:  " << Comparacao << "\n";

	Comparacao = (Numero01 > Numero02);
	std::cout << "Numero01 Maior que Numero02?:  " << Comparacao << "\n";
	Comparacao = (Numero01 < Numero02);
	std::cout << "Numero01 Menor que Numero02?:  " << Comparacao << "\n";

	Comparacao = (Numero01 >= Numero02);
	std::cout << "Numero01 Maior ou igual a Numero02?:  " << Comparacao << "\n";
	Comparacao = (Numero01 <= Numero02);
	std::cout << "Numero01 Menor ou igual a Numero02?:  " << Comparacao << "\n";

	system("PAUSE");
	return 0;
}


#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	double Numero;
	bool ResultadoLogico, ResultadoLogico2;
	std::cout << "Digite um Numero: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	//A variável booleana MaiorQue100 irá receber
	//o valor lógico da comparação (Numero > 100)
	// Numero é maior que cem? 
	ResultadoLogico = ((Numero > 100) && (Numero != 0)) ;
	std::cout << "O Resultado Lógico da Expressão ((Numero > 100) && (Numero != 0)) é: " << ResultadoLogico <<  std::endl;
	ResultadoLogico2 = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);
	std::cout << "O Resultado Lógico da Expressão ((Numero == 100) || (Numero > 200)) && (Numero < 1000); é: " << ResultadoLogico2 << std::endl;
	system("PAUSE");
}





#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	//Você pode usar ( ) para iniciar variáveis com valores literais
	//{  } é inicialização uniforme, permite tanto iniciar tanto valores literais (int, float, caractere, quanto valores escalares, vetores, enums etc.
	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56 };
	char Caractere{ 'c' };
	//String é um cadeia de caracteres, é um texto e deve estar entre aspas duplas "texto da string"
	//Para declarar uma string usamos std::string
	std::string Texto{ "Vou Aprender C++ e descobrir o lado sombrio da força!" };
	//%d indica que você quer que seja colocado na string:
	//"Valor Número Inteiro = %d " o valor da variável NumeroInteiro
	std::printf("Valor Inteiro: %d - Real: %.2f - Caractere: %c - Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	std::cout << "Texto da String: " << Texto << "\n";

	std::printf("O Valor do Caractere Digitado: %c na Tabela ASCII é: %d \n", Caractere, Caractere);
	/*%d Número decimal inteiro (int).
	%f	 Número decimal de ponto flutuante. serve tanto para float como para double.
	%lf  Serve para double. (l-long , f-float - lf)
	%c	 Caractere: imprime o caractere que tem o código ASCII correspondente ao valor dado.
	%s	 Sequência de caracteres (string, em inglês).
	*/

	system("PAUSE");
	return 0;
}




//use este código se estiver usando DEVC++
#include <iostream>
#include <string>
/*exclua tchar.h*/
#include <locale.h>
/*inclua cstdio para que std::printf funcione no DEV*/
#include <cstdio>


int main()
{
	/*Coloque desta forma para acentuar*/
	
	setlocale(LC_ALL, ("portuguese"));
	//Você pode usar ( ) para iniciar variáveis com valores literais
	//{  } é inicialização uniforme, permite tanto iniciar tanto valores literais (int, float, caractere, quanto valores escalares, vetores, enums etc.
	//Coloque o igual antes das chaves
	int NumeroInteiro = { 12 };
	float NumeroReal = { 34.56 };
	char Caractere = {'c'};
	//String é um cadeia de caracteres, é um texto e deve estar entre aspas duplas "texto da string"
	//Para declarar uma string usamos std::string
	//Aqui coloque parênteses ao invés de chaves
	std::string Texto = ("Vou Aprender C++ e descobrir o lado sombrio da força!");
	//%d indica que você quer que seja colocado na string:
	//"Valor Número Inteiro = %d " o valor da variável NumeroInteiro
	std::printf("Valor Inteiro: %d - Real: %.2f - Caractere: %c - Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	std::cout << "\nTexto da String: " << Texto << "\n";

	std::printf("O Valor do Caractere Digitado: %c na Tabela ASCII é: %d \n", Caractere, Caractere);
	/*%d Número decimal inteiro (int).
	%f	 Número decimal de ponto flutuante. serve tanto para float como para double.
	%lf  Serve para double. (l-long , f-float - lf)
	%c	 Caractere: imprime o caractere que tem o código ASCII correspondente ao valor dado.
	%s	 Sequência de caracteres (string, em inglês).
	*/

	system("PAUSE");
	return 0;
}


Exemplo de um código onde não importa se é pré ou pós-fixado

//pós fixado
int num1 = 20;
num1++;
std::cout << num1;
 
pré-fixado
int num1 = 20;
++num1;
std::cout << num1;


Veja que em ambos os códigos acima não importa se é pré ou pós fixado pois, isso não irá impactar no resultado!

Em ambos os casos num1++ ou ++num1 será o mesmo que num1 =  num + 1;

como aparece sozinho o compilador irá passar esta linha de execução de código e colocará  na tela o valor de num1 adicionado de 1


********

Contudo  existem casos que o compilador precisará saber se é para incrementar antes ou depois a variável.

Observe este dois exemplos

//pós fixado
int num1 = 20;
std::cout << num1++;
 
pré-fixado
int num1 = 20;
std::cout << ++num1;
Agora as expressões num1++ e ++num1 aparecem como saída da função cout. Sendo assim o compilador precisará analisar como estas expressões pré e pós serão avaliadas

No caso da pós-fixada a saída será 20 e depois o num1 será incrementado na memória passando a ser 21

então pós fixado é o mesmo que dizer: use o valor atual da variável num1 e só depois incremente o valor dela na memória

é como se tivéssemos simplificado o seguinte código

std::cout << num1;
num1 = num1 + 1;
é exatamente assim que é o comportamento do operador de incremento pós-fixado. Será usado primeiro o valor atual da variável e só depois esta variável será incrementada

Logo 20 irá para tela e depois num1 será 20+1 que é 21 e este valor será colocado na memória em num1

Ou seja, no incremento pós-fixado o compilador vai logo na memória e verifica o valor atual de num1 e usa este valor em cout. Somente depois disso o valor de num1 é incrementado e passa a ser 21.

***************




Já na outra abordagem pré-fixada temos

std::cout << ++num1;

Neste caso, temos o operador de incremento pré-fixado

isso quer dizer que primeiro será feito o incremento da variável para somente depois usar o valor desta variável

é como se esta instrução de código std::cout << ++num1; fosse uma simplificação de

num1 = num1 + 1;
std::cout << num1
Logo primeiro num1 que é 20 será incrementado e fica com o valor 21 na memória

e depois isso é mostrado este valor 21  de num1 na tela

Ou seja, no incremento pré-fixado o compilador primeiro faz logo a operação de incremento e muda o valor da variável na memória para somente depois usar o valor desta variável na memória que neste caso colocará 21 na tela

IMPORTANTE: Em programação existem comandos que efetivamente mudam os valores das variáveis na memória e existem outros comandos que apenas usam este valor da variável sem mudar nada na memória.

Como assim?

Vamos a um exemplo:

Eu comentei e já ensinei que os índice de um array ou vetor começam com zero, mas para o usuário eles começam em 1

Porém não é natural pedirmos ao usuário que digite o número 0(zero):

Assim podemos recorrer a uma instrução que pegue o  valor do índice somado a 1 e mostre na tela adequadamente para o o usuário desta forma: Digite o Numero 1, 2, 3, 4 etc

Só que precisamos usar os índices no código começando em zero e ai fazemos isso a seguir

int Numeros[5];
for (int i=0; i < 5; i++) 
{
 std::cout << "Digite o Numero" << i+1;
 std::cin >> Numero[i]; 
} 
no caso acima temos a expressão i+1

i+1 apenas está utilizando o valor de i somado a 1

não existe atribuição a alguma lugar na memória, logo o valor de i não será alterado!

O valor de i seria alterado somente se tivéssemos

i = i + 1; ou i++ pois i++ ou ++i é o mesmo que i = i +1

Veja que neste caso i = i + 1 ou i++ ou ainda ++i você está indicando que se pegue o valor de i somente com 1 e coloque o resultado na variável i. Existe efetivamente a atribuição de uma valor a uma região da memória

i receba i + 1

Então desta forma vai mudar o valor de i na memória pois existe uma atribuição

Porém apenas i+1 solto não muda nada na memória e assim podemos usar apenas o valor de i sem modificar seu valor

Quando o loop for vai para i++ ai sim o valor de i será modificado pois i++ é o mesmo que i = i +1 e neste caso o compilador vai modificar o valor de i a cada passada(iteração) do loop for

Então será assim a cada passada do loop for

para i = 0

std::cout << "Digite o Numero" << 0+1 que é 1;

std::cin >> Numero[0];

Na tela Digite o Numero1

mas lembre que i+1 não altera o valor de i

E então o loop for volta e encontra i++

ai sim o i passa a ser i = i +1 ou i = 0 + 1 que é 1



para i= 1

std::cout << "Digite o Numero" << 1+1 que é 2;

std::cin >> Numero[1];

Na tela Digite o Numero2

mas lembre que i+1 não altera o valor de i

E então o loop for volta e encontra i++

ai sim o i passa a ser i = i +1 ou i = 1 + 1 que é 2



para i= 2

std::cout << "Digite o Numero" << 2+1 que é 3;

std::cin >> Numero[2];

Na tela Digite o Numero3

mas lembre que i+1 não altera o valor de i

E então o loop for volta e encontra i++

ai sim o i passa a ser i = i +1 ou i = 2 + 1 que é 3



para i= 3

std::cout << "Digite o Numero" << 3+1 que é 4;

std::cin >> Numero[3];

Na tela Digite o Numero4

mas lembre que i+1 não altera o valor de i

E então o loop for volta e encontra i++

ai sim o i passa a ser i = i +1 ou i = 3 + 1 que é 4



para i= 4

std::cout << "Digite o Numero" << 4+1 que é 5;

std::cin >> Numero[4];

Na tela Digite o Numero4

mas lembre que i+1 não altera o valor de i

E então o loop for volta e encontra i++

ai sim o i passa a ser i = i +1 ou i = 4 + 1 que é 5



para i =5 para o for pois i < 5 ou 5 < 5 é falso e o for loop é encerrado



Vamos imaginar agora este mesmo código apenas modificando i+1 por i++



int Numeros[5];
for (int i=0; i < 5; i++) 
{
 std::cout << "Digite o Numero: " << i++;
 std::cin >> Numero[i]; 
} 


Neste caso  std::cout << "Digite o Numero: " << i++; seria o mesmo que

std::cout << "Digite o Numero: " << i = i + 1;

agora você está modificando o valor de i na memória



para i = 0

std::cout << "Digite o Numero" << 0+1 que é 1;

std::cin >> Numero[0];

Na tela Digite o Numero1

mas lembre que i++ altera o valor de i que vai ser i = 0 +1 que passa a ser 1

E então o loop for volta e encontra i++

ai o i passa a ser i = 1 +1 ou i = 1 + 1 que é 2 logo i passa a ser 2



para i = 2

std::cout << "Digite o Numero" << 2+1 que é 3;

std::cin >> Numero[2];

Na tela Digite o Numero3

mas lembre que i++ altera o valor de i que vai ser i = 2 +1 que passa a ser 3

E então o loop for volta e encontra i++

ai o i passa a ser i = 3 +1 ou i = 4  logo i passa a ser 4

e por ai vai e por isso , i = 0,2,4 pois o operador de incremento e decremento MODIFICA o valor da variável incrementada ou decrementada da memória, e apenas vai ser decidido quando isso ocorre(pré e pós-fixado)

claro que usar desta forma é incorreto para este caso pois irá "bagunçar" o índice i que controla o loop for



Vamos agora a  um exemplo de operadores de incremento com dois números



int num1{10};
int num2{20}
 
num1 = num2++;
std::cout << num1 << "-" << num2;
A saída acima será 20 e 21

Vamos analisar

num1 = num2++;

acima temos um caso de incremento pós-fixado logo como disse mais acima primeiro usa-se o valor da variável e somente depois incrementa o valor desta variável

logo a expressão num1 = num2++;

é o mesmo que

num1 = num2;
num2 =  num2 + 1;
std::cout << num1 << "-" << num2;
Veja que num1 recebe primeiro o valor contido na memória de num2 e somente depois num2 será incrementado.

Isso segue a instrução de incremento pós-fixado

e se fosse assim?

int num1{10};
int num2{20}
 
num1 = ++num2;
std::cout << num1 << "-" << num2;
A saída acima será 21 e 21

Agora temos o incremento pré-fixado e com isso primeiro a variável deve ser incrementada na memória para somente depois ser usado seu valor na memória já incrementado

é como se fosse assim:

num2 = num2 + 1;
num1 = num2;
std::cout << num1 << "-" << num2;
pois agora é pré-fixado

Obs: Apesar de parecer uma simples simplificação estes comandos são importante e bem utilizados em estrutura de dados, aritmética de ponteiros e vários outros momentos de implementação de código C++




************************

#include <iostream>
#include <string>

int main()
{
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	/*Se a senha digitada pelo usuário e armazenada na variável SenhaDigitada for igual a senha de acesso as instruções após o if serão executadas pois a condição foi verdadeira true 1 */
	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//através de outra variável booleana bAcesso
		bAcesso = true;
		system("PAUSE");
	}
	/*Se a condição for falsa então as isntruções do else serão executadas*/
	else
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0); //sai do programa, força o fechamento da aplicação
	}

	return 0;
}



#include <iostream>
#include <string>
#include <tchar.h>

int main()
{
	//aqui faltou o _T
	_tsetlocale(LC_ALL, _T("portuguese"));
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	/*Se a senha digitada pelo usuário e armazenada na variável SenhaDigitada for igual a senha de acesso as instruções após o if serão executadas pois a condição foi verdadeira true 1 */
	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//através de outra variável booleana bAcesso
		bAcesso = true;
		//system("PAUSE");
	}
	/*Se a condição for falsa então as isntruções do else serão executadas*/
	else
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0); //sai do programa, força o fechamento da aplicação
	}
	bFezSol = false; 
	bCarroPronto = false; 
	bSalarioDepositado = false;
	//Aqui podemos deixar apenas a variável
	//Não é necessário == pois será buscado o valor de bAcesso e ficará assim:
	//if (true) ou if(false)
	if (bAcesso)
	{
		if (bFezSol || bCarroPronto || bSalarioDepositado)
		{
			std::cout << "\nVai dar Praia!!!" << std::endl;
		}
		//Aqui será executado se a condição do if falhar e se
		//bSalarioDepositado for false
		//Da mesma forma aqui
		//Como bSalarioDeposito é falso !(não) Falso dará True e ai entra no else if
		else if (!bSalarioDepositado)
		{
			//corrigi o texto pois !bSalarioDepositado significa que agora ao invés de false será true
			//logo o bSalarioDepositado virá verdadeiro e desta forma o salário foi depositado
			std::cout << "Não vai dá Praia, mas salário também foi Depositado" << "\n";
		}
	}

	system("PAUSE");
	
}



*********************************
//operador ternario interrogação  ?   e dois pontos :
#include <iostream>

int main()
{
	double MaiorNumero, Numero01, Numero02;

	std::cout << "Digite Primeiro Numero: ";
	std::cin >> Numero01;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero02;

	//Neste caso o operador ternario ? está sendo utilizado para
	//Atribuir um valor a uma variável
	//Se Numero01 for maior que Numero02 Maior numero recebe Valor de Numero01. Caso contrário(Senão) MaiorNumero Recebe Numero02
	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
	std::cout << "\nMaior Numero Digitado: " << MaiorNumero << "\n";
	//Aqui o operador ? esta sendo utilizado para decidir que comando será executado. Se for True o primeiro std:: vai para tela
	//Se for Falso o segundo std vai para a tela
	(Numero01 > Numero02) ? std::cout << "\nNumero01 Maior que Numero02\n" : std::cout << "Numero02 Maior que Numero01\n";

	system("PAUSE");
}





#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int num; 
	std::cout << "Digite um Número: ";
	std::cin >> num;
	switch (num)
	{
	case 1:  std::cout << "\nEscolhido Número 1\n";
		break;
	case 2:  std::cout << "\nEscolhido Número 2\n";
		break;
	case 3:  std::cout << "\nEscolhido Número 3\n";
		break;
	default: std::cout << "\n1,2,3 não foram escolhidos\n";
		break;
	}
	system("PAUSE");
	return 0;
}



#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	char letra; // char é tratado como inteiro tabela ASCII 
	std::cout << "Entre com Letra: ";
	std::cin >> letra;
	switch (letra) // letra na realidade é um inteiro da tabela ASCII
	{
	case 'a': std::cout << "\nEscolhido a";
		break;
	case 'b': std::cout << "\nEscolhido b";
		break;
	case 'c': std::cout << "\nEscolhido c";
		break;
	default: std::cout << "\n1,2,3 não foram escolhidos";
		break;
	}
	system("PAUSE");
	return 0;
}




#include <iostream>

int main()
{
	int Numero = 0;
	while (Numero <= 10)
	{ 
		std::cout << Numero << std::endl;
		// ou Numero++;
		++Numero;
	}
	system("PAUSE");
	return 0;
}



#include <iostream>
int main()
{
	int Numero;
	Numero = 0;
	//loop infitivo!
	/* neste caso Numero nunca deixará de ser 0 e a
	condição Numero <= 50 será sempre verdadeira!
	Logo ficará sempre no While!!!*/
	while (Numero <= 50)
	{
		if (Numero % 2 != 0)
		{
			std::cout << Numero << " ";

		}
		//De alguma forma você precisa incrementar a variável Numero para que ela chegue até 50
		//Qual condição de Parada do loop?
		Numero++;

	}
	system("PAUSE");
	return 0;
}



#include <iostream>
int main()
{
	int Numero;
	Numero = 0;
	//loop infitivo!
	/* neste caso Numero nunca deixará de ser 0 e a
	condição Numero <= 50 será sempre verdadeira!
	Logo ficará sempre no While!!!*/
	while (Numero <= 50)
	{
		if (Numero % 2 == 0)
		{
			std::cout << Numero << " ";

		}
		//De alguma forma você precisa incrementar a variável Numero para que ela chegue até 50
		//Qual condição de Parada do loop?
		Numero++;

	}
	system("PAUSE");
	return 0;
}


#include <iostream>
int main()
{
	int Numero;
	Numero = 0;
	//loop infitivo!
	/* neste caso Numero nunca deixará de ser 0 e a
	condição Numero <= 50 será sempre verdadeira!
	Logo ficará sempre no While!!!*/
	while (Numero <= 50)
	{
		
		std::cout << Numero << " ";
		//De alguma forma você precisa incrementar a variável Numero para que ela chegue até 50
		//Qual condição de Parada do loop?
		Numero++;
	}
	system("PAUSE");
	return 0;
}





Potencia de um número inteiro positivo usando apenas while sem math ou cmath
Como elevar um número a uma potência sem utilizar funções predefinidas como pow ( )

Veja o código comentado abaixo sem usar biblioteca C++ <cmath> ou Biblioteca C <math.h>


No entanto, a técnica acima funciona apenas se o expoente for um número inteiro positivo.
 Se precisar encontrar a potência de um número com qualquer número real como expoente,
  você pode usar a função  pow().
  
/*Neste programa, calculamos a potência de um número usando um while*/
#include <iostream>
 
int main()
{
    int expoente;
    float base, resultado = 1;
 
    std::cout << "Digite a base: ";
    std::cin >> base;
    std::cout << "\nDigite o expoente: ";
    std::cin >> expoente;
 
    std::cout << base << "^" << expoente << " = ";
 
    /*Como sabemos, a potência de um número é o número multiplicado por si mesmo repetidamente*/
    while (expoente != 0)
    {
        resultado *= base;
        expoente--;
    }
 
    std::cout << resultado;
    std::cout << "\n";
    system("PAUSE");
    return 0;
}



#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua opção: ";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
				break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
				break;	
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
				break;
		default: std::cout << "\nOpção Inválida!!!\n";
		}

	} while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
	system("PAUSE");
	return 0;
}




***** ATENÇÃO PARA O USO DO FOR
    SEQUENCIA CORRETA
for ( 1º ; 2º ; 4º ){
  3º instruções
}

for (int n=0; n<10; n++){
	
}
***
int n=0;  1º
while(n<10)  2º
{ instruções   3º
n++;             4º
}
***
#include <iostream>

int main()
{
	int soma = 0;
	for (int num = 1; num <= 100; num++)
	{
		soma = soma + num;
	}
	std::cout << "\nA soma dos numeros de 1 a 100: " << soma << "\n";
	system("PAUSE");
	return 0;
}


Gerando Números Aleatórios com rand() e for
Em relação a número aleatórios você pode usar desta forma

#include <cstdlib>
#include <ctime>
#include <iostream>
 
using namespace std;
 
int main() {
	srand((unsigned)time(0));
	int randomNumber = rand();
	cout << randomNumber << endl;
}
Você pode fazer o C ++ gerar números aleatórios a partir de um intervalo exclusivo usando o %operador de módulo. Este operador permite definir o valor máximo que pode ser gerado. O exemplo a seguir mostra como você pode retornar um número aleatório entre 1 e 35 :



#include <cstdlib>
#include <ctime>
#include <iostream>
 
using namespace std;
 
int main() {
    srand((unsigned)time(0));
    int randomNumber;
    for (int index = 0; index < 10; index++) {
        randomNumber = (rand() % 35) + 1;
        cout << randomNumber << endl;
    }
}


*********************

FUNÇÕES

Sempre com parenteses, exemplo:  void número()
lembrando que números são argumentos e variaveis deles são
os parâmetros da função, exemplo, o num1 e num2: float soma(num1+num2){
}
*********************
#include <iostream>

// O que a função vai retornar?
//tipo de retorno da função
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return Numero + NumeroASerSomado;
}
int main()
{
	int Numero, NumeroASerSomado;
	std::cout << "Digite um numero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "A soma deste numero: " << Numero << " Com o Numero: " << NumeroASerSomado << " Sera: " << SomaAUmNumero(Numero, NumeroASerSomado);// para chaamar a função não por int aqui nessa parte
	std::cout << std::endl;
	system("PAUSE");
	return 0;
}

**************




#include <iostream>

// O que a função vai retornar?
//tipo de retorno da função
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return Numero + NumeroASerSomado;
}

void Mensagem()
{
	std::cout << "\nMensagem de Marte... Chegamos bem...\n";
	return; // por causa desse return o próximo comando jamais será executado.
	std::cout << "\nMensagem de Marte... Chegamos bem 2...\n";
	return;
}


int main()
{
	int Numero, NumeroASerSomado, RetornoDaFuncao;
	Mensagem();
	std::cout << "Digite um numero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "A soma deste numero: " << Numero << " Com o Numero: " << NumeroASerSomado << " Sera: " << SomaAUmNumero(Numero, NumeroASerSomado);
	std::cout << std::endl;
	RetornoDaFuncao = SomaAUmNumero(200, -500);
	std::cout << std::endl;
	std::cout << SomaAUmNumero(Numero, SomaAUmNumero(150, 1400));
	std::cout << std::endl;
	std::cout << "\nSoma de 200 com -500: " << RetornoDaFuncao;
	std::cout << std::endl;
	system("PAUSE");
	return 0;
}


*************************************
#include <iostream>

//Podemos informar ao compilador que a função existe
//e que iremos declarar ela posteriormente
// isso é feito através dos prótipos das funções
//Coloque apenas o cabeçalho da função terminado com ;
float soma(float num1, float num2);

//main já é uma função
//observe o tipo de retorno int
// o nome é main e ela não recebe parâmetos neste exemplo (podem existir argumentos de linha de comando que serão enviados a dois parâmetros da função main

int main()
{
	//a execução do programa é realizada de cima para baixo, desta forma o compilador ainda não sabe da existência da função soma. Antes a declaração da função estava em cima e assim o compilador já sabia onde estava a declação da função
	//Agora a declaração está embaixo e ocorre erro, pois o compilador não sabe ainda quem é e onde está declarada a função soma.
	//tudo isso porque é TOP-DOWN
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}
    ***** se colocar tuda a função abaixo dará erro a menos que coloque a parte inicial la em cima.
    Sedo assim, se possivel ja deixr tudo acima.
float soma(float num1, float num2)
{
	return (num1 + num2);
}

******* ---->     Sedo assim, se possivel ja deixar tudo acima do int main();.

#include <iostream>

//função:
float soma(float num1, float num2)
{
	return (num1 + num2);
}

int main()
{
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}


*************************************************



#include <iostream>
/*Crie uma função que indique se um número é par ou impar. Receba número do usuário e exiba na tela o número recebido e se ele é par ou impar.
*/
//Protótipó da função
bool isPar(int num);

int main()
{
	int Numero;
	std::cout << "\nDigite um numero inteiro: ";
	std::cin >> Numero;
	//se o retorno da função for true significa que  a condição do if será verdadeira e entra no texto PAR
	//porém não é necessário esta comparação == true
	//aqui após executar a função será
	//if (true) ou if(false) e funciona da mesma forma
	//Profissionalmente só se utiliza assim
	if (isPar(Numero))
	{
		std::cout << "\nNumero: " << Numero << " PAR\n";
	}
	//Senão for PAR já sabemos que é IMPAR
	//podemos otimizar isso.
	// if também não precisa pois else já sabemos que é par
	else 
	{
		std::cout << "\nNumero: " << Numero << " IMPAR\n";
	}
	system("PAUSE");
	return 0;
}

bool isPar(int num)
{
	//se o resto da divisão de um numero for zero
	//numero é par logo retorne true(verdadeiro)
	//se não retorne false idicando que ele é false
	if (num % 2 == 0)
		return true;
	//Observe que return faz a saida imediata da função
	//Logo se for par o código abaixo jamais será executado. Assim o else é desnecessario
	return false;
}

**********************************************

calculadora automática

/* ENTRADA: dois números reais
PROCESSAMENTO:funcoes que calculam soma, subtração, multiplicação e divisão
SAÍDA:  (num1 + num2,  num1 – num2, num1 * num2, num1/num2)
*/
#include <iostream>
//PROTÒTIPOS DAS FUNCOES
float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Multiplicacao(float num1, float num2);
float Divisao(float num1, float num2);
float media(float num1, float num2);

int main()
{
	//aqui declare como float
	float Num1, Num2;

	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Num1;

	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Num2;

	std::cout << "\n*** Resultado das operacoes***\n";
	std::cout << Num1 << " e " << Num2 << "\n";
	std::cout << "Soma: " << Soma(Num1, Num2) << "\n";
	std::cout << "Substracao: " << Subtracao(Num1, Num2) << "\n";
	std::cout << "Multiplicacao: " << Multiplicacao(Num1, Num2) << "\n";
	std::cout << "Divisao: " << Divisao(Num1, Num2) << "\n";
	std::cout<< "\nMédia: "<<media(num001, num002)<<"\n";	   	  
	system("PAUSE");
	return 0;
}

float Soma(float num1, float num2)
{
	return num1 + num2;
}

float Subtracao(float num1, float num2)
{
	return num1 - num2;
}

float Multiplicacao(float num1, float num2)
{
	return num1 * num2;
}

float Divisao(float num1, float num2)
{
	return num1 / num2;
}

float media(float num1, float num2)
{
	return (num1 +num2)/2;
}

*** olha isso
	Caso tenha que converter int para float:
***	Conversão EXPLÍCTA (CAST)
	
	
	float Divisao(int num1 , int num2){
	
		return (float)num1/(float)num2;
	}
	
	
*Se o próprio programa fizer a conversão será chamada de IMPLÍCITA (COERSÃO)
int a=10;
float c;
c=a;

******************************
calculadora melhoada

Você pode usar o switch case para simplificar o seu código da cálculador usando apenas uma função

Veja:

#include <iostream>
 
double Soma(char Operacao, double Num1, double Num2);
 
int main() 
{ 
	double Num1, Num2;
	char Operacao;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Num1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Num2;
	std::cout << "\n + Soma \n - Subtracao \n * Multiplicacao \n / Divisao: ";
	std::cout << "\n\n Digite o simbolo da operacao desejada: ";
	std::cin >> Operacao;
	std::cout << "\nO resultado da operacao: " << Soma(Operacao, Num1, Num2);
	return 0;
}
 
// Aqui o case vai selecionar a operação e fará o digitado e selecionado pelo usuário
double Soma(char Operacao, double Num1, double Num2)
{
	switch (Operacao)
	{
	case '+': return Num1 + Num2;
	case '-': return Num1 - Num2;
	case '*': return Num1 * Num2;
	case '/': return Num1 / Num2;
	default: std::cout << "Operador Invalido";
		break;
	}
	return 0;
}


************************************

modificar e melhorar esse:
	
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua opção: ";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
				break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
				break;	
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
				break;
		default: std::cout << "\nOpção Inválida!!!\n";
		}

	} while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
	system("PAUSE");
	return 0;
}

********* abaixo o resultado

funçõe menu

/*Atenção Código modificado, veja as instruções dos motivos como recurso anexo a aula
Agradecimento ao aluno Anderson Cardoso que identificou o erro*/
#include <iostream>
#include <locale.h>

//protótipos das funções
void ExibirMenu();
int RetornarEscolha();
void ProcessarEscolha(int TipoEscolha);


int main()
{
	//Exibe o menu opções chamando a função Exibir Menu
	ExibirMenu();
	system("PAUSE");
	return 0;
}

//Implementação das funções

//a função não retorna nada, logo o tipo de retorno é vazio(void). Além disso a função não possui nenhuma variável local(Parâmetros). Como não retorna nada não precisamos usar comando return
void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");

	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		// TO DO Função Retornar EScolha

		//Aqui a função chama outra função e passar como argumento para a função ProcessrEscolha a variável escolha que contém o que foi digitado pelo usuário como opção de escolha de menu

		//aqui a função processar escolha deve receber como parâmetro um inteiro. Colocamos abaixo a chamada da função RetornarEscolha que ao ser executada irá retornar (Return) um inteiro que foi digitado pelo usuário
		
	} while (RetornarEscolha() != 3);//enquanto o retorno da função RetornarEscolha for diferente de 3 o menu vai aparecer! pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua opção: ";
	std::cin >> escolha;
	//Colocar a chamada da função ProcessarEscolha
	ProcessarEscolha(escolha);
	return escolha;
}

//ProcessarEscolha recebe como parâmetro um numero inteiro
//e armazena este argumento passado no parâmetro TipoEscolha que é uma variável local a esta função. Significa que esta variável somente existe na memória quando a função está sendo executada. Quando a função chegar a seu final esta variável deixa de existir na memória.
//Portanto funções são fundamentais para otimizar o uso de memória, pois se todas estas variáveis estivessem na função main elas somente seriam destruidas quando o programa fosse fechado.
void ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOpção Inválida!!!\n";
	}
	
	
	********
	
	CRIAR ARQUIVO DE CABEÇALHO
	
#pragma once

//no ponto .h é o que?
//o que as funções terão
//aqui não há implementação
//somente protótipos das funções
//aqui indica o que estará disponível para o programador
//ou programadora utilizar deste arquivo .h
//lembre da aula que este arquivo.h é chamado de header file
//até agora você usou header files criados por outroas programadores
//agora você seu próprio header file.
//Mas você precisa implementar as funções em algum lugar
//e ai que entra o .cpp
//protótipos das funções
void ExibirMenu();
int RetornarEscolha();
int ProcessarEscolha(int TipoEscolha);


***
#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

//#include <> vai procurar no diretorio padrão include do compilador. Já #include "" procura no diretório corrente, 
//atual de seu programa

//Aqui é COMO? como as funções do arquivo .h serão implementadas?
//neste aquivo .cpp você coloca a implemtação de todas as funções do arquivo .h relacionado
//Implementação das funções

//a função não retorna nada, logo o tipo de retorno é vazio(void). Além disso a função não possui 
//nenhuma variável local(Parâmetros). Como não retorna nada não precisamos usar comando return
void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");

	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		// TO DO Função Retornar EScolha

		//Aqui a função chama outra função e passar como argumento para a função ProcessrEscolha 
		//a variável escolha que contém o que foi digitado pelo usuário como opção de escolha de menu

		//aqui a função processar escolha deve receber como parâmetro um inteiro. Colocamos abaixo 
		//a chamada da função RetornarEscolha que ao ser executada irá retornar (Return) um inteiro 
		//que foi digitado pelo usuário
		
	} while (ProcessarEscolha(RetornarEscolha()) != 3);//enquanto escolha for diferente de 3 o 
	//menu vai aparecer! pois você está solicitando que fique em loop até que escolha seja igual a 3 
	//e resultado seja falso saindo do loop do-while
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua opção: ";
	std::cin >> escolha;
	return escolha;
}

//ProcessarEscolha recebe como parâmetro um numero inteiro
//e armazena este argumento passado no parâmetro TipoEscolha que é uma variável local a esta função. 
//Significa que esta variável somente existe na memória quando a função está sendo executada. 
//Quando a função chegar a seu final esta variável deixa de existir na memória.
//Portanto funções são fundamentais para otimizar o uso de memória, pois se todas estas variáveis 
//estivessem na função main elas somente seriam destruidas quando o programa fosse fechado.
int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";

		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOpção Inválida!!!\n";
		//aqui não retorna pois ao achar a escolha o break sai do switch
	}
	//já aqui depois de processar o switch vai sair dele e chegar no return escolha.
	return TipoEscolha;
}

***

#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

int main()
{
	//Exibe o menu opções chamando a função Exibir Menu
	ExibirMenu();
	system("PAUSE");
	return 0;
}


*****************************************
https://pt.wikipedia.org/wiki/Pragma_once

CRIAR ARQUIVO DE CABEÇALHO


**************             **************
Para fazer essa parte no DEV C++
1 - Abra o DEV 5.11 ou superior e Clique em New->Project 
    (é para criar um novo projeto e não apenas um Arquivo de Código Fonte ou Source File)

2 - Escolha Console Application e escreva o nome desejado (Coloquei ProjetoBibliotecas)

3 - Salve o Projeto em uma pasta no computador e 
    Clique agora com botão direito do mouse no nome que criou, está na coluna na esquerda da tela,
	e escolha New File
    
4 - Após a criação deste novo arquivo clique em salvar e em tipo escolha Header File(.h) 
    Coloque o nome desejado, Coloquei Biblioteca.h apenas para fins de exemplo
    
5 - Escreva este código apenas para testar, depois escreva todo o código com as definições
    das funções da biblioteca Biblioteca.h
	int soma(int a, int b);

6 - Salve com o mesmo nome do Header File mas agora com a extensão .cpp pois é nele que você
    vai colocar a implementação das funções. Neste meu exemplo será Biblioteca.cpp que é o 
	mesmo nome de Biblioteca.h 
	
7 - Implemente a função colocando o seguinte código em Biblioteca.cpp
	int soma (int a, int b){
		return a+b;}

8 - Volte ao arquivo principal main.cpp que contém a função main e faça um include do arquivo de cabeçalho .h que você criou.

	#include "Biblioteca.h"
	
	Mas use aspas duplas para o compilador procurar o diretório atual de seu programa. Lembre que comentei
	na aula que se usar < > o compilador procurar a biblioteca no diretório padrão de includes do 
	próprio compilador. Como você quer incluir um arquivo que você criou e que está no mesmo 
	diretório de seu programa use aspas duplas " "	

9 - Escreva o código abaixo em main.cpp


#include <iostream>
#include "biblioteka.h"
int main(int argc, char** argv) {
int Num1 = 10;
int Num2 = 20;
std::cout << soma(Num1,Num2) << "\n";
system("PAUSE");
return 0;
}

int soma (int a, int b){
		return a+b;}




10 - compilar F11

Funcionou perfeitamente!!
*******************************************************

#pragma once // Esta diretiva é usada em headers e serve 
//para fazer com que o ficheiro atual apenas seja incluído 
//uma vez durante o processo de compilação.


/*ENTRADA: dois números inteiros
PROCESSAMENTO: operações matemáticas
Soma dos dois números
Subtração dos dois números
Multiplicado dos dois números
Divisão dos dois números
Potencia dos dois números (primeiro número elevado pelo segundo número)
Raiz quadrada dos dois números
SAIDA: Exiba na tela os resultados de todas as operações também utilizando chamada de funções
- cabeçalho Matematica.h  protótipos das funções 
-arquivo Matematica.cpp para ser a implementação do arquivo de
cabeçalho Matematica.h 
- arquivo ProgramaMatematico.cpp que conteráfunção main( ) e será o
ponto de partida deste programa.
*/

#pragma once
int Soma(int num1, int num2);
int Subtracao(int num1, int num2);
int Multiplicacao(int num1, int num2);
float Divisao(int num1, int num2);

double Potencia(double num1, double num2);
float RaizQuadrada(int num);


***

#include "Matematica.h"
#include <cmath>

int Soma(int num1, int num2)
{
	return num1 + num2;
}

int Subtracao(int num1, int num2)
{
	return num1 - num2;
}

int Multiplicacao(int num1, int num2)
{
	return num1 * num2;
}

float Divisao(int num1, int num2)
{
	//faz uma divisao inteira pois num1 e num2 são inteiros
	//mas podemos fazer cast
	//agora estamos indicando que o inteiro deve ser um float
	return (float)num1 / (float)num2;
}

double Potencia(double num1, double num2)
{
	return pow(num1, num2);
}

float RaizQuadrada(int num)
{
	return sqrt(num);
}

***


#include <iostream>
#include "Matematica.h"

int main()
{
	int Numero1, Numero2;
	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero2;
	std::cout << "\nResultado Operadores Matematicas\n";
	std::cout << "\nSoma: " << Soma(Numero1, Numero2);
	std::cout << "\nSubtracao: " << Subtracao(Numero1, Numero2);
	std::cout << "\nMultiplicacao: " << Multiplicacao(Numero1, Numero2);
	std::cout << "\nDivisao: " << Divisao(Numero1, Numero2);
	std::cout << "\nPotencia: " << Potencia(Numero1, Numero2);
	std::cout << "\nRaizQuadrada Numero1: " << RaizQuadrada(Numero1);
	std::cout << "\nRaizQuadrada Numero2: " << RaizQuadrada(Numero2) << "\n";
	system("PAUSE");

	return 0;
} 



****************************************

NAMESPACES


Em relação a Namespaces confira:
Vamos imaginar que você tenha um biblioteca de nome Biblioteca01.h que 
tenha a seguinte função
#pragma once
float Soma(int Num1, int Num2)
{
 return (Num1 + Num2);
}
Vamos imaginar que você crie uma outra biblioteca de nome Biblioteca02.h 
que tenha a mesma função só
que com retorno diferente
#pragma once
float Soma(int Num1, int Num2)
{
 return (Num1 + Num2);
}
Agora você crie o seguinte programa abaixo de nome Programa.cpp e que usa(inclui) 
as duas bibliotecas
Ao tentar executar o código ocorrerá erro pois a função de nome Soma está
 presente tanto da Biblioteca01.h
quanto na Biblioteca02.h e não há como o compilador decidir qual será usada..
 Isso pode ocorrer no decorrer
do desenvolvimento e é interessante termos mecanismos para evitar estes 
conflitos. Poderia pensar em
mudar o nome da variável Soma em alguma das bibliotecas, mas não seria 
uma saída elegante e eficiente.
Veja que ocorre erro
Veja que acima o visual studio indica que já existe uma função com mesma 
assinatura e que não foi possível
resolver esta sobrecarga (overload) de funções.
Para resolver estes problemas de conflitos de nomes, etc foram criados os 
espaços de nomes ou Namespaces.
O Objetivo destas Namespaces é criar uma região que seja identificada de 
forma que você possa referenciar
ela correr o risco de conflitos de nomes como no exemplo acima
Como assim?
Vamos resolver o problema acima e ficará mais nítida esta utilização

Troque o Código da Biblioteca01.h por este

#pragma once
namespace mat01
{
float Soma(int Num1, int Num2)
{
return (Num1 + Num2);
}
}

Obs: Eu estou implementando no próprio arquivo.h para simplificar, mas no 
geral temos o Biblioteca01.h
apenas com as assinaturas das funções e um Biblioteca01.cpp de mesmo nome
 com as implementações.
Você vai aprender a fazer bibliotecas em breve no curso e vai entender
 esta observação.
Agora troque Troque o Código da Biblioteca02.h por este código que declara
 uma Namespace mat02

#pragma once
namespace mat02
{
float Soma(int Num1, int Num2)
{
return (Num1 + (Num2 * 2));
}
}

Feito isso em seu código Programa.cpp você pode chamar as funções Soma 
de cada Namespace e não
haverá conflito

Basta usar NomeDaNameSpace::Soma neste caso ficará assim:

#include <iostream>
#include "Biblioteca01.h"
#include "Biblioteca02.h"
int main()
{
std::cout << "A Soma de 10 com 20: " << mat01::Soma(10, 20) << "\n";
std::cout << "A Soma de 10 com 20*2: " << mat02::Soma(10, 20) << "\n";
system("PAUSE");
return 0;
}

Veja que agora mat01::Soma(10, 20) está chamando a função Soma do 
namespace mat01 e que está na
Blibioteca01.h
Da mesma forma mat02::Soma(10, 20) está chamando a função Soma do 
namespace mat02 e que está na
Blibioteca02.h
Com isso o programa Executa sem problemas e você consegue verificar 
a importância das namespaces
portanto std::cout indica que existe uma namaspace dentro da biblioteca
 iostream e que dentro do
namespace std existe a função cout. Se tiver outra biblioteca com a 
função cout basta usar o namaspace
desta biblioteca e não haverá conflito com a função cout da biblioteca std
Claro que existem várias outra coisas que podem ser feitas com namespaces
 como namespaces aninhados etc

***********************************


Variáveis com escopo global e local
***

#include <iostream>
#include "Matematica.h"

int NumeroGlobal = 5;

int main()
{
	int Numero1, Numero2;
	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero2;
	std::cout << "\nResultado Operadores Matematicas\n";
	std::cout << "\nSoma: " << Soma(Numero1, Numero2);
	std::cout << "\nSubtracao: " << Subtracao(Numero1, NumeroGlobal);
	std::cout << "\nMultiplicacao: " << Multiplicacao(Numero1, Numero2);
	std::cout << "\nDivisao: " << Divisao(Numero1, Numero2);
	std::cout << "\nPotencia: " << Potencia(Numero1, Numero2);
	std::cout << "\nRaizQuadrada Numero1: " << RaizQuadrada(Numero1);
	std::cout << "\nRaizQuadrada Numero2: " << RaizQuadrada(Numero2) << "\n";
	system("PAUSE");
	   	  
	return 0;
}	

***

#include "Matematica.h"
#include <cmath>

//Variavel Global pois declarada fora de
//qualquer função. Logo ela será acessivel em qualquer função incluindo a função main()
//
int NumeroGlobal = 10;

int Soma(int num1, int num2)
{
	//esta variável só é acessível dentro da função Soma
	int NumeroLocal = 5;
	return num1 + NumeroGlobal;
}

int Subtracao(int num1, int num2)
{
	if (num1 > num2)
	{
		//neste caso qualquer varíável declarada entre as chaves de algo
		// será acessível somente dentro destas chaves. A isso chamados ESCOPO de variável
		int NumeroLocalAEsteIf = 20;
	}
	//Mesmo NumeroLocalAEsteIf estando dentro da função Subtracao ela somente
	//estará acessível para o escopo{ } de onde ela foi declarada, ela é uma 
	//     ------>   variável local a este if!
	
	return num1 - NumeroGlobal;
	//já NumeroGlobal é global! possui escopo global, ou seja, é acessada
	//em qualquer função do programa, logo, em qualquer parte do programa pois ela é global.
}

int Multiplicacao(int num1, int num2)
{
	
	return num1 * num2;
}

float Divisao(int num1, int num2)
{
	//faz uma divisao inteira pois num1 e num2 são inteiros
	//mas podemos fazer cast
	//agora estamos indicando que o inteiro deve ser um float
	return (float)num1 / (float)num2;
}

int Potencia(int num1, int num2)
{
	return pow(num1, num2);
}

float RaizQuadrada(int num)
{
	return sqrt(num);
}

***
Matematica.h

#pragma once

int Soma(int num1, int num2);
int Subtracao(int num1, int num2);
int Multiplicacao(int num1, int num2);
float Divisao(int num1, int num2);
int Potencia(int num1, int num2);
float RaizQuadrada(int num);

***************************************

#include <iostream>

int main()
{
	//int i;    aqui i foi declardo fora do escopo, do bloco de código do for
	
	for (int i = 0; i < 5; i++)
	{
		int j = i + 2;
		std::cout << i << " " << j << std::endl;
	} 
	//std::cout << "\nValor final de i: " << i;
	//std::cout << "\nValor final de j: " << j;
	//isso é o escopo de uma variável!
	//Qual a visibilidade dela? Local, Global. Se local em que bloco? 
	//Qual o tempo de vida dela?
	//Relembrando que o parâmetros das funções são variáveis locais a estas funções!
	//int soma(int x, int y) escopo local!''

	//porém agora j foi declarado dentro do bloco de código do comando for. 
	//Logo quando este bloco de código chegar ao fim a variável j que é 
	//local a este bloco, será destruída e não mais estará acessível. 
	//Ela (j) somente é acessível dentro do comando for 
	//quando a função atingir aqui a variável i não sairá da memória,
	// não será destruida pois está fora deste escopo
	system("PAUSE");
	return 0;
}


******************************************

A solução pra isso é armazenar o valor antigo de penult na variável temporária temp.
Então é só fazer:
temp = penult;
penult = ult;
ult = ult + temp;

Pronto, agora a sequência 'andou', e está pronta para exibir o próximo termo.
Veja como fica nosso código:
	
#include <iostream>
using namespace std;

int main()
{
    int n, aux, temp, ult=1, penult=0;

    cout << "Exibir quantos termos: ";
    cin >> n;

    cout << penult << endl << ult << endl;

    for(aux=3 ; aux<=n ; aux++){
        cout << (ult+penult) << endl;

        temp = penult;
        penult = ult;
        ult = ult + temp;
    }

    return 0;
}



***
Fibonacci com laço WHILE em C++

#include <iostream>
using namespace std;

int main()
{
    int n, aux=3, temp, ult=1, penult=0;

    cout << "Exibir quantos termos: ";
    cin >> n;

    cout << penult << endl << ult << endl;

    while(aux<=n){
        cout << (ult+penult) << endl;

        temp = penult;
        penult = ult;
        ult = ult + temp;

        aux++;
    }

    return 0;
}





*****************************************



#include <iostream>

int ContadorChamadas()
{
	//Variavel estática: Significa que após a saída da função o valor desta variável não será perdido.
	//static indica que este valor seja mantido mesmo após a função ser encerrada
	
	static int NumChamadasDaFuncao = 0;
	NumChamadasDaFuncao++;
	return NumChamadasDaFuncao;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;
	}
	system("PAUSE");
	return 0;
}

************
Resumão Variáveis Estáticas, globais, Constantes
Variáveis Estáticas

Uma variável estática pode ser uma variável global ou local. Ambas são 
criados precedendo a declaração da variável com a palavra-chave static .

Uma variável estática local é uma variável que pode manter seu valor de
 uma chamada de função para outra e existirá até que o programa termine.

Quando uma variável estática local é criada, deve ser atribuído um valor
 inicial. Se não for, o valor padrão será 0.

Uma variável estática global é aquela que só pode ser acessada no arquivo
 onde foi criada. Diz-se que essa variável tem escopo de arquivo .

---------------------------------------------------------------------------------------------------------

Variáveis globais e externas

Uma variável global é uma variável definida fora de todas as funções e 
disponível para todas as funções.

Essas variáveis não são afetadas por escopos e estão sempre disponíveis,
 o que significa que existe uma variável global até que o programa termine.

É possível criar uma variável global em um arquivo e acessá-la de outro
 arquivo. Para fazer isso, a variável deve ser declarada em ambos os arquivos,
  mas a palavra-chave extern deve preceder a "segunda" declaração.

Se for esta o seu objetivo de criar uma variável global em arquivo e
 poder acessar ela em outro arquivo use extern

extern int Variavel;

----------------------------------------------------

Variáveis Locais

Uma variável local é aquela que ocorre dentro de um escopo específico. 
Eles existem apenas na função em que são criados.

Às vezes, são chamadas de variáveis automáticas porque são criadas 
automaticamente quando a função inicia a execução e desaparecem automaticamente
 quando a execução da função termina.

----------------------------------------------------

"Variáveis" Constantes

Em C, a diretiva do pré-processador #define foi usada para criar uma variável com um 
valor constante. Isso ainda funciona em C ++, mas podem surgir problemas.

Quando #define é usado, o pré-processador irá percorrer o código e substituir cada
 instância da variável #define pelo valor apropriado. Pois bem, como a variável #define
  existe apenas no arquivo onde foi criada, é possível ter a mesma definição em 
  outro arquivo com um valor completamente diferente. Isso pode levar a 
  consequências desastrosas.

Para superar esse problema, o conceito de uma constante nomeada que é
 exatamente como uma variável foi introduzido no C ++.

Para criar uma variável constante em C ++, preceda a declaração da variável 
com a palavra-chave const . Isso diz ao compilador que 
"foi criada uma variável que tem um valor que não pode ser alterado"

Ao criar uma variável constante, ela DEVE receber um valor.


****************************************

#include <iostream>
//PROTÒTIPO
//você pode colocar valores padrões no protótipo
//e então quando você chamar a função poderá omitir
//argumentos pois a função irá utilizar o argumento padrão se você não informar o argumento quando da chamada da função.
//Para colocar um valor padrão basta colocar =
void Coordenadas(int x, int y, int z = 1);
//Você não é obrigado a colocar todos os argumentos padrão. Porém se deixar algum de fora deve seguir a regra que precisa
//colocar da direita para esquerda

int main()
{
	//apesar da função solicitar na chamada a colocação de 3 argumentos que serão enviados aos parâmetros
	//x, y e z. Esta chamada sem você colocar argumentos irá funcionar, pois eles tem argumentos pa
	Coordenadas(5,6);
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int y, int z)
{
	//x = x * 10;
	x *= 10;
	//y = y * 10;
	y *= 10;
	z *= 10;
	std::cout << "(" << x << " - " << y << " - " << z << ")";
}

*******************


#include <iostream>
//PROTÒTIPO
//você pode colocar valores padrões no protótipo
//e então quando você chamar a função poderá omitir
//argumentos pois a função irá utilizar o argumento padrão 
se você não informar o argumento quando da chamada da função.
//Para colocar um valor padrão basta colocar =
void Coordenadas(int x, int y, int z = 1);
//Você não é obrigado a colocar todos os argumentos padrão, porém,
// se deixar algum de fora deve seguir a regra que precisa
//colocar da direita para esquerda

int main()
{
	//apesar da função solicitar na chamada a colocação de 3 argumentos que 
	//serão enviados aos parâmetros
	//x, y e z. Esta chamada sem você colocar argumentos irá funcionar, 
	//pois eles tem argumentos pa
	Coordenadas(5,6); // x e y recebem os valores na ordem aí, z já foi 
	//atribuido um valor padrão anterormente
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int y, int z)
{
	//x = x * 10;   ou
	x *= 10;
	//y = y * 10;    ou
	y *= 10;
	z *= 10;
	std::cout << "(" << x << " - " << y << " - " << z << ")";
}


*******************************
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua opção: ";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
				break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
				break;	
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
				break;
		default: std::cout << "\nOpção Inválida!!!\n";
		}

	} while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
	system("PAUSE");
	return 0;
}



******************************
//Código que foi modificado de uma versão sem uso de funções 
// e de contribuição do aluno Anderson de Almeida Pinheiro
 
#include <iostream>
#include <tchar.h>
#include <iomanip> // para formatar casas decimais
 
void MostrarCarrinho(float Total, float MeiaEntrada, float InteiraEntrada)
{
	Total = (MeiaEntrada * 10.50) + (InteiraEntrada * 21.0);
 
	std::cout << "\n***SEU CARRINHO DE COMPRAS***\n";
	std::cout << std::fixed << std::setprecision(2);     // coloca 2 digitos após a vírgula   < -----
	std::cout << "[MEIA ENTRADA]:\t\t" << MeiaEntrada << "\t" << "R$ " << MeiaEntrada * 10.50 << "\n";
	std::cout << "[ENTRADA INTEIRA]:\t" << InteiraEntrada << "\t" << "R$ " << InteiraEntrada * 21.0 << "\n";
	std::cout << "[TOTAL]:\t\t" << "\t" << "R$ " << Total << "\n\n\n";
}
 
int main()
{
	
	
	_tsetlocale(LC_ALL, _T("portuguese"));
 
	float MeiaEntrada = 0.0;
	float InteiraEntrada = 0.0;
	float Total = 0.0;
	char Escolha;
 
	do
	{
		std::cout << "\nMENU DE OPÇÕES" << "\n";
		std::cout << "--------------" << "\n";
 
		std::cout << std::endl;
 
		std::cout << "Selecione [1] para COMPRAR 01\t\tMEIA ENTRADA\t(+R$ 10,50)" << "\n";
		std::cout << "Selecione [2] para COMPRAR 01\t\tENTRADA INTERA\t(+R$ 21,00)" << "\n";
		std::cout << "Selecione [3] para RETIRAR 01\t\tMEIA ENTRADA\t(-R$ 10,50)" << "\n";
		std::cout << "Selecione [4] para RETIRAR 01\t\tENTRADA INTEIRA\t(-R$ 21,00)" << "\n";
		std::cout << "Selecione [5] para ZERAR o carrinho" << "\n";
		std::cout << "Selecione [6] para MOSTRAR o carrinho" << "\n";
		std::cout << "Selecione [7] para SAIR" << "\n";
 
		std::cout << std::endl;
 
		std::cout << std::endl;
 
		std::cout << "Entre com o número para realizar as compras: ";
		std::cin >> Escolha;
 
		switch (Escolha)
		{
 
		case '1':
 
			system("CLS");
			std::cout << "\nMEIA ENTRADA adicionada!" << "\n";
			MeiaEntrada++;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;
 
		case '2':
 
			system("CLS");
			std::cout << "\nENTRADA INTEIRA adicionada!" << "\n";
			InteiraEntrada++;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;
 
		case'3':
 
			if (MeiaEntrada == 0)
			{
				std::cout << "\n[ERRO]: Impossível retirar entrada (0 compradas)" << "\n";
				break;
			}
 
			else
			{
				system("CLS");
				std::cout << "\nMEIA ENTRADA retirada!" << "\n";
				MeiaEntrada--;
				MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
				break;
			}
 
		case'4':
 
			if (InteiraEntrada == 0)
			{
				std::cout << "\n[ERRO]: Impossível retirar entrada (0 compradas)" << "\n";
				break;
			}
 
			else
			{
				system("CLS");
				std::cout << "\nENTRADA INTEIRA retirada!" << "\n";
				InteiraEntrada--;
				MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
				break;
			}
 
		case'5':
 
			system("CLS");
			std::cout << "\nCARRINHO ZERADO!" << "\n";
			MeiaEntrada = 0;
			InteiraEntrada = 0;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;
 
		case'6':
 
			system("CLS");
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;
 
		case'7':
 
			std::cout << "\nFechando o carrinho..." << "\n";
			break;
 
		default:
 
			std::cout << "\n[ERRO]: Opção inválida! Verifique o MENU de opções!" << "\n";
			break;
		}
 
	} while (Escolha != '7');
 
	return 0;
}


**************************************
PONTEIRO


#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//então para declarar uma variável que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da variável>
	int *ptr;
	//obs: a posição do asterisco neste caso não importa
	//int* ptr; //dá no mesmo!


	int Numero = 101;
	//Aqui vamos colocar na tela o endereço de memória
	//da variável Número. Ou seja onde ela está carregada na memória RAM. Lembre-se que o que vai para tela é o primeiro endereço da variável número
	//pois ela ocupa 4 endereços pois tem 4 bytes de tamanho
  
	std::cout << "\nEndereço de Número: " << &Numero;
	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endereço de memória alocado para variável ponteiro
	//ou seja qual lugar da RAM ele está alocado?
	//veja nós ainda não estamos colocando na tela nada que esteja dentro das variáveis.
	//pois para colocar o que está dentro das variáveis
	//nós usamos apenas o nome da variável!
	//exemplo std::cout << Numero
	//std::cout << ptr
  
	std::cout << "\nEndereço de ptr: " << &ptr << "\n";
  
	system("PAUSE");
	return 0;
}

*******************************************

#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//então para declarar uma variável que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da variável>
	int *ptr;
	//obs: a posição do asterisco neste caso não importa
	//int* ptr; //dá no mesmo!


	int Numero = 101;
	//Aqui vamos colocar na tela o endereço de memória
	//da variável Número. Ou seja onde ela está carregada na memória RAM. Lembre-se que o que vai para tela é o primeiro endereço da variável número
	//pois ela ocupa 4 endereços pois tem 4 bytes de tamanho
  
	std::cout << "\nEndereço de Número: " << &Numero;
	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endereço de memória alocado para variável ponteiro
	//ou seja qual lugar da RAM ele está alocado?
	//veja nós ainda não estamos colocando na tela nada que esteja dentro das variáveis.
	//pois para colocar o que está dentro das variáveis
	//nós usamos apenas o nome da variável!
	//exemplo std::cout << Numero
	//std::cout << ptr
  
	std::cout << "\nEndereço de ptr: " << &ptr << "\n";
  
	system("PAUSE");
	return 0;
}


****************************************

#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero{ 4096 };
	int *ptr;
	int *ptr2;
	ptr = &Numero;
	ptr2 = ptr;
	std::cout << "\nEndereço contido dentro de ptr: " << ptr << "\n";
	std::cout << "\nEndereço contido dentro de ptr2: " << ptr2 << "\n";
	
	std::cout << "\nEndereço de ptr na memória RAM: " << &ptr << "\n";
	std::cout << "\nEndereço de ptr2 na memória RAM: " << &ptr2 << "\n";
	
	std::cout << "\nValor de Numero antes: " << Numero << "\n";
		*ptr2 = *ptr + 10;
	std::cout << "\nValor de Numero agora: " << Numero << "\n";
	system("PAUSE");
	return 0;
}

*************

#include <iostream>

int main()
{
	int Numero{ 4890 };
	char Letra{ 'E' };
	//declarei ponteiro genérico ou vazio(void)
	//significa que ele não tem ainda um tipo que possa apontar
	/*isso é útil quando você por exemplo retornar algo de alguma 
	função e atribuir a um ponteiro. Neste caso você não sabe de antemão 
	que tipo de dado você vai retornar e assim depois você pode 
	especificar qual tipo de dado o ponteiro void* passará a apontar*/
	void *ptrG;
	//Agora ptrG passa a apontar para a a variável Letra
	//Pois ele recebeu o endereço de memória desta variável
	ptrG = &Letra;
	//por que deu erro?
	//Lembre que o endereço de uma variável é apenas o primeiro byte dela. 
	//O primeiro endereço em que ela esta carregada.
	//Assim como o compilador vai saber como LER a variável
	// ex:  a partir do endereço 105 eu devo percorrer quanto bytes?
	// Ele só saberá isso quando você indicar o tipo do ponteiro ptrG
	//Por enquanto ele é void!
	//logo já que Letra é do tipo char voê deve
	//indicar que o ponteiro ptrG está apontando para um char
	//isso é feito via cast 
	
	
	std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << "\n"; // desreferenciamento
	
	//primeiro você faz o cast e depois coloca o sinal de desreferenciamento
	//*(cast para tipo desejado)NomePonteiroGenerico
	//*(char*)ptrG
	//agora o compilador sabe que deverá ler 1(byte) para colocar um char na tela!
	ptrG = &Numero;
	std::cout << "\nValor de Numerom via ptrG: " << *(int*)ptrG << "\n";

	system("PAUSE");
	return 0;
}


*************

Utilizando a Tabela acima analise o trecho de código e observe a lacuna ______________:

void* ptr;

char Letra = { 'A' };

int Numero { 1021 };

ptr = &Numero;

std::cout << "O valor de Numero usando ptr sera: " <<  ________________  << "\n";

O código que preenche corretamente a lacuna acima será: *(int*)ptr    // desreferenciamento


********************************

Crie uma variável de nome Numero do Tipo inteiro e valor inicial igual a 234;
Crie um ponteiro de nome Ponteiro capaz de apontar para um variável do tipo inteiro.
Troque o valor de Numero para 1456 usando Ponteiro
Coloque o valor de Numero na tela usando Ponteiro
Mostre o endereço da memória RAM em que estão carregados, alocados as variáveis Ponteiro e Numero
Crie um outro ponteiro de nome OutroPtr
Faça OutroPtr apontar para a mesma variável que ptr aponta. 
Usando Ponteiro some 200 ao valor contido em Numero
Usando OutroPtr coloque na tela o valor de Numero

#include <iostream>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero{ 234 };
	int* Ponteiro = &Numero;
	*Ponteiro = 1456;
	int* OutroPtr = Ponteiro;

	std::cout << "\nValor de Numero: " << *Ponteiro << "\n";
	std::cout << "\nEndereço de Numero " << &Numero << " Endereço de Ponteiro: " << &Ponteiro << "\n";
	std::cout << "\nValor contido em DENTRO de Ponteiro: " << Ponteiro << "\n";
	*Ponteiro += 200;
	std::cout << "\nValor de Número: " << *OutroPtr << "\n" ;
	system("PAUSE");
	return 0;
}

*****************************************************

REFERÊNCIAS

É um rótuo, é como dar outro nome a uma variável já existente.
int numero=34;
int &RefNum= numero;
*****************************************************

#include <iostream>

int main()
{
	int Numero{ 1024 };
	char Letra{ 'A' };
	//Declara uma referência//Significa que foi criado um apelido, um rotulo, um alias para a variável Numero
	//Neste caso não é criada uma região de memória que vai conter algo dentro e que seria chamada Ref. Ref não tem endereço na RAM.
	//Não é uma variável que podemos colocar algo dentro!
	//É apenas um atalho para Numero.

	int &Ref = Numero;
	//Para colocar na tela o valor que a referencia referencia basta colocar o nome da referencia. Não precisa desreferenciar como
  //nos ponteiros. *ptr
	std::cout << "\nValor de Numero usando Ref: " << Ref << "\n";
	std::cout << "\nValor Endereco de Numero: " << &Numero << "\n";
  
	//Observe que &Ref irá retornar o endereço de Número pois uma referencia nasce e fica como novo rótulo da variável que ela 
  //referencia estando portanto no mesmo endereço de Numero, neste caso.
	std::cout << "\nValor Endereco de Ref: " << &Ref << "\n";
  
	//Já aqui será criada uma variável, um espaço na memória RAM e dentro deste espaço de nome ptr será colocado o endereço de 
  //memória de Numero. É bem diferente da referência pois esta não contem um espaço alocado, ela apenas é mais um nome, um rótulo, 
  //um apelido para referenciar a variável.
	int* ptr = &Numero;
	std::cout << "\nValor Endereco de ptr na RAM: " << &ptr << "\n";
	std::cout << "\nValor de Numero usando ptr: " << *ptr << "\n";
	std::cout << "\nValor Endereco contido dentro de ptr: " << ptr << "\n";
  
	system("Pause");
	return 0;
}


********************

#include <iostream>

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };
	//Observe que a referência não pode ficar sem ser atribuida logo
	//na sua criação!
	int &RefNum{ Numero2 }; // forma padronizada de inicializar
	//o mesmo que int &RefNum = Numero2;
	//Agora está ok pois Ref passar ser uma referencia de Numero2
	RefNum = 5644;
	//Podemos alterar o valor do referenciado apenas com o nome da referência sem precisar de *
	//&RefNum = Numero;
	//Aqui não será permitido pois referência só pode ser atribuida uma única vez!
	int* ptr;
	//um ponteiro pode ser declarado sem ser inicializado!
	//Até mesmo assim é permitido!
	//depois você pode iniciar
	ptr = &Numero;
	
	*ptr = 4048;
	std::cout << "\nValor de Numero: " << *ptr << "\n";
	//No ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endereço, fazer ele apontar para outra variável
	//isso é permitido!
	ptr = &Numero2;
	*ptr = Numero + 2000;
	std::cout << "\nValor de Numero2: " << *ptr << "\n";
	return 0;
}

**********

Considere o seguinte trecho de código abaixo:

float Temperatura { 40.0 } ;
float VelocidadeDoVento { 23.6 };
float &RefTemp = Temperatura;
RefTemp = 34.7;
std::cout << RefTemp;

O código acima colocará na tela o valor?34.7

***********

Considere o seguinte código abaixo:

#include <iostream>
int main()
{
	float Temperatura{ 40.0 };
	float VelocidadeDoVento{ 23.6 };
	float& RefTemp = Temperatura;
	RefTemp = 34.7;  // deu um novo valor para a variavel temperatura
	std::cout << RefTemp << "\n";
	RefTemp = VelocidadeDoVento;
	std::cout << RefTemp << "\n"; // e esse? o que retornrá?
}

***********
   
    3 casos:    Sendo o segundo caso melhor!!!
	
     	*************   1º caso
     	

#include <iostream>

void TrocaNumeros(int Num1, int Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Num1, Num2;
	std::cout << "\nDigite o primeiro Número: ";
	std::cin >> Num1;
	std::cout << "\nDigite o Segundo Número: ";
	std::cin >> Num2;
	std::cout << "\nValores antes da troca\n";
	std::cout << "\nNumero1 = " << Num1;
	std::cout << "\nNumero2 = " << Num2;
	std::cout << "\nValores depois da troca\n";
	//Esta chamada de função apenas COPIA o Valor de Numero1 e Numero2
	//E Coloca estes valores em Num1 e Num2 respectivamente da função
	//Troca Numeros...
	//Não há relação alguma com estas variáveis..
	//Numero1 e Numero2 são variáveis locais a função main
	TrocaNumeros(Num1, Num2);
	//Mesmo sendo mesmo nome, são variáveis diferente e com endereços de memória diferentes
	//A ISSO CHAMAMOS DE PASSAGEM DE PARÂMETROS POR VALOR!
	//APENAS UMA COPIA DO VALOR É ENVIADO A FUNÇÃO
	std::cout << "\nNum1 = " << &Num1;
	std::cout << "\nNum2 = " << &Num2;

	std::cout << "\nNum1 = " << Num1;
	std::cout << "\nNum2 = " << Num2 << "\n";

	system("PAUSE");
	return 0;
}
//e Num1 e Num2 são variáveis locais a função TrocaNumeros
void TrocaNumeros(int Num1, int Num2)
{
	//Como fazer a troca de valores de dois números?
	//precisamos de um local temporário para armazenar o valor de Num1 antes dele receber novo valor!
	//Variável temporária que guarda valor de Num1
	//Ex: se for digitado 10 Temp = 10 e se for digitado Num2 = 20 temos
	std::cout << "\nNum1 Função = " << &Num1;
	std::cout << "\nNum2 Função = " << &Num2;

	int Temp{ Num1 };
	//Num1 passa a ser 20
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	//Porém....
	Num2 = Temp;
	//Então aqui a troca ocorre apenas nas variáveis locais
	//Numero1 e Numero2 ficam intactos sem alteração!
}

************

   outro caso 
   
     	*************  2º caso

#include <iostream>

//Agora estamos indicando que a função terá dois parâmetros que serão
//referências dos argumentos passados para esta função
//Ou seja o que for enviado para esta função passará a ser referenciado por Num1 e Num2 respectivamente.
void TrocaNumeros(int& Num1, int& Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro Número: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo Número: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	TrocaNumeros(Numero1, Numero2);

	std::cout << "\nValores depois da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2 << "\n";
	
	std::cout << "\nEndereço de memória de Numero1 = " << &Numero1;
	std::cout << "\nEndereço de memória de Numero2 = " << &Numero2 << "\n";
	
	system("PAUSE");
	return 0;
}

//Agora Num1 e Num2 não recebem simplesmente uma cópia do valor de Numero1 e Numero2. Eles passam a ser Referências de Numero1 e Numero2 respectivamente. Assim se eles alterarem o valor isso irá afetar as variáveis, pois agora eles são referências!
void TrocaNumeros(int& Num1, int& Num2)
{
	std::cout << "\nEndereço de memória de Num1 da função  = " << &Num1;
	std::cout << "\nEndereço de memória de Num2 da função  = " << &Num2;
	int Temp{ Num1 };
	//Num1 passa a ser 20
	//aqui está copiando em Numero1 o valor de Numero2 pois são referências é como se fosse Numero1 = Numero2
	//Lembre que referências são alias para suas variáveis
	//Isso aqui (int& Num1, int& Num2) é o mesmo que
	//int& Num1 = Numero1 e int& Num1 = Numero2;
	//só que isso ocorre na chamada da função.
	//ISSO DAMOS O NOME DE PASSAGEM DE ARGUMENTOS PARA A FUNÇÃO POR REFERÊNCIA!
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	//Porém....
	Num2 = Temp;
	
}


************

   outro caso, por ponteiros
   
     	*************  3º caso

#include <iostream>

//Agora vamos fazer o mesmo. A passagem de argumentos para a função por
//Referência. Só que agora utilizando ponteiros
//Lembre-se ponteiros são variáveis que possuem dentro delas um endereço de outra variável
//Além disso eles precisam ser desreferenciados para chegar ao valor apontado ou alterá-lo

//Aqui foi indicado que a função deve receber endereços de memória
//Pois trata-se de dois ponteiros..
//Então quando enviar para função você deve enviar o endereço de memória das variáveis. E estes endereços serão colocados nestas variáveis
void TrocaNumeros(int* Num1, int* Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro Número: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo Número: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	//Esta dando erro pois a função não espera receber dois números inteiros.. E sim espera receber dois endereços de memória para ponteiros do tipo int.
	//Logo devemos enviar o endereço de memória das variaveis

	TrocaNumeros(&Numero1, &Numero2);

	std::cout << "\nValores depois da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2 << "\n";
	
	std::cout << "\nEndereço de memória de Numero1 = " << &Numero1;
	std::cout << "\nEndereço de memória de Numero2 = " << &Numero2 << "\n";
	
	system("PAUSE");
	return 0;
}

void TrocaNumeros(int* Num1, int* Num2)
{
	
	//Deu diferente pois ponteiro é uma variável e portanto possui endereço alocado na memória. Ele possui dentro dele o endereço de memória da variável apontada
	std::cout << "\nEndereço de memória de Num1 da função  = " << &Num1;
	std::cout << "\nEndereço de memória de Num2 da função  = " << &Num2;
	std::cout << "\nEndereço de memória contido dentro de Num1  = " << Num1;
	std::cout << "\nEndereço de memória contido dentro de Num2  = " << Num2;
	//Se Num1 agora é um ponteiro logo Terá dentro dele um endereço de memória. Está dando erro pois estamos tentando colocar um endereço de memória dentro de uma variável inteira Temp
	//Lembre o nome de uma variável devolve o que está dentro dela!
	//Neste caso queremos o valor que Num1 aponta e que neste caso será Numero1. Por isso diferentemente das referências os ponteiros precisam ser desreferenciados
	int Temp{ *Num1 };
	//Agora temp recebe o valor apontado por Num1

	//Aqui o valor apontado por Num1(que será Numero1) receberá o valor apontado por Num2
	*Num1 = *Num2;
	
	//Num2 passa a ser 10. Logo foi trocado
	//Porém....
	//o valor apontado por Num2 receberáo valor de Temp
	*Num2 = Temp;
	//Temp é uma variável int normal logo não pode nem precisa ser desreferenciada
	

	//também chamamos isso de PASSAGEM DE ARGUMENTOS PARA A FUNÇÃO POR REFERÊNCIA! SÓ QUE AQUI USANDO PONTEIROS!

}



int Temp{ *Num1 };
*Num1 = *Num2;
*Num2 = Temp;




*************************************

#include <iostream>
#include <math.h>
 
void AlteraNumero(double Numero)
{
	Numero += 2;
}
 
int QuadradoDoValor(double Numero)
{
	return pow(Numero, 2);
}
 
int main()
{
	setlocale(LC_ALL, "portuguese");
	double Num{ 8 };
	AlteraNumero(Num);
	std::cout << "Quadrado do Numero " << Num << " é: " << QuadradoDoValor(Num) << std::endl;
	system("PAUSE");
	return 0;
} 

*****************
Considere o código a seguir, ONDE ESTÁ O ERRO?
Precisa retornar apenas o resultado 64:

#include <iostream>
#include <math.h>
 
void QuadradoDoValor(double Numero)
{
	Numero =  pow(Numero, 2);
}
 
int main()
{
	double Num{ 8 };
        QuadradoDoValor(Num);
	std::cout << Num << std::endl;
	system("PAUSE");
	return 0;
}  



//      RESPOSTA: Falta o e comercial em void QuadradoDoValor(double& Numero)  para referenciar 
**********************************


Considere o código a seguir:

#include <iostream>
#include <math.h>
 
void QuadradoDoValor(double* Numero) // Recebe o endereço de memória do argumento que será enviado
{
	*Numero = pow(*Numero, 2); // Aqui o parâmetro Numero está manipulando o valor de Num pois 
	//está com
//o endereço de memória de Num
}
 
int main()
{
	double Num{ 8 };
   	QuadradoDoValor(&Num); // envia o endereço & da variável Num e não o valor dela
	std::cout << Num << std::endl;
	system("PAUSE");
	return 0;
}                                                                                         
Ao executar o código acima irá aparecer na tela o valor 64 pois está sendo usado
// o conceito de passagem de argumentos para função por referência. E neste caso 
//específico utilizando ponteiros*

============================Passagem de argumentos para uma função por valor===============

Então, Na Passagem de argumentos para uma função por valor haverá uma simples 
cópia do valor do(s) argumento(s) para o(s) parâmetro(s) da função chamada.

No caso do código acima uma chamada de argumentos por valor seria assim:

#include <iostream>
#include <math.h>
 
//Numero é o parâmetro da função QuadradoDoValor e vai receber apenas o VALOR passado para a 
//função via argumento
void QuadradoDoValor(double Numero) //observe a ausência de ponteiros* ou de referências&
{
	Numero = pow(Numero, 2);
}
 
int main()
{
	double Num{ 8 };
   	//Num é o argumento enviado para a função QuadradoDoValor e que está sendo chamada abaixo
        QuadradoDoValor(Num); 
/*chamada da função POR VALOR, ou seja apenas será copiado o valor contido 
no argumento Num. Que é o valor atual da variável Num  que é 8
este valor 8 será copiado ao parâmetro Numero da função QuadroDoValor e assim esta 
função não poderá modificar o valor da variável Num pois, recebeu apenas a cópia do 
valor desta variável.*/
	
std::cout << Num << std::endl;
	system("PAUSE");
	return 0;
}     


=============================Passagem de argumentos para uma função por Referência===============

Atenção: O termo referência neste caso é conceitual e este termo é conhecido não somente 
em linguagem C++ mas em todas as linguagens de programação que suportam esta funcionalidade. 
O fato é que na linguagem C++ temos também um recurso que tem o mesmo nome deste conceito:
 referência e isso pode confundir as coisas. Entenda Passagem de argumentos para função por 
 Referência como uma funcionalidade que dá poderes a uma função de modificar o valor do 
 argumento passado para ela de dentro da função. Em linguagem C++ isso pode ser feito 
 com os recursos de ponteiros* ou de Referências&.

Daí a confusão pois podemos ter em C++:

- Passagem de argumentos para uma função por valor

- Passagem de argumentos para uma função por Referência usando ponteiros*

  - Passagem de argumentos para uma função por Referência usando Referências&

Portanto na  Passagem de argumentos para uma função por Referência estamos indicando 
que os argumentos enviados serão enviados por referência, o que indica que os parâmetros 
da função que irão receber estes argumentos, poderão alterar o valor destes argumentos de 
dentro da função. E em C++ este conceito e funcionalidade da Passagem de argumentos para 
uma função por Referência pode ser realizada utilizando Ponteiros* ou Referências&. 
O truque na realidade é você enviar o endereço variável ou criar uma referência que 
tenha este endereço permitindo que o parâmetro da função altere o conteúdo do argumento 
enviado por referência na chamada desta função.


*******************************************


Considere o código a seguir e leia o texto abaixo ( está longo mas vale a pena ler :) )

#include <iostream>
#include <math.h>
 
void QuadradoDoValor(double* Numero)
{
	*Numero = pow(*Numero, 2);
}
 
int main()
{
	double Num{ 8 };
   	QuadradoDoValor(&Num);
	std::cout << Num << std::endl;
	system("PAUSE");
	return 0;
}                                                                                         
Na assinatura da função void QuadradoDoValor(double* Numero) este asterisco* 
indica que a função espera receber um endereço de memória que será enviado como 
argumento e que será armazenado no parâmetro Numero.

Logo a chamada da função QuadradoDoValor(&Num); esta enviando endereço de Num 
para o parâmetro Numero. E por isso Numero poderá trocar o valor de Num pois 
contém o endereço de memória dele.

Como é um ponteiro esta alteração precisa ser realizada via operador de 
desreferenciamento*. Desta forma, no caso do código acima é preciso ficar
 atento ou atenta ao desreferenciamento do ponteiro via *Numero = pow(*Numero, 2); 

Isso está informando o seguinte.

O Apontado por Numero RECEBE o Valor retornado pela função Potencia(pow)
 de (Valor Apontado por Numero elevado a 2). 

Como Numero está com o endereço de Num ele está apontando para Num

Logo na prática e como  Num = Num elevado a 2  logo Num = 64

Por isso, na tela irá aparecer 64 pois Num foi modificado via referência 
pelo ponteiro Numero que contém seu endereço de memória.


*************************** PONTEIRO PARA PONTEIRO

Um ponteiro pode guardar o endereço de outro ponteiro?

Pode sim! E isso é muito utilizado em estrutura de dados, chama-se ponteiro de ponteiro

Mas para criar um ponteiro para ponteiro  você precisa aumentar o número de asteriscos na declaração.

seria assim int **Ponteiro2 = &Ponteiro1;

Para acessar o valor desejado apontado por um ponteiro para ponteiro, o operador asterisco deve ser aplicado duas vezes **

Ou seja o valor contido no apontado pelo Ponteiro1 através  do Ponteiro2 será obtido com **Ponteiro2

Vamos ver  um exemplo comentado e explicado só que agora usando estas novas notações **

#include <iostream>
 
int main() // Esse código apresentou falhas, foi copiado exatamente como está 
 
{
	int Numero{ 110 };
	//Ponteiro1 passa apontar para variável Numero. Ou seja Ponteiro1 tem dentro dele o endereço da variável Numero
	int* Ponteiro1 = &Numero;
	std::cout << "\nEndereco de Numero = " << &Numero;
	std::cout << "\nValor Contido dentro de Ponteiro1 = " << Ponteiro1;
	std::cout << "\nEndereco em que a variavel Ponteiro1 esta carregado na memoria: " << &Ponteiro1;
	//Agora Ponteiro2 é um ponteiro para ponteiro e terá dentro dele o endereço de Ponteiro1
	int** Ponteiro2 = &Ponteiro1; 
	std::cout << "\nValor contido dentro de Ponteiro2: " << Ponteiro2;
	//Para colocar na tela o valor de Numero utilizando o Ponteiro2 usamos os dois asteriscos
	std::cout << "\nValor de Numero via Ponteiro2: " << **Ponteiro2;
	return 0;
 
}





**********************************************************

            ARRAY

Evita criação de muitas variáveis e torna mais rapido o processamento
**********************************************************



****  Sem FOR

#include <iostream>
#include <string>
/*Crie um programa que receba o nome do aluno, suas 5 notas e depois mostre a média destas notas*/

int main()
{
	//Seria interessante uma variável que você pudesse declarar e ela tivesse compartimentos que armazenariam valores!

	//Agora foi criada uma variável de nome Notas com 5 compartimentos
	//indexados a partir do zero [0] [1] [2] [3] [4]
	//acessíveis por um único nome Notas[índice]
	//Devem ter todos os compartimentos o mesmo tipo de dados e por isso ela é considerada uma variável composta (vários locais de armazenamento) e homogênea por aceitas apenas um tipo de dado dentro de cada comportimento.
	//Você já pode iniciar os valores já na declaração
	//Este é o estilo herdado da linguagem C
	//Agora C++
	//Por que este f?
	float Notas[5] { 1.0, 2.0, 3.0, 4.0, 5.0 };  // ou pode deixar vazio float Notas[] 
	float Media;
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	std::cout << "\nDigite A primeira nota: ";
	//lembre-se a primeira posição começa no índice zero!
	std::cin >> Notas[0];

	std::cout << "\nDigite A segunda nota: ";
	std::cin >> Notas[1];

	std::cout << "\nDigite A terceira nota: ";
	std::cin >> Notas[2];

	std::cout << "\nDigite A quarta nota: ";
	std::cin >> Notas[3];

	std::cout << "\nDigite A quinta nota: ";
	std::cin >> Notas[4];

	//soma das notas dividido pelo número de notas!
	Media = (Notas[0] + Notas[1] + Notas[2] + Notas[3] + Notas[4]) / 5;

	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";
	//E se fossem 10 notas?

	system("PAUSE");
	return 0;
}


*** Com FOR

#include <iostream>
#include <string>
/*Crie um programa que receba o nome do aluno, suas 5 notas e depois mostre a média destas notas*/

int main()
{
	//Seria interessante uma variável que você pudesse declarar e ela tivesse compartimentos que armazenariam valores!

	//Agora foi criada uma variável de nome Notas com 5 compartimentos
	//indexados a partir do zero [0] [1] [2] [3] [4]
	//acessíveis por um único nome Notas[índice]
	//Devem ter todos os compartimentos o mesmo tipo de dados e por isso ela é considerada uma variável composta (vários locais de armazenamento) e homogênea por aceitas apenas um tipo de dado dentro de cada comportimento.
	//Você já pode iniciar os valores já na declaração
	//Este é o estilo herdado da linguagem C
	//Agora C++
	//Por que este f?
	//PAra indicar que os números são float
	//pois número sem este f são considerados double e neste caso você estaria colocando double dentro do float
	//mas lembre que float é menor que double e com isso poderia ocorrer perda de dados
	float Notas[5] { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
	//importante inicializar variáveis contadoras e acumuladoras
	//muitos erros ocorrem!
	float Media, Soma{ 0.0 };
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	//esta parte aqui está muito repetitiva, não pode ser melhorada?
	//E se [indice] puder ser colocado como variável
	//ex: [i]
	//esta variável começaria com 0 e iria até 4
	//que comando podemos usar?
	//for!!!

	//Neste for o i vai de zero até 4. Percorre exatamente os índices do vetor Notas
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota" << (i+1)<< ": ";
		std::cin >> Notas[i];
		//precisamos de uma variável que acumule a soma das notas!
		Soma = Soma + Notas[i];
		system("CLS");
	}

	//soma das notas dividido pelo número de notas!
	Media = Soma/5;

	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";
	//E se fossem 10 notas?

	system("PAUSE");
	return 0;
}


**************  FOR
sem os comentarios

***

#include <iostream>
#include <string>

int main()
{
	float Notas[5] { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };

	float Media, Soma{ 0.0 };
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota" << (i+1)<< ": ";
		std::cin >> Notas[i];
		Soma = Soma + Notas[i];
		system("CLS");
	}

	Media = Soma/5;

	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";

	system("PAUSE");
	return 0;
}

**************** ou


#include <iostream>
#include <string>

int main()
{
	
	//Você pode suprimir o número nos colchetes.
	float Notas[]{ 0.0f, 1.0f, 2.0f, 3.0f, 4.0f }; // se quiser iniciar todos com zero pode ser assim com único zero 0.0
	float Media, Soma{ 0.0 };
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;
	
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota" << (i+1)<< ": ";
		std::cin >> Notas[i];
		Soma += Notas[i];
		system("CLS");
	}
	
	Media = Soma/5;
	
	std::cout << "\nA Media das notas do "<< NomeAluno<<" foi: " << Media << "\n";
	
	system("PAUSE");
	return 0;
}


*************************

#include <iostream>
#include <locale>
/*Exercício Soma De 10 Números */

int main()
{
	setlocale(LC_ALL, "portuguese");

	double Numeros[10];
	double Soma{ 0.0 };
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Digite O Número" << (i+1) << ": ";
		//i++ é o mesmo que i = i + 1; e neste caso a região
		//de memória de nome i está sendo afetada e incrementada
		//mas se usarmos somente (i+1) nada na memória será afetado
		//pois não tem atribuição não tem: i = (i + 1). Somente  (i + 1)
		//e assim só usamos o valor de i e não alteramos

		std::cin >> Numeros[i];
		Soma += Numeros[i];
		//Limpa a tela Clear Screen
		//Clear no Linux OU CLS Windows
		system("Clear || CLS");
	}
	std::cout << "\n A Soma dos Números é: " << Soma << "\n";
	system("PAUSE");
	return 0;
}


**************************

#include <iostream>
#include <locale.h>

/*ENTRADA: Receba número elementos desejados (máximo de 20)
PROCESSAMENTO: 
 - Armazena estes dados em um array. 
 - Encontrar maior e o menor elemento desse array
SAÌDA: mostre na tela o maior e o menor elemento desse array
*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	int NumElementos;
	int Min, Max;
	int Array[20];  /* nesse caso ele vai fazer a comparação de APENAS 20 elementos,
	                 se passar desse valor vai dar erro no resultado*/ 

	std::cout << "Digite O número de elementos desejado: ";
	std::cin >> NumElementos;

	//Se o usuário digitar 14
	//o vetor vai de índice 0 até 13
	//logo i precisa ser menor que 14 ou seja 
	//i < NumElementos
	for (int i = 0; i < NumElementos; i++)
	{
		//primeiro vamos receber o vetor, a entrada de dados
		std::cout << "Digite o Elemento" << (i + 1) << ": ";
		std::cin >> Array[i];
		system("CLS");
	}
	//Depois de receber  todo Array vamos ao PROCESSAMENTO
	//Você deve varrer novamente este Array e efetuar a lógica de 
	//achar o valor Min e Max
	Min = Array[0];
	Max = Array[0];
	//No inicio tanto min quanto max são o primeiro elemento vetor

	//Precisamos varrer o vetor e analisar max e min
	//Aqui Processamento
	for (int i = 0; i < NumElementos; i++)
	{
		if (Array[i] > Max)
			Max = Array[i];
		else if (Array[i] < Min)
			Min = Array[i];
	}

	//Agora a SAIDA:
	std::cout << "\n O Menor Valor digitado foi: " << Min << "\n";
	std::cout << "\n O Maior Valor digitado foi: " << Max << "\n";
	// ou   std::cout<<"\nO menor valor é [ "<<Min<<" ] e o maior valor é [ "<<Max<<" ].\n\n";
	system("PAUSE");
	return 0;
}

******************

Usando vetores, varias formas de fazer

******************

#include <iostream>

void MostrarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	//Para enviar um vetor para uma função basta enviar o nome do vetor
	MostrarVetor(Vetor, 10);
	//Porém e o tamanho?
	//Dá para calcular este tamanho sem ter que enviar?

	system("PAUSE");
	return 0;
}

//Para receber um vetor basta colocar o tipo nome do vetor e [ ]
//ou já com tamanho int Array[10]
void MostrarVetor(int Array[], int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Array[i] << " -";
	}
}


************* Com sizeof

#include <iostream>

void MostrarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	//Para enviar um vetor para uma função basta enviar o nome do vetor
	
	//sizeof devolve o número em Bytes do tamanho de uma variável ou tipo
	//logo sizeof(Vetor) vai devolver o numero de elementos do vetor multiplicado pelo tamanho de seu tipo
	//pois são gastos 4bytes por int neste vetor e como são 10 elementos
	//o vetor terá tamanho 40bytes
	//Mas precisamos saber o tamanho!
	//Basta dividir pelo tipo do vetor
	int TamanhoVetor = sizeof(Vetor)/sizeof(int);
	//Agora serão 40 bytes / 4 bytes = 10 e teremos o tamanho do vetor!
	
	std::cout << "\nTamanho Vetor: " << TamanhoVetor;
	/*std::cout << "\nTamanho de um float " << sizeof(float);
	std::cout << "\nTamanho de um int " << sizeof(int);*/

	MostrarVetor(Vetor, TamanhoVetor);
	//Porém é o tamanho?
	//Dá para calcular este tamanho sem ter que enviar?
	
	system("PAUSE");
	return 0;
}

//Para receber um vetor basta colocar o tipo nome do vetor e [ ]
//ou já com tamanho int Array[10]
void MostrarVetor(int Array[], int TamVetor)
{
	
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Array[i] << " -";
	}
}


**************** A partir da Versão C++ 17 ou C++ 2017 você pode usar std::size

#include <iostream>
#include <array>

void MostrarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	//Para enviar um vetor para uma função basta enviar o nome do vetor
	
	//sizeof devolve o número em Bytes do tamanho de uma variável ou tipo
	//logo sizeof(Vetor) vai devolver o numero de elementos do vetor multiplicado pelo tamanho de seu tipo
	//pois são gastos 4bytes por int neste vetor e como são 10 elementos
	//o vetor terá tamanho 40bytes
	//Mas precisamos saber o tamanho!
	//Basta dividir pelo tipo do vetor
	int TamanhoVetor = std::size(Vetor);
	//A partir da Versão C++ 17 ou C++ 2017 você pode usar std::size
	
	std::cout << "\nTamanho Vetor: " << TamanhoVetor;
	/*std::cout << "\nTamanho de um float " << sizeof(float);
	std::cout << "\nTamanho de um int " << sizeof(int);*/

	MostrarVetor(Vetor, TamanhoVetor);
	//Porém é o tamanho?
	//Dá para calcular este tamanho sem ter que enviar?
	
	system("PAUSE");
	return 0;
}

//Para receber um vetor basta colocar o tipo nome do vetor e [ ]
//ou já com tamanho int Array[10]
void MostrarVetor(int Array[], int TamVetor)
{
	
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Array[i] << " -";
	}
}



*****************

   invertendo

*****************
  
#include<iostream>

//protótipos
/*Recebe um array por referência através de um ponteiro
Ou seja a variável *Array irá receber um endereço de memória de um vetor que será enviado para esta função
Duplica Vetor*/
void DuplicaVetor(int *Array, int Tam);

/*Esta função também recebe um Array via Ponteiro mas também retorna um ponteiro que neste caso deve ser um ponteiro para int. Logo será capaz de devolver um ponteiro
para int ou seja um array. NA realidade vai retornar o endereço do primeiro elemento do array*/
int *InverteVetor(int *Array, int Tam);

//Mostra o vetor recebido via ponteiro
void MostraVetor(int *Array, int Tam);

int main()
{
	int Numeros[] = { 1,2,3,4,5,6,7,8,9,10 };
	int Tam = sizeof(Numeros) / sizeof(int);
	//chama a função e passa o vetor Números para ela
	//O endereço do primeiro elemento do vetor será enviado para Array
	MostraVetor(Numeros, Tam);
	DuplicaVetor(Numeros, Tam);
	MostraVetor(Numeros, Tam);
	//Aqui Mostrar vetor recebe o retorno da função Inverte Vetor
	//E este retorno será o endereço do primeiro elemento do array inventido
	MostraVetor(InverteVetor(Numeros, Tam), Tam);
	system("PAUSE");
	return 0;
}

void DuplicaVetor(int * Array, int Tam)
{
	//função percorre o vetor e duplica os valores
	//do vetor
	for (int i = 0; i < Tam; i++)
	{
		Array[i] = 2 * Array[i];
	}
}


//Esta função recebe um array(na realidade recebe o endereço do primeiro elemento do array)
//E devolve um array invertido
int * InverteVetor(int * Array, int Tam)
{
	//para inverter o vetor iremos usar um vetor auxiliar
	//ele precisa ser estático pois senão ao sair da função ele iria desaparecer da memória, e não conseguiria ser enviado como retorno da função
	int j = 0;
	static int ArrayInvertido[10];
	//Para conseguir um vetor com valores invertidos faremos
	//Começa do indice Tam -1 ou seja 10 -1 = 9 e vai até 0 i>=0
	for (int i = Tam - 1; i >= 0; i--)
	{
		//J vai  de zero até 9
		//enquanto i vai de 9 até 0
		/*assim teremos dentro do for todas estas execuções
		ArrayInvertido[0] = Array[9];
		ArrayInvertido[1] = Array[8];
		ArrayInvertido[2] = Array[7];
		ArrayInvertido[3] = Array[6];
		ArrayInvertido[4] = Array[5];
		ArrayInvertido[5] = Array[4];
		ArrayInvertido[6] = Array[3];
		ArrayInvertido[7] = Array[2];
		ArrayInvertido[8] = Array[1];
		ArrayInvertido[9] = Array[0];
		*/
		ArrayInvertido[j] = Array[i];
		j++;
	}
	//Aqui a função está retornando o mesmo que o endereço de memória
	//do primeiro elememento do ArrayInvertido
	return ArrayInvertido;
}

//aqui recebe um vetor via ponteiro e mostra na tela
void MostraVetor(int *Array, int Tam)
{
	//coloca colchete antes do for
	std::cout << "[ ";
	//Coloca os elementos e finaliza o loop
	for (int i = 0; i < Tam; i++)
	{
		std::cout << Array[i] << "  ";
	}
	//e depois coloca ] para fechar o vetor
	std::cout << "] \n\n";
}


****************

MATRIZ

****************

#include <iostream>

int main()
{
	/*Declarei uma variável do tipo Matriz com 5 linhas
	e 5 colunas
	como o C++ o indice começa com zero as linhas e colunas vão de 0 a 4*/
	int Matriz[5][5];

	//Percorremos a Matriz pelas suas linhas e colunas
	//i vai de 0 até 4 pois quando atingir 5 5< 5 (f) e ai sai do loop
	for (int i = 0; i < 5; i++)
	{
		//For aninhado ou seja, i = 0 j vai de 0 até 4
		for (int j = 0; j < 5; j++)
		{
			//i < j cai no caso do 1
			if (i < j)
			{
				std::cout << " 1 ";
			}
			//i == j cai no caso da diagonal 0,0 1,1 2,2 3,3 e 4,4
			else if (i == j)
			{
				std::cout << " 0 ";
			}
			//i > j cai no caso do -1
			else if (i > j)
			{

				std::cout << "-1 ";
			}
		} //fim for j
		std::cout << "\n";
	} //fim for i
	system("PAUSE");
	return 0;
}
*********************************************************


USO DO FOR range loop

tem umas variações de possibilidades de escrita
******************

#include <iostream>
/*Array 1998, 2011, 2014, 2017, 2020. 
Percorra(Itere) por este array utilizando o conceito de for each e coloque os valores na tela.
*/
int main()
{
	//Ano é a variável que vai receber a cada passada
	//do for cada valor contido em Anos
	//primeiro Ano recebe o primeiro indice de Anos que é 1998
	// depois recebe 2011, 2014, 2017 e 2020
	//é como um for normal mas ele percorre sem índice e de forma automatica
  
  //versão colocando diretamente os valores do array dentro do corpo do loop for each
	for (auto Ano : { 1998, 2011, 2014, 2017, 2020 })
	{
		std::cout << Ano << "\n";
	}
	
	system("PAUSE");
	return 0;
}

******

#include <iostream>
/*Array 1998, 2011, 2014, 2017, 2020. 
Percorra(Itere) por este array utilizando o conceito de for each e coloque os valores na tela.
*/
int main()
{
	int Anos[]{ 1998,2011,2014,2017,2020 };
	//Ano é a variável que vai receber a cada passada
	//do for cada valor contido em Anos
	//primeiro Ano recebe o primeiro indice de Anos que é 1998
	// depois recebe 2011, 2014, 2017 e 2020
	//é como um for normal mas ele percorre sem índice e de forma automatica
	for (auto Ano : Anos)
	{
		std::cout << Ano << "\n";
	}
	
	system("PAUSE");
	return 0;
}

********

#include <iostream>

int main()
{
	int Numeros[ ] { 10,20,30,40,50 };
	for (auto Num : Numeros)
	{
		std::cout << Num << std::endl;
	}
	system("PAUSE");
	return 0;

}

****

Média = divisão automática pela quantidade de itens     << ----------------


                 for each loop

for each ou for ranged loop
****

#include <iostream>
#include <iomanip>
/*ENTRADA: 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7 
PROCESSAMENTO: for each C++ e palavra reservada auto 
SAIDA: valor médio da velocidade de um estrada
*/
int main()
{
	float Velocidades[]{ 70.9, 89.5, 65.6, 102.5, 123.6, 63.4, 74.5, 99.5, 68.7 };
	float SomaVelocidades{ 0.0 };
	int TamArray{ 0 };
	/*mais um for each ou for ranged loop C++
	Cada passada a variável Velocidade receberá um valor do array Velocidades*/
	for (auto Velocidade : Velocidades)
	{
		/*a variavel acumuladora SomaVelocidades vai acumular a soma de todas
		as velocidades contidas no array
		*/
		SomaVelocidades += Velocidade;
		//SomaVelocidades += Velocidade o mesmo que 
		//SomaVelocidades = SomaVelocidades + Velocidade
		/*No inicio SomaVelocidades é zero
		SomaVelocidades = 0.0 + 70.9 -> primeira passada
		SomaVelocidades = SomaVelocidades + Velocidade
		SomaVelocidades = 70.9 + 89.5 -> Segunda Passada
		Acumula a soma de todas as velocidades*/
		TamArray++;
		//Tamanho será o tamanho do array no final de todas as passadas do loop(iteracoes)
	}

	//A media será a soma de todas as velocidades divido pelo numero de velocidades
	std::cout << "Media Velocidade Rodovia: " << std::setprecision(4) << SomaVelocidades / TamArray << "km/h \n";  // coloca 2 digitos após a vírgula   < -----
	
	system("PAUSE");
	return 0;
}


*****

/*ENTRADA: 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7 e 10.0 
PROCESSAMENTO: for each, auto, tamanho vetor sizeof
media simples (soma das notas) / Numero de Notas
SAIDA: Media de Notas
*/
#include <iostream>
#include <iomanip>

int main()
{
	
	double Notas[]{ 4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0 };
	double SomaDasNotas{ 0.0 };
	int TamArray;
	//Relembrado tamanho do array Notas em Bytes divido pelo tamanho do tipo de dados em bytes
	TamArray = sizeof(Notas) / sizeof(double);
	std::cout << "\n Tamanho Vetor Notas: " << sizeof(Notas) << "Bytes \n";
	std::cout << "\n Tamanho Tipo Double: " << sizeof(double) << "Bytes \n";

	for (auto Nota : Notas)
	{
		SomaDasNotas += Nota;
	}
	std::cout << "Media de Notas do Aluno: " << std::fixed << std::setprecision(2) << SomaDasNotas / TamArray << std::endl;
	system("PAUSE");
	return 0;
}


***************************


USANDO VETORES DINÂMICOS

Neste caso você pode usar Vector da STL (std::vector)

std::vector é um contêiner de sequência que encapsula arrays de tamanho dinâmico.

std :: vector gerencia um array que pode mudar seu tamanho.

É necessário incluir um cabeçalho para usar a classe Vector  #include <vector>

é necessário incluir um cabeçalho para usar vetores.

Para criar um array dinâmico vazio declare:

std::vector<tipo_da_variavel> nome_da_variavel;

Se quiser já alocar um número de elementos no array pode ser da seguinte forma

std::vector<tipo_da_variavel> nome_da_variavel= {Numero_de_elementos};

No caso acima cada elemento nesse vetor será inicializado com o valor padrão do tipo da variável.

Você também pode já colocar certo número de elementos dentro do vetor

ex: std :: vector < int > v =  {  7 , 5 , 16 , 8  } ;



#include <iostream> 
#include <vector>
 
int main()
{
    // Cria um vetor contendo inteiros 
    std::vector < int > v = { 7 , 5 , 16 , 8 };
 
    // Adiciona mais dois inteiros ao vetor 
    v.push_back(25);
    v.push_back(13);
 
    // Imprime o vetor 
    std::cout << "v = { ";
    for (int n : v) 
    {
       
        std::cout << n << ", ";
    }
    std::cout << "}; \n ";
    return 0;
}

**********************************************************





**********************************************************
#include <iostream>
#include <array>

void MostrarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	//Para enviar um vetor para uma função basta enviar o nome do vetor
	
	//sizeof devolve o número em Bytes do tamanho de uma variável ou tipo
	//logo sizeof(Vetor) vai devolver o numero de elementos do vetor multiplicado pelo tamanho de seu tipo
	//pois são gastos 4bytes por int neste vetor e como são 10 elementos
	//o vetor terá tamanho 40bytes
	//Mas precisamos saber o tamanho!
	//Basta dividir pelo tipo do vetor
	int TamanhoVetor = std::size(Vetor);
	//A partir da Versão C++ 17 ou C++ 2017 você pode usar std::size
	
	std::cout << "\nTamanho Vetor: " << TamanhoVetor;
	/*std::cout << "\nTamanho de um float " << sizeof(float);
	std::cout << "\nTamanho de um int " << sizeof(int);*/

	MostrarVetor(Vetor, TamanhoVetor);
	//Porém é o tamanho?
	//Dá para calcular este tamanho sem ter que enviar?
	
	system("PAUSE");
	return 0;
}

//Para receber um vetor basta colocar o tipo nome do vetor e [ ]
//ou já com tamanho int Array[10]
void MostrarVetor(int Array[], int TamVetor)
{
	
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Array[i] << " -";
	}
}


*************


#include <iostream>
#include <array>

void MostrarVetor(int Array[], int TamVetor);
void AlterarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	int TamanhoVetor = std::size(Vetor);
	
	std::cout << "\nTamanho Vetor: " << TamanhoVetor;
	
	std::cout << "\nVetor ORIGINAL";
	//Então aqui seria o mesmo que colocar
	MostrarVetor(&Vetor[0], TamanhoVetor);
	AlterarVetor(&Vetor[0], TamanhoVetor);
	std::cout << "\nVetor ALTERADO?";
	MostrarVetor(&Vetor[0], TamanhoVetor);
	//O NOME DE UM VETOR EM C E C++ É O MESMO QUE &Vetor[0]
	//o vetor foi alterado o que indica que os vetores são enviados para as funções, por referência!
	//Mas como funciona?

	//O NOME DE UM VETOR EM C E C++ É O MESMO QUE &Vetor[0]
	//Ou seja, Ao isncrever o nome de um vetor sem os colchetes
	//Na realidade é o mesmo que o endereço de memória do primeiro elemento do vetor!
	
	
	system("PAUSE");
	return 0;
}

//então int Array[] indica que isso na realidade é um ponteiro
//podemos inclusive substituir por
void MostrarVetor(int *Ptr_Array, int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Ptr_Array[i] << " -";
	}
	std::cout << "\n\n";
}

void AlterarVetor(int *Ptr_Array, int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		Ptr_Array[i] = Ptr_Array[i] * 2;
	}

	//Ptr_Array[i] é  mesmo que *(Ptr_Array + i)
	//Mas para entender isso é preciso estudar o assunto da próxima aula
	//Aritmética de ponteiros!

	//Aqui não colocamos nada na tela
	//a função recebeu um array Vetor que foi recebido por Array[]
	//A pergunta é Array recebeu uma cópia de todo o vetor ou Recebeu uma referência de Vetor?
	//Se reecebeu uma cópia estre trecho de código Array[i] = Array[2] * 2;
	/*Não irá mudar o Vetor original int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	Assim Vetor continuaria sendo 1,2,3,4,5,6,7,8,9,10
	Mas se o Vetor estiver sendo enviado por referência o valor será mudado
	pois Array terá o endereço de Vetor e conseguirá mudar seus valores
	*/
}


*************

usar ou alterar valor do ponteiro??
 CUIDADO!!!!!!!!!
 
 ************
 
 #include <iostream>
 int main(){
 
 int vetor[]={ 23, 25, 34, 36, 37, 43, 52, 66};
 int *ptr; // ponteiro
 ptr=vetor;
 std::cout<<"[ ";
 for (int i = 0; i<5; i++){
 	// SEM ALTERAR memória
 	//std::cout<<  *(ptr + 1) <<", "; // vai trazer o valor do VETOR atravéz do PONTEIRO e não alterar. 
	//std::cout<<  ptr[i] <<", ";   // é igual ao comando acima, porém aqui deu resultado diferente do mostrado em aula.





/* Assim VAI MUDAR NA MEMÓRIA:   
	std::cout<<  *ptr <<", "; // Se colocar entre parenteses está apenas usando, sem alterar.
	ptr++;    */
	
	// Esse acima é o mesmo que:
	std::cout<<  *(vetor+i) <<", "; // Se colocar entre parenteses está apenas usando, sem alterar. Se tirar vai alterar
	ptr++;
 
 //Para isso seria: ptr = ptr + 2 por exemplo... ou através de ++ ou --
	//Ex: ptr++ agora sim iria mudar pois ptr++ é o  mesmo que ptr = ptr + 1;
 
 }
std::cout<<"  ]\n\n";

system ("PAUSE");
return 0;
}

*********************


********************* Vai refificar se altera ou não:

#include <iostream>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
	
	int Vetor[] = { 1, 23, -78, 900, 234, 55, 77  };
	int *ptr;
	//Neste momento ptr passa a apontar para o endereço do Vetor. Lembre-se que o endereço de uma variável é o primeiro endereço da mesma
	//Logo isso é o mesmo que ptr = &Vetor[0];
	//ptr = Vetor;
	ptr = Vetor;
	//O nome de um vetor é o mesmo que &Vetor[0]
	std::cout << "Vetor[ << i << ] Endereço:  << &Vetor[i] <<  Valor:  << Vetor[i] << \n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] Endereço: " << &Vetor[i] << " Valor: " << Vetor[i] << "\n";
		
	}
	std::cout << "\n\n\n*** Endereço Com Aritmética de Ponteiros***\n";
	std::cout << "Valor Contido em ptr: " << ptr << "\n";
	std::cout << "(ptr + 0) Endereço: " << (ptr + 0) << " Valor: " << *(ptr + 0) << "\n";
	//(ptr + 0 ) pega o endereço de ptr e adiciona zero logo é o endereço do primeiro elemento do vetor, já que ptr aponta para o primeiro elemento ptr = Vetor ou ptr = &Vetor[0]

	std::cout << "(ptr + 1) Endereço: " << (ptr + 1) << " Valor: " << *(ptr + 1) << "\n";
	//(ptr + 1) pega o endereço de ptr e desloca uma unidade de tamanho do tipo do ponteiro
	//como ptr é do tipo int, ou seja aponta para variáveis do tipo int, nesta arquitetura ele vai somar 4 bytes ao endereço de ptr

	std::cout << "(ptr + 2) Endereço: " << (ptr + 2) << " Valor: " << *(ptr + 2) << "\n";
	//(ptr + 2) pega o endereço de ptr e desloca duas unidades de tamanho do tipo do ponteiro como ptr é do tipo int, ou seja aponta para variáveis do tipo int, nesta arquitetura ele vai somar 8 bytes ao endereço de ptr

	//*(ptr + 2) faz o desreferenciamento do ponteiro. Ou seja primeiro ele faz a artimética do ponteiro e vai somar 8 bytes a ptr e com isso vai chegar até o elemento de índice 2

	std::cout << "(ptr + 3) Endereço: " << (ptr + 3) << " Valor: " << *(ptr + 3) << "\n";
	//idem para os demais comandos!
	std::cout << "(ptr + 4) Endereço: " << (ptr + 4) << " Valor: " << *(ptr + 4) << "\n";
	std::cout << "(ptr + 5) Endereço: " << (ptr + 5) << " Valor: " << *(ptr + 5) << "\n";
	std::cout << "(ptr + 6) Endereço: " << (ptr + 6) << " Valor: " << *(ptr + 6) << "\n";

	//MAs observe que o valor de ptr não mudou.. O que está dentro de ptr não irá mudar!
	//pois o comando apenas usa o valor de ptr! O comando não está indicando para que seja mudado nada na memória
	//Para isso seria: ptr = ptr + 2 por exemplo... ou através de ++ ou --
	//Ex: ptr++ agora sim iria mudar pois ptr++ é o  mesmo que ptr = ptr + 1;
	std::cout << "\n\nValor Contido em ptr: " << ptr << "\n";
	//obs: (ptr + 0) é o mesmo que ptr 
	ptr++;
	std::cout << "Valor Contido em ptr depois de ptr++: " << ptr << "\n";
	//agora mudou pois ptr++ é o mesmo que ptr + 1 que na aritmética de ponteiros é pegar
	//o valor de ptr e somar o tamanho do tipo de dados que ele aponta que no caso é de 4 bytes!

	ptr = &Vetor[3]; //ptr passa a apontar para 900
	ptr--; //decrementa e aponta para -78; ou Vetor[2];
	std::cout << "\n\nValor do Apontado por ptr depois de ptr--: " << *ptr << "\n\n\n";
	
	
	std::cout << "\nfor (int i = 0; i < 5; i++)\n";
	std::cout << "Vetor[ << i << ] =  << *(ptr + i) << \n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] = " << *(ptr + i) << "\n";
		
	}
	std::cout << "\n\n";
	//Também pode agora colocar o vetor desta forma usando ponteiros
	//*(ptr + i) fará o mesmo trabalho contido em: *(ptr + 1, +2, +3 +4)

	//Porém ficar digitando toda vez desta forma pode ser trabalhoso
	//Logo podemos substituir *(ptr + i) simplesmente por ptr[i]
	//Ou seja ptr[i] é o mesmo que *(ptr + i)
	std::cout << "\nfor (int i = 0; i < 5; i++)\n";
	std::cout << "Vetor[ << i << ] =  << ptr[i] << \n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Vetor[" << i << "] = " << ptr[i] << "\n";
		
	}

	//Isso nos leva a seguinte conclusão:
	//Vetor[i] também é o mesmo que *(Vetor + i)
	//Como o nome do vetor é o mesmo que &Vetor[0]
	//*(Vetor + i) é o mesmo que *(&Vetor[0] + i);
	//*(&Vetor[0] + 2) é o mesmo que Vetor[2];
	std::cout << "\n\n*(Vetor + 2) =  << *(Vetor + 2)  <<   Mesmo que Vetor[2] =  << Vetor[2] << \n";
	std::cout << "\n*(Vetor + 2) = " << *(Vetor + 2)  << "  Mesmo que Vetor[2] = " << Vetor[2] << "\n";
	
	
	std::cout << "\n\n\n for (int i = 0; i < 5; i++)\n";
	std::cout << " << Vetor [i] <<\n ";
	std::cout << "[ ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << Vetor [i] << " ";
	}std::cout << " ]\n\n";
		
		
	std::cout << "\nfor (int i = 0; i < 5; i++)\n";	
	std::cout << "<< *(Vetor + i) << \n ";
	std::cout << "[ ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << *(Vetor + i) << " ";
	}std::cout << " ]\n\n";
	
	
	std::cout << "\nfor (int i = 0; i < 5; i++)\n";
	std::cout << "<< *Vetor + i <<  sem parenteses \n ";
	std::cout << "[ ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << *Vetor + i << " ";
	}std::cout << " ]\n\n";
	
	
	std::cout << "\nfor (int i = 0; i < 5; i++)\n";
	std::cout << "<< Vetor + i << sem parenteses  e sem *\n ";
	std::cout << "[ ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << Vetor + i << " ";
	}std::cout << " ]\n\n";
	
	
	
	system("PAUSE");
	return 0;
}
 
 *****************************************
 
 *******************************************************
 ************************************************************************
 *******************************************************
 
 *****************************************
 
 





				PROGRAMAÇÃO ORIENTADA A OBJETOS


Classes:	É a abstração. Especificação que serve de base para criar coisas concretas (objetos), é a estrutura, o molde. 
			A classe é como a estrutura de um imóvel.

Instanciação:	É o processo de transformar a Classe, estrutura, em um Objeto já pronto, estruturado,  a casa. 

Objeto:		O objeto é uma instância da classe, já é a casa estruturada. 
	
Outro exemplo:  Receita de um bolo. Classe.
				Preparo, criar. Instância.
				Bolo. Objeto.
**********************************************************************
 objetos, atributos e métodos considere as afirmações abaixo:
I - Um objeto é um espaço de memória criado com base na sua respectiva classe
II - As características do objeto são chamadas de Atributos
III - Os comportamentos do objeto são chamados de métodos

ATRIBUTOS, propriedades, caracteristicas do objeto. São as variáveis e seus tipos.
Funções, Operações, Métodos.
***************************
Lembrar de por ; no final da classe:
	class NomeDaClasse{
		variaveis(atributos);
		funções
	};                           <-----------
***************************	
	
	
Um paradigma é uma forma, modelo, padrão, 
uma abordagem para se resolver problemas. 
Em relação ao paradigma da programação orientada 
à objetos(POO) pode-se afirmar que a programação 
orientada à objetos(POO) é baseada na análise
BOTTOM-UP(De Baixo para Cima).


***************************


#include <iostream>

class Casa
{
	//Estes são os atributos, as propriedades da classe e são representados por variáveis.
	//Estes atributos serão as características de cada objeto criado a partir desta classe
	//Quando o programa estiver sendo executado e queremos saber qual é a situação do objeto em relação 
	//ao valor de seus atributos dizemos que queremos saber o ESTADO do objeto
	int NumQuartos;
	float Tamanho;
	//No geral você coloca b na frente de uma variável bool para indicar que ela é do tipo booleana(bool)
	bool bTemSuite;

public:
	//Estas são as operações da classe, ou métodos ou as funções que o objeto poderá executar quando 
	//for criado(instanciado) a partir desta classe.
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
};

int main()
{
	Casa CasaDePraia;
	return 0;
}

//O operador escopo neste caso indica que o método(a função) MostrarTamanho() pertence a classe Casa
void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

*****

#include <iostream>

class Casa
{
	//Estes são os atributos, as propriedades da classe e são representados por variáveis.
	//Estes atributos serão as características de cada objeto criado a partir desta classe
	//Quando o programa estiver sendo executado e queremos saber qual é a situação do objeto em relação ao valor de seus atributos dizemos que queremos saber o ESTADO do objeto
	
	//Por padrão em uma classe a visibilidade é do tipo private
	//logo se não for indicado nenhuma visibilidade o padrão é ser private(privado)
public:
	//private: esta indicando que estes atributos só poderão ser acessados diretamente no código da classe Casa
	//Agora se colocar public estes atributos estarão acessíveis fora do código da classe
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	//No geral você coloca b na frente de uma variável bool para indicar que ela é do tipo booleana(bool)
	bool bTemSuite{ true };

//public significa que estará acesível fora do código da classe
public:
	//Estas são as operações da classe, ou métodos ou as funções que o objeto poderá executar quando for criado(instanciado) a partir desta classe.
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
	//Melhor é criar um método para que seja alterado o número de quartos
	//seguindo a regra que você vai estabelecer na regra de negócios do sistema
	//por exemplo se o max de quartos for 6(seis)

}; // este é o código da classe... E você pode indicar que tipo de visibilidade terá partes deste código

int main()
{
	Casa CasaDePraia;
	//como a função main está fora do código da classe, dentro dela não será possível acessar membros privados da classe Casa!
	//Contudo poderá ser acessado os membros public(públicos)
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);
	std::cout << "\n Num Quartos: " << CasaDePraia.ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: " << CasaDePraia.TemSuite() ? std::cout << "Sim": std::cout << "Não" << "\n";
	//Para acessar os membros da classe Casa usamos neste caso a notação ponto.
	//NomedoObjeto.NomeDoAtributo ou NomeDoObjeto.NomeDoMetodo ou função
	
	std::cout << "\n";
	//Observer que acessar diretamente este atributo é complicado
	//outra classe ou método(função) pode alterar o valor para algo errado!
	//o ideal é manter os atributos da classe escondidos, privados e acessíveis apenas dentro da classe
	system("PAUSE");
	return 0;
}

//O operador escopo neste caso indica que o método(a função) MostrarTamanho() pertence a classe Casa
//Estes códigos pertencem a classe casa e portanto podem acessar diretamente os seus atributos privados
void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	//
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	} 
	else
	{
		std::cout << "\nNumero de Quartos Invalidos\n";
	}

}

******
estático:
	
	
	
#include <iostream>

class Casa
{
	//Estes são os atributos, as propriedades da classe e são representados por variáveis.
	//Estes atributos serão as características de cada objeto criado a partir desta classe
	//Quando o programa estiver sendo executado e queremos saber qual é a situação do objeto em relação ao valor de seus atributos dizemos que queremos saber o ESTADO do objeto
	
	//Por padrão em uma classe a visibilidade é do tipo private
	//logo se não for indicado nenhuma visibilidade o padrão é ser private(privado)
public:
	//private: esta indicando que estes atributos só poderão ser acessados diretamente no código da classe Casa
	//Agora se colocar public estes atributos estarão acessíveis fora do código da classe
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	//No geral você coloca b na frente de uma variável bool para indicar que ela é do tipo booleana(bool)
	bool bTemSuite{ true };

//public significa que estará acesível fora do código da classe
public:
	//Estas são as operações da classe, ou métodos ou as funções que o objeto poderá executar quando for criado(instanciado) a partir desta classe.
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
	//Melhor é criar um método para que seja alterado o número de quartos
	//seguindo a regra que você vai estabelecer na regra de negócios do sistema
	//por exemplo se o max de quartos for 6(seis)

}; // este é o código da classe... E você pode indicar que tipo de visibilidade terá partes deste código

int main()
{
	Casa CasaDePraia;
	//como a função main está fora do código da classe, dentro dela não será possível acessar membros privados da classe Casa!
	//Contudo poderá ser acessado os membros public(públicos)
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);
	std::cout << "\n Num Quartos: " << CasaDePraia.ObtenhaNumeroDeQuartos();
  /*ESTA PARTE FOI CORRIGIDA COLOCANDO O COMANDO ? NA LINHA ABAIXO DO std::cout */
	std::cout << "\n Tem Suite: ";  
	CasaDePraia.TemSuite() ? (std::cout << "Sim") : (std::cout << "Nao") << "\n";
	//Para acessar os membros da classe Casa usamos neste caso a notação ponto.
	//NomedoObjeto.NomeDoAtributo ou NomeDoObjeto.NomeDoMetodo ou função
	
	std::cout << "\n";
	//Observer que acessar diretamente este atributo é complicado
	//outra classe ou método(função) pode alterar o valor para algo errado!
	//o ideal é manter os atributos da classe escondidos, privados e acessíveis apenas dentro da classe
	system("PAUSE");
	return 0;
}

//O operador escopo neste caso indica que o método(a função) MostrarTamanho() pertence a classe Casa
//Estes códigos pertencem a classe casa e portanto podem acessar diretamente os seus atributos privados
void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	//
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	} 
	else
	{
		std::cout << "\nNumero de Quartos Invalidos\n";
	}

}


******


#include <iostream>

class Casa
{
	
private:
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ true };

public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
	
}; 

int main()
{
	Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);
	std::cout << "\n Num Quartos: " << CasaDePraia.ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: " << CasaDePraia.TemSuite() ? std::cout << "Sim": std::cout << "Não" << "\n";
	std::cout << "\n";
	system("PAUSE");
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	} 
	else
	{
		std::cout << "\nNumero de Quartos Invalidos\n";
	}

}


********** FLECHA

(*). Trocou-se 4 caracteres por apenas 2 ->
	//Mas é importante que você saiba que tudo é notação ponto.
	//Logo quando você digitar: 
	CasaDePraia->SetNumQuartos(5);
	//é o mesmo que:
	(*CasaDePraia).SetNumQuartos(5);

**********
dinâmico:
flecha:     ---------------->>>>>>>>>>>>>>> é o desreferenciamento do ponteiro	
	
#include <iostream>

class Casa
{

private:
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ true };

public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);

};

int main()
{
	/*   Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);*/
	Casa *CasaDePraia = new Casa();
	//Agora você está criando, instanciando um objeto via alocação dinâmica de memória, utilizando ponteiros*. Basicamente é o mesmo que Declarar da forma que você declarou na aula passada. Ou seja será criado um objeto baseado na classe Casa e o endereço de memória deste objeto será colocado em CasaDePraia.

	//Contudo trata-se de um ponteiro. Lembre... Como acessar o apontado pelo ponteiro? Isso mesmo com desrefenciamento*
	//Logo CasaDePraia.ObtenhaNumeroDeQuartos() devemos usar
	//*ptr mas neste caso o ponteiro é CasaDePraia 
	//Logo para desreferenciar ele você faz *CasaDePraia
	//Mas agora você está diante de uma nova estrutura de variável
	//Ele contém diversos atributos e métodos(funções)
	//Que são acessíveis via ponto.
	//Mas se fizer isso apenas estaria errado
	//O correto é assim
	//(Endereçoqueponteiroaponta).Atributo;
	//(Endereçoquefuncaoaponta).funcao();
	//(*CasaDePraia).MostrarTamanho();
	//(*CasaDePraia).ObtenhaNumeroDeQuartos();
	//Mas ficar digitando toda hora dois parênteses, um asterisco e um ponto ficou cansativo!!!
	//Os criadores da linguagem criaram então um atalho para esta notação
	//(*CasaDePraia). é o mesmo que CasaDePraia->
	//É a chamada notação flecha    ---------------->>>>>>>>>>>>>>> é o desreferenciamento do ponteiro	
	
	//(*). Trocou-se 4 caracteres por apenas 2 ->
	//Mas é importante que você saiba que tudo é notação ponto.
	//Logo quando você digitar: 
	//CasaDePraia->SetNumQuartos(5);
	//é o mesmo que:
	//(*CasaDePraia).SetNumQuartos(5);


	std::cout << "\n Num Quartos: " << CasaDePraia->ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: ";  
	CasaDePraia->TemSuite() ? std::cout << "Sim" : std::cout << "Não" << "\n";
	std::cout << "\n";
	system("PAUSE");
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	}
	else
	{
		std::cout << "\nNumero de Quartos Invalidos\n";
	}

}


*******************************************************************
static/global, stack e  heap
Stack (pilha)

*******************************************************************

Isso não estoura a pilha, mas por que não estoura?

#include <stdio.h>

int main(){
   int *p;
   while(1){
      p = new int;
   }
}

/*"A stack ou pilha é uma área bem menor e a heap ou monte é uma área de memória bem maior.
A stack tem no windows um tamanho padrão de apenas 1MB(um megabyte)!" (https://pt.stackoverflow.com/questions/221448/por-que-n%C3%A3o-estoura-a-pilha/)*/
*****

int main()
{
    int vetor[3300000]; 
 //TENTANDO ALOCAR 3 MILHOES E 300 MIL INTEIROS
    printf("Esta linha não será exibida pois ocorrerá antes STACKOVERFLOW");

    return 0;
}
/* "Bem, se considerarmos no windows que um inteiro ocupa 4B(quatro Bytes) 
temos então a tentativa de alocar 3.300.000 x 4B = 13.200.000 Bytes 1MB(um megabyte)
 equivale a 1.048.576 Bytes

13.200.000B /1.048.576B EQUIVALE A 12,58MB(doze virgula cinquenta e oito megabytes) 
Muito maior que 1MB de espaço na pilha(stack) Logo, VAI ESTOURAR!"  (https://pt.stackoverflow.com/questions/221448/por-que-n%C3%A3o-estoura-a-pilha/)*/
****
#include <stdio.h>

int main(){
   int *p; // aloca uma variável ponteiro na stack(pilha)
   while(1){ //loop infinito
      p = new int; // a variável p contida na pilha recebe o endereço de memória alocado para um inteiro através de new
   }
}
/*(https://pt.stackoverflow.com/questions/221448/por-que-n%C3%A3o-estoura-a-pilha/)*/

***********************


#include <iostream>

void Funcao01();
/*
void Funcao02();            ****FORAM RECORTADAS DAQUI e coladas ao
void Funcao03();                     final de cada função para 
void Funcao04();                   formar a pilha, LIFO, observe nas funções abaixo
*/

int VarGlobal{ 10 };/* Variavel global será armazenada na RAM na região destinada 
às variáveis globais e variáveis estáticas*/

int main()
{/* Como  main() é uma função a variável VarMain é local à função main(),
 portanto, esta variável sera armazenada na memória destinada às variáveis
 locais e chamadas de funções STACK (pilha), serão apagadas quando a função terminar*/
 
	int VarMain{ 00 };
	Funcao01();
	system("PAUSE");
	return 0;
}

void Funcao01()
{/*esta variável sera armazenada na memória destinada às variáveis
 locais e chamadas de funções STACK (pilha), serão apagadas quando a função terminar*/
	int Var01{ 01 };
	static int VarEstatica{ 20 };
	std::cout << "\n Chamando Funcao01\n";
	std::cout << "\n Endereco Var01: " << 
	&Var01 << "\n";
	VarEstatica++;
	std::cout << "\nValor VarEstatica: " 
	<< VarEstatica << std::endl;
	Funcao02();
}

void Funcao02()
{/*esta variável sera armazenada na memória destinada às variáveis
 locais e chamadas de funções STACK (pilha), serão apagadas quando a função terminar*/
	int Var02{ 02 };
	std::cout << "\n Chamando Funcao02\n";
	std::cout << "\n Endereco Var02: "
	<< &Var02 << "\n";
	Funcao03();
}

void Funcao03()
{/*esta variável sera armazenada na memória destinada às variáveis
 locais e chamadas de funções STACK (pilha), serão apagadas quando a função terminar*/
	int Var03{ 03 };
	std::cout << "\n Chamando Funcao03\n";
	std::cout << "\n Endereco Var03: " 
	<< &Var03 << "\n";
	Funcao04();
}

void Funcao04()
{/*esta variável sera armazenada na memória destinada às variáveis
 locais e chamadas de funções STACK (pilha), serão apagadas quando a função terminar*/
	int Var04{ 04 };
	std::cout << "\n Chamando Funcao04\n";
	std::cout << "\n Endereco Var04: "
	<< &Var04 << "\n";
}


*******************************************


A divisão de memória para um processo de uma aplicação é mais complexa. Estamos usando stack e heap para simplificar.

O sistema operacional ao carregar um programa(.exe) na memória disponibiliza ao programa um espaço de endereçamento. Esse espaço é a memória disponível para aquele programa.Existe no geral a seguinte divisão deste espaço de endereçamento de um programa(ou seus processos)


1. Segmento de código (Code Segment) - TEXT

O segmento de código, também conhecido como segmento de texto, é a área da memória que contém o código executável(binário) de seu programa. Ou seja, é onde está armazenado as instruções de seu programa. O segmento de código geralmente é somente leitura para evitar o riscos de ataques como buffer overflow, sobreposição de memória etc. O segmento de código não contém variáveis ​​de programa como variável local, variáveis ​​globais etc. Contém apenas  no geral o código executável do programa que está sendo executado.

Depois temos outra região de memória chamada de Segmento de dados: onde são armazenados as variáveis ​​globais e variáveis ​​estáticas de dados. Não é uma memória somente leitura e é dividida em .bss(Segmento de dados não inicializado) e .data(Segmento de dados inicializado)



2. Segmento de dados não inicializados(bss ou Block Started by Symbol ou bloco iniciado pelo símbolo)

Este segmento também é conhecido como bss .Esta é a parte da memória que contém:Variáveis ​​globais não inicializadas(incluindo variáveis ​​de ponteiro), Variáveis ​​globais constantes não inicializadas .Variáveis ​​estáticas locais não inicializadas. Qualquer variável local global ou estática que não seja inicializada será armazenada no segmento de dados não inicializado(bss). Por exemplo: variável global int VarGlobal;ou variável local estática static int VarLocalStatic;será armazenada no segmento de dados não inicializado. Se você declarar uma variável global e a inicializar como 0ou NULLainda assim, ela será direcionada para o segmento de dados não inicializado ou bss.

Ou seja, quaisquer variáveis não-​​inicializadas e que não são definidas dentro de uma função (e, portanto, podem ser acessadas de qualquer lugar) ou que são definidas em uma função, mas são definidas como estáticas,(static) para que mantenham seu endereço nas chamadas subsequentes estarão armazenadas aqui na região de .bss



3. Segmento de dados inicializados(.data)

Este segmento armazena:Variáveis ​​globais inicializadas(incluindo variáveis ​​de ponteiro), Variáveis ​​globais constantes  inicializadas .Variáveis ​​estáticas locais inicializadas . Por exemplo: variável global int VarGlobalVar = 1;ou variável local estática static int VarLocalStatic = 1;será armazenada no segmento de dados inicializado. O tamanho desse segmento é determinado pelo tamanho dos valores no código-fonte do programa e não é alterado no tempo de execução.

Ou seja, quaisquer variáveis ​​inicializadas e que não são definidas em uma função (e, portanto, podem ser acessadas de qualquer lugar) ou que são definidas em uma função, mas são definidas como estáticas, para que mantenham seu endereço nas chamadas subsequentes estãrão armazenadas aqui na região de .data segmente.



4. Segmento de pilha(stack)

O segmento de pilha é usado para armazenar variáveis ​​criadas dentro de funções (a função pode ser a principal ou definida pelo usuário ), variáveis ​​como Variáveis ​​locais da função (incluindo variáveis ​​de ponteiro), Argumentos passados ​​para a função, As variáveis ​​armazenadas na pilha serão removidas assim que a execução da função terminar.  Cada função terá uma região de memória para ela dentro da STACK denominada de STACK FRAME



5. Segmento de heap

Este segmento é para oferecer suporte à alocação dinâmica de memória. Uma variável ponteiro estará na pilha(STACK) ou no segmento de dados(.BSS ou .Data), dependendo da maneira como é declarada usada. O heap é o segmento de memória que não está definido para um tamanho constante antes da compilação e pode ser controlado dinamicamente pelo programador. Usamos a memória do heap quando não sabemos quanto espaço uma estrutura de dados ocupará em nosso programa, quando precisamos alocar mais memória do que a disponível na pilha ou quando precisamos criar variáveis ​​que durem no tempo de duração da nossa aplicação.

Então veja que acima temos 3(três) possibilidades para variáveis ponteiros serem armazenadas nas regiões de memória...

Se for uma variável ponteiro global não inicializada será alocada na .bss

Se for uma variável ponteiro global inicializada será alocada na data segment

Se for uma variável ponteiro local a uma função será alocada na stack, precisamente na stack frame da função que a variável ponteiro foi declarada

Para simplificar consideramos apenas stack e heap e neste caso a stack conterá bss e data segment, pois isso as variáveis ponteiros estarão sempre na stack. Porém as variáveis que o ponteiro aponta estarão ou na stack ou quando forem alocadas dinamicamente estão na Heap

O que ocorre quando o programa chamar/executar uma função?

Quando você executa uma função em seu código é criado dentro da região stack  chamado STACK FRAME ou Quadro/Bloco de Pilha. É uma região que guarda as informações da função, incluindo variáveis para os parâmetros passados para a função, o endereço de retorno (para onde a instrução return aponta).  variáveis criadas dentro da função (variáveis locais). E é importante lembrar que se uma ponteiro é criado dentro de uma função ele irá pertencer a esta região de stack dentro da stack frame de sua função...

Nossa agora ficou confuso de vez professor!

Ok, vamos ver um exemplo de código para facilitar Leia os comentários do código....

#include <iostream>
 
/*Relembrando, uma variável é global quando ela for declarada FORA de qualquer função do código*/
int VarGlobalNaoInicializada;//<----Alocada no .bss Segmento de dados não inicializados
int VarGlobalInicializada = 10;//<----Alocada no Segmento de dados inicializados(.data) 
static int VarGlobalStaticNaoIncializada;//<----Alocada no.bss Segmento de dados não inicializados
static int VarGlobalStaticInicializada = 5;//<----Alocada no Segmento de dados inicializados(.data) 
int* PonteiroGlobalNaoInicializado;//<----Alocada no .bss Segmento de dados não inicializados
int* PonteiroGlobalInciizado = &VarGlobalInicializada;//<----Alocada no Segmento de dados inicializados(.data) 
/*Observe que este acima são ponteiros globais e por isso estarão em .bss ou .data segment*/
 
class Casa
{
public:
	int NumnQuartos;
	float Tamanho;
	bool bTemSuite;
	float MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
};
 
/*Agora temos uma função que é a função principal main. O que for declarada dentro dela será uma variável local a esta função main. Mais atenção! new Casa() está criando dinâmicamente um objeto e por isso este objeto vai ficar na região de memória onde residem os recursos alocados dinâmicamente que é a HEAP*/
int main()
{
	int VarLocal = 20;//<---Estará na stack dentro da STACK FRAME da função main
	int* PonteiroLocal = &VarLocal;//<---Estará na stack dentro da STACK FRAME da função main
	/*Aqui criamos um objeto na Stack e um ponteiro do tipo Casa de nome CaseDePraiaStack. Então CaseDePraiaStack irá apontar para um objeto criado na STACK que teve como molde a classe Casa. É muito comum achar que CasaDePraiaStack seja o objeto. Não é! ele apenas é um  ponteiro para um objeto do tipo da classe Casa que será alocado neste caso na STACK*/
	Casa CaseDePraiaStack;
 
	/*Aqui  CasaDePraia é um ponteiro local a função main e portanto estará aramazenado na stack dentro da stack frama da função main(). Este ponteiro CasaDePraia irá apontar para um objeto criado dinâmicamente (new Casa()) e que portanto este objeto estará na Heap*/
	Casa* CasaDePraia = new Casa();
	
	CaseDePraiaStack.Tamanho = 100;
	CasaDePraia->MostrarTamanho();
 
	CasaDePraia->Tamanho = 50;
	CasaDePraia->MostrarTamanho();
 
	system("PAUSE");
	return 0;
}
 
float Casa::MostrarTamanho()
{
	static int QtdeVezesMostrouTamanho = 0; // Aqui apenas desta variável estar dentro de uma função
	//ela estará armazenada na região de memória data segment(Segmento de dados inicializados(.data))
	QtdeVezesMostrouTamanho++;
	system("CLS");
	std::cout << "\nQtde Vezes mostrou tamanho: " << QtdeVezesMostrouTamanho << "\n";
	return Tamanho;
}
 
int Casa::ObtenhaNumeroDeQuartos()
{
	return NumnQuartos;
}
 
bool Casa::TemSuite()
{
	return bTemSuite;
}
Veja abaixo como ficaria dividido  a região de memória deste programa com o código acima


Na figura acima eu simplifiquei e não coloquei o STACK FRAME das outras funções, só coloquei o da função  main()

Se tivéssemos por exemplo o seguinte:  float *Ptr=&Num;

Onde Ptr e Num estariam alocados?

Neste caso se isso estiver dentro da função main ou outra função tanto a variável Ptr quanto Num estariam na STACK dentro de um STACK FRAME da função em que estas variáveis residem.

Caso contrário se forem globais/estáticas estarão na .bss ou data segment a depender se foram inicializadas ou não...

É bom lembrar que esta divisão que coloquei acima na primeira figura não é de toda a memória RAM

o que é dividido desta forma é o espaço de endereçamento fornecido ao seu programa quando ele executa., As vezes um programa é dividido em vários processos e então cada processo executado terá este espaço de endereçamento.



**********************************************************

Ponteiros this
construtores e destrutores

**********************************************************
serão 3 etapas. Serão criados arquivos .cpp e .h

parte 1:
	
	
	
#pragma once
#include <iostream>
#include <string>

//este é o arquivo .h é onde existem apenas as declarações dos atributos e métodos da classe. 
Aqui não existem as definições, implementações das funções, pois isso será feito no arquivo .cpp. 
É a separação do O QUÊ (.h) do COMO (.cpp)

class Conta
{
//indica que o acesso a estes membros abaixo de private:
//só será permitido de dentro do código da classe
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo{ 0.0 };

//indica que os membros abaixo podem ser acessados pelo objeto da classe Conta fora do código da classe Conta.
public:
	bool Sacar(double Valor);
	void Depositar(double Valor);
	//Neste caso o parêmetro Destino recebe apenas uma cópia
	//do valor do objeto. Ele não tem como alterar o objeto
	//pois só recebeu uma cópia dele
	//Logo podemos usar o conceito de referência para passar a referência do objeto e com isso Destino vai poder 
  alterar este objeto pois será realizada uma passagem de argumentos por Referência e não mais por valor
	void Transferir(Conta &Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int NumConta);

};


******* Parte 2	
	
	
	
//precisamos incluir o arquivo .h relativo a classe Conta
//Para que este arquivo Conta.cpp possa "Enxergar" as declarações da classe Conta.
#include "Conta.h"
#include <iostream>
#include <string>

//Aqui o operador escopo:: está indicando que a função/Método sacar pertence a classe Conta e que este código a seguir vai implementar a função Sacar.
bool Conta::Sacar(double Valor)
{
	//Se o valor do Saldo no Objeto for menor que o valor a ser sacado, ele não poderá sacar
	if (Saldo < Valor)
	{
		std::cout << "\Saldo Insuficiente!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
	//Senão ele poderá sacar
	//Temos que diminuir o saldo
		Saldo = Saldo - Valor;
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
	
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor; //o mesmo que Saldo = Saldo + Valor;
	std::cout << "\nDeposito de R$ " << Valor << " Efetuado com Sucesso!\n";
}

//A função recebe como argumentos para seus seus parêmtros um Objeto do tipo Casa e um valor double.

//Aqui o parâmetro Destino irá receber este objeto
void Conta::Transferir(Conta &Destino, double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";

	}
	else
	{
		//Aqui Destino está com o objeto passado para a função
		//Logo vai chamar o método Depositar desta função
		Destino.Depositar(Valor);
		//Depois de depositar você deve retirar este valor depositado do saldo
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferência Realizada com Sucesso!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

int Conta::GetNumConta()
{
	return NumConta;
}

std::string Conta::GetTitular()
{
	return Titular;
}

void Conta::SetBanco(std::string Banco)
{
	//Como o compilador vai saber se Bancó é variável local ou o atributo da classe Conta?
	//se this é um ponteiro para chegar no apontado pelo ponteiro temos
	//*this , mas como this é um ponteiro para um objeto ele precisa usar a notação ponto. para acessar atributos e executar funções do objeto

	//Agora o compilador sabe que Banco é a variável local que recebeu o argumento string
	//e que deve ser colocada no atributo Banco do objeto apontado por this
	//(*this).Banco = Banco;
	//Contudo no geral usa-se a notação flecha
	this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}



******** parte 3


//Na função main() iremos instanciar objetos
//desta forma ela precisa incluir as declarações da classe Conta
#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	//Criamos um  objeto ContaCliente01 do tipo Conta
	//Está alocado na Stack
	Conta ContaCliente01;
	//Criamos um  objeto ContaCliente02 do tipo Conta
	//Está alocado na Stack
	Conta ContaCliente02;

	ContaCliente01.SetBanco("Bradesco");
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fulano");
	ContaCliente01.Depositar(14690);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco Do Brasil");
	ContaCliente02.SetAgencia(5678);
	ContaCliente02.SetNumConta(1111);
	ContaCliente02.SetTitular("Beltrano");

	//o objeto ContaCliente02 sérá enviado como argumento para a função transferir
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);


	system("PAUSE");
	return 0;
}

***************************



***************************************** mesmo que o anterior, mas tiveram algumas modificações 


#pragma once
#include <iostream>
#include <string>

//este é o arquivo .h é onde existem apenas as declarações dos atributos e métodos da classe. Aqui não existem as definições, implementações das funções, pois isso será feito no arquivo .cpp. É a separação do O QUÊ (.h) do COMO (.cpp)

class Conta
{
//indica que o acesso a estes membros abaixo de private:
//só será permitido de dentro do código da classe
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo{0.0};

//indica que os membros abaixo podem ser acessados pelo objeto da classe Conta fora do código da classe Conta.
public:
	bool Sacar(double Valor);
	void Depositar(double Valor);
	//Neste caso o parêmetro Destino recebe apenas uma cópia
	//do valor do objeto. Ele não tem como alterar o objeto
	//pois só recebeu uma cópia dele
	//Logo podemos usar o conceito de referência para passar a referência do objeto e com isso Destino vai poder alterar este objeto pois será realizada uma passagem de argumentos por Referência e não mais por valor
	void Transferir(Conta &Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void GetEnderecoThis();   //<---- modificado do anterior
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int NumConta);

};


*********** parte 2 - B


******* Parte 2	
	
	
	
//precisamos incluir o arquivo .h relativo a classe Conta
//Para que este arquivo Conta.cpp possa "Enxergar" as declarações da classe Conta.
#include "Conta.h"
#include <iostream>
#include <string>

//Aqui o operador escopo:: está indicando que a função/Método sacar pertence a classe Conta e que este código a seguir vai implementar a função Sacar.
bool Conta::Sacar(double Valor)
{
	//Se o valor do Saldo no Objeto for menor que o valor a ser sacado, ele não poderá sacar
	if (Saldo < Valor)
	{
		std::cout << "\Saldo Insuficiente!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
	//Senão ele poderá sacar
	//Temos que diminuir o saldo
		Saldo = Saldo - Valor;
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
	
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor; //o mesmo que Saldo = Saldo + Valor;
	std::cout << "\nDeposito de R$ " << Valor << " Efetuado com Sucesso!\n";
}

//A função recebe como argumentos para seus seus parêmtros um Objeto do tipo Casa e um valor double.

//Aqui o parâmetro Destino irá receber este objeto
void Conta::Transferir(Conta &Destino, double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";

	}
	else
	{
		//Aqui Destino está com o objeto passado para a função
		//Logo vai chamar o método Depositar desta função
		Destino.Depositar(Valor);
		//Depois de depositar você deve retirar este valor depositado do saldo
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferência Realizada com Sucesso!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

int Conta::GetNumConta()
{
	return NumConta;
}

std::string Conta::GetTitular()
{
	return this->Titular;
}

void Conta::GetEnderecoThis()
{
	std::cout << "\nthis contem dentro dele o endereco: " << this << "\n";

}

void Conta::SetBanco(std::string Banco)
{
	//Como o compilador vai saber se Bancó é variável local ou o atributo da classe Conta?
	//se this é um ponteiro para chegar no apontado pelo ponteiro temos
	//*this , mas como this é um ponteiro para um objeto ele precisa usar a notação ponto. para acessar atributos e executar funções do objeto

	//Agora o compilador sabe que Banco é a variável local que recebeu o argumento string
	//e que deve ser colocada no atributo Banco do objeto apontado por this
	//(*this).Banco = Banco;
	//Contudo no geral usa-se a notação flecha
	this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}

**************** parte 3 - B


//Na função main() iremos instanciar objetos
//desta forma ela precisa incluir as declarações da classe Conta
#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	Conta ContaCliente01;
	//Criamos um  objeto ContaCliente02 do tipo Conta
	//Está alocado na Stack

	Conta ContaCliente02;

	std::cout << "\nEndereço de memoria do Objeto ContaCliente01: " << &ContaCliente01 << "\n";
	ContaCliente01.GetEnderecoThis();
	std::cout << "\nEndereço de memoria do Objeto ContaCliente02: " << &ContaCliente02 << "\n";
	ContaCliente02.GetEnderecoThis();

	ContaCliente01.SetBanco("Bradesco");
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fulano");
	ContaCliente01.Depositar(14690);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco Do Brasil");
	ContaCliente02.SetAgencia(5678);
	ContaCliente02.SetNumConta(1111);
	ContaCliente02.SetTitular("Beltrano");

	//o objeto ContaCliente02 sérá enviado como argumento para a função transferir
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);


	system("PAUSE");
	return 0;
}


******************************************  parte 1 - C

#pragma once
#include <iostream>
#include <string>

//este é o arquivo .h é onde existem apenas as declarações dos atributos e métodos da classe. Aqui não existem as definições, implementações das funções, pois isso será feito no arquivo .cpp. É a separação do O QUÊ (.h) do COMO (.cpp)

class Conta
{
//indica que o acesso a estes membros abaixo de private:
//só será permitido de dentro do código da classe
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo{0.0};

//indica que os membros abaixo podem ser acessados pelo objeto da classe Conta fora do código da classe Conta.
public:
	bool Sacar(double Valor);
	void Depositar(double Valor);
	//Neste caso o parêmetro Destino recebe apenas uma cópia
	//do valor do objeto. Ele não tem como alterar o objeto
	//pois só recebeu uma cópia dele
	//Logo podemos usar o conceito de referência para passar a referência do objeto e com isso Destino vai poder alterar este objeto pois será realizada uma passagem de argumentos por Referência e não mais por valor
	void Transferir(Conta &Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void GetEnderecoThis();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int NumConta);

};


********************* parte 2 - C

//precisamos incluir o arquivo .h relativo a classe Conta
//Para que este arquivo Conta.cpp possa "Enxergar" as declarações da classe Conta.
#include "Conta.h"
#include <iostream>
#include <string>

//Aqui o operador escopo:: está indicando que a função/Método sacar pertence a classe Conta e que este código a seguir vai implementar a função Sacar.
bool Conta::Sacar(double Valor)
{
	//Se o valor do Saldo no Objeto for menor que o valor a ser sacado, ele não poderá sacar
	if (Saldo < Valor)
	{
		std::cout << "\Saldo Insuficiente!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
	//Senão ele poderá sacar
	//Temos que diminuir o saldo
		Saldo = Saldo - Valor;
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
	
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor; //o mesmo que Saldo = Saldo + Valor;
	std::cout << "\nDeposito de R$ " << Valor << " Efetuado com Sucesso!\n";
}

//A função recebe como argumentos para seus seus parêmtros um Objeto do tipo Casa e um valor double.

//Aqui o parâmetro Destino irá receber este objeto
void Conta::Transferir(Conta &Destino, double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";

	}
	else
	{
		//Aqui Destino está com o objeto passado para a função
		//Logo vai chamar o método Depositar desta função
		Destino.Depositar(Valor);
		//Depois de depositar você deve retirar este valor depositado do saldo
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferência Realizada com Sucesso!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

int Conta::GetNumConta()
{
	return NumConta;
}

std::string Conta::GetTitular()
{
	return this->Titular;
}

void Conta::GetEnderecoThis()
{
	std::cout << "\nthis contem dentro dele o endereco: " << this << "\n";

}

void Conta::SetBanco(std::string Banco)
{
	//Como o compilador vai saber se Bancó é variável local ou o atributo da classe Conta?
	//se this é um ponteiro para chegar no apontado pelo ponteiro temos
	//*this , mas como this é um ponteiro para um objeto ele precisa usar a notação ponto. para acessar atributos e executar funções do objeto

	//Agora o compilador sabe que Banco é a variável local que recebeu o argumento string
	//e que deve ser colocada no atributo Banco do objeto apontado por this
	//(*this).Banco = Banco;
	//Contudo no geral usa-se a notação flecha
	this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}


***************************** parte 3 - C


//Na função main() iremos instanciar objetos
//desta forma ela precisa incluir as declarações da classe Conta
#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	Conta ContaCliente01;
	//Criamos um  objeto ContaCliente02 do tipo Conta
	//Está alocado na Stack

	Conta ContaCliente02;

	std::cout << "\nEndereço de memoria do Objeto ContaCliente01: " << &ContaCliente01 << "\n";
	ContaCliente01.GetEnderecoThis();
	std::cout << "\nEndereço de memoria do Objeto ContaCliente02: " << &ContaCliente02 << "\n";
	ContaCliente02.GetEnderecoThis();

	ContaCliente01.SetBanco("Bradesco");
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fulano");
	ContaCliente01.Depositar(14690);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco Do Brasil");
	ContaCliente02.SetAgencia(5678);
	ContaCliente02.SetNumConta(1111);
	ContaCliente02.SetTitular("Beltrano");

	//o objeto ContaCliente02 sérá enviado como argumento para a função transferir
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);


	system("PAUSE");
	return 0;
}


******************************************

Funções (metodos) CONSTRUTORES


******************************************



#pragma once
#include <iostream>
#include <string>

//este é o arquivo .h é onde existem apenas as declarações dos atributos e métodos da classe. Aqui não existem as definições, implementações das funções, pois isso será feito no arquivo .cpp. É a separação do O QUÊ (.h) do COMO (.cpp)

class Conta
{
//indica que o acesso a estes membros abaixo de private:
//só será permitido de dentro do código da classe
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo;

//indica que os membros abaixo podem ser acessados pelo objeto da classe Conta fora do código da classe Conta.
public:
	//Construtor com parâmetros. Desta forma podemos criar objetos e já enviar argumentos para serem incializados nos atributos(variáveis) do objeto
	
	//O construtor padrão ou default é simplesmente um contrutor vazio
	Conta();
	//Este construtor é criado automáticamente pelo compilador se Você NÃO CRIAR UM CONSTRUTOR para sua classe.
	//Contudo como criamos abaixo um construtor o compilador deixou de criar
	//o construtor e por isso não mais como criar objetos sem ser através deste construtor abaixo:
	//e ai precisaria enviar argumentos inciais
	
	Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo);
	~Conta();

	bool Sacar(double Valor);
	void Depositar(double Valor);
	//Neste caso o parêmetro Destino recebe apenas uma cópia
	//do valor do objeto. Ele não tem como alterar o objeto
	//pois só recebeu uma cópia dele
	//Logo podemos usar o conceito de referência para passar a referência do objeto e com isso Destino vai poder alterar este objeto pois será realizada uma passagem de argumentos por Referência e não mais por valor
	void Transferir(Conta &Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void GetEnderecoThis();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int NumConta);

};


******************


//precisamos incluir o arquivo .h relativo a classe Conta
//Para que este arquivo Conta.cpp possa "Enxergar" as declarações da classe Conta.
#include "Conta.h"
#include <iostream>
#include <string>

//Você pode usar o construtor padrão para já iniciar os atributos do objeto
//com algum valor padrão e evitar lixo de memória
Conta::Conta()
{
	//aqui mais uma vez o this está implítico
	//seria o mesmo que:
	this->Banco = "";
	this->Agencia = 0;
	this->NumConta = 0;
	this->Titular = "";
	this->Saldo = 0.0;
	std::cout << "\nConstrutor Objeto Endereco: " << this << " executado!\n";

}

Conta::Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo)
{
	this->Banco = Banco;
	this->Agencia = Agencia;
	this->NumConta = NumConta;
	this->Titular = Titular;
	this->Saldo = Saldo;
	std::cout << "\nConstrutor Objeto Endereco: " << this << " executado!\n";

}

Conta::~Conta()
{
	std::cout << "\nDestrutor Objeto Endereco: " << this << " executado!\n";
}

//Aqui o operador escopo:: está indicando que a função/Método sacar pertence a classe Conta e que este código a seguir vai implementar a função Sacar.
bool Conta::Sacar(double Valor)
{
	//Se o valor do Saldo no Objeto for menor que o valor a ser sacado, ele não poderá sacar
	if (Saldo < Valor)
	{
		std::cout << "\Saldo Insuficiente!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
	//Senão ele poderá sacar
	//Temos que diminuir o saldo
		Saldo = Saldo - Valor;
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
	
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor; //o mesmo que Saldo = Saldo + Valor;
	std::cout << "\nDeposito de R$ " << Valor << " Efetuado com Sucesso!\n";
}

//A função recebe como argumentos para seus seus parêmtros um Objeto do tipo Casa e um valor double.

//Aqui o parâmetro Destino irá receber este objeto
void Conta::Transferir(Conta &Destino, double Valor)
//isso é o mesmo que colocar
//Conta &Destino = ContaCliente02;
//ou seja será um referencia para um objeto do tipo conta que neste caso é ContaCliente02
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente\n";

	}
	else
	{
		//Aqui Destino está com o objeto passado para a função
		//Logo vai chamar o método Depositar desta função
		Destino.Depositar(Valor);
		//Depois de depositar você deve retirar este valor depositado do saldo
		Saldo -= Valor;
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferência Realizada com Sucesso!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

int Conta::GetNumConta()
{
	return NumConta;
}

std::string Conta::GetTitular()
{
	//assim como aqui também está implicíto
	return this->Titular;
	//No geral não colocarmos this
	//Somente quando for necessário!
}

void Conta::GetEnderecoThis()
{
	std::cout << "\nthis contem dentro o endereco:" << this << "\n";
}

//e foi recebida no parâmetro Banco
void Conta::SetBanco(std::string Banco)
{
	//Como o compilador vai saber se Bancó é variável local ou o atributo da classe Conta?
	//se this é um ponteiro para chegar no apontado pelo ponteiro temos
	//*this , mas como this é um ponteiro para um objeto ele precisa usar a notação ponto. para acessar atributos e executar funções do objeto

	//Agora o compilador sabe que Banco é a variável local que recebeu o argumento string
	//e que deve ser colocada no atributo Banco do objeto apontado por this
	//(*this).Banco = Banco;
	//Contudo no geral usa-se a notação flecha
	this->Banco = Banco;
	//Aqui o atributos do objeto cujo endereço é está em this irá receber o valor que está em Banco
	//que é "Bradesco"
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

//Neste caso precisamos do this pois o nome dos parâmetros são iguais
void Conta::SetTitular(std::string Titular)
{
	//aqui não precisaria pois os nomes são diferentes
	//MAs como o compilador sabe que Titular Pertence a objeto que está executando a função?
	//Está implícito neste caso o this
	this->Titular = Titular;
}



**********************


//Na função main() iremos instanciar objetos
//desta forma ela precisa incluir as declarações da classe Conta
#include "Conta.h"
#include <iostream>
#include <string>

int main()
{
	//Criamos um  objeto ContaCliente01 do tipo Conta
	//Está alocado na Stack
	Conta Cliente00;
	//como está desta forma o objeto seria criado com o construtor automático
	//conhecido por construtor Padrão ou Default
	Conta ContaCliente01("Itau",2222,5555,"Marcos",100000);
	//Agora vai funcionar... Pois temos os argumentos para o construtor
	 //Criamos um  objeto ContaCliente02 do tipo Conta
	//Está alocado na Stack
	Conta ContaCliente02;
	//Erro desaparece pois agora tem o contrutor vazio, padrão, default

	//Os objetos foram criados(instanciados) e colocados na memória RAM
	//Abaixo o debug mostra estes objetos e os valores atuais dos atributos(das variáveis) deles

	std::cout << "Endereco Memoria Objeto ContaCliente01: " << &ContaCliente01 << "\n";
	ContaCliente01.GetEnderecoThis();
	std::cout << "Endereco Memoria Objeto ContaCliente02: " << &ContaCliente02 << "\n";
	ContaCliente02.GetEnderecoThis();


	ContaCliente01.SetBanco("Bradesco");
	//A string "Bradesco" foi enviada como parâmetro para função SetBanco
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fulano");
	ContaCliente01.Depositar(14690);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco Do Brasil");
	ContaCliente02.SetAgencia(5678);
	ContaCliente02.SetNumConta(1111);
	ContaCliente02.SetTitular("Beltrano");

	//o objeto ContaCliente02 sérá enviado como argumento para a função transferir
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);


	system("PAUSE");
	return 0;
}





******************************************

Funções (metodos) DESTRUTORES

Serão chamados e destruidos depois da chave
******************************************


Acertar isso:
	
	o underline faz parte do nome da função em C++ existe a função _tsetlocale mas você pode usar também setlocale que vem da linguagem C

Os parâmetros são os seguintes:

char * setlocale (categoria int, const char * locale);
ex: _tsetlocale(LC_ALL,_T("portuguese"));

Categoria é este LC_ALL que indica onde a acentuação ou configurações de idioma serão configuradas em seu código









