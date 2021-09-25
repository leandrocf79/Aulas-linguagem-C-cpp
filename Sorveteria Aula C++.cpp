#include <stdio.h>
 
int main(int argc, char** argv) {
int val;

printf("\t\tSORVETERIAS LTDA\n\n");
do{
printf("[1] Amora, [2] Morango, [3] Pessego, [4] Manga, [5] Abacaxi\n\n");
printf("\nDigite um numero para o sabor e pressione Enter: ");
scanf("%d", &val);
}	
while((val<1)||(val>5));	

switch (val){
	case 1:
		printf("\nVoce escolheu: Amora\n");
		break;
	case 2:
		printf("\nVoce escolheu: Morango\n");
		break;
	case 3:
		printf("\nVoce escolheu: Pessego\n");
		break;
	case 4:
		printf("\nVoce escolheu: Manga\n");
		break;
	case 5:
		printf("\nVoce escolheu: Abacaxi\n");
		break;
		
}
	
	
return 0;
}
