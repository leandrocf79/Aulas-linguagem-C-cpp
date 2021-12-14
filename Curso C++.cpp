// PRATICANDO C e C++ com as aulas distribuidas no https://github.com/professormarcosp/AprendaCParaGamesUE4


                           ********** OBSERVAÇÃO***********

O conteúdo disponibilizado aqui serve para ajudar na hora do trabalho,portanto, 
este não se trata de um arquivo executável.
Será atualizado constantemente e por isso pode apresentar desorganização temporária.
*************************************************************************************

//ACENTUAÇÃO

#include <locale.h>  // acentuação.

int main() {
	setlocale(LC_ALL, "portuguese");  //Define idioma de acentuação.   #include <locale.h> 
	std:: ...
}

						   
***************************



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
std::cout<<"\ndouble com include iomanip e setprecision (10)";



// incluso o     std::setprecision (10) 
	std::cout<<"\n\n\n\tValor do numero3: "<< std::setprecision (10)<<numero3<<std::endl;
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
		std::cout << "Média dos Números: " << std::fixed << std::setprecision(2) << Media << "\n";
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



