
#include <stdio.h>
#include <ctype.h>
#include <cstdlib>

int main(int argc, char** argv) {
char palavra[40];
int i;

printf("\tCONVERTER TEXTO PARA MAIUSCULO\n\n");
printf("Digite uma palavra em minusculo: ");
gets(palavra);

//converter para maiusculo
for(i=0; palavra[i]!= ' '; i++)
palavra[i] = toupper(palavra[i]);
printf("\n\nPalavra convertida: %s \n\n", palavra);

//system("pause");
getchar();

return EXIT_SUCCESS;
}
