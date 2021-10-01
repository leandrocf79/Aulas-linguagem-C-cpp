#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 


int main(int argc, char** argv) {
    int linha,coluna;
    int matriz[2][2];
    // valores da matriz
    for (linha=0; linha<3; linha++)
    {
        for (coluna=0; coluna<2;coluna++)
        {
            printf("Digitar os valores da matriz para: linha %d, coluna %d: ",linha+1,coluna+1); 
            scanf("%d", &matriz[linha][coluna]);  
        } }
        for (linha=0;linha<=2;linha++) {
            for (coluna=0;coluna<2;coluna++) printf("%d\t",matriz[linha][coluna]);
            printf("Veja a sua Matriz\n");
            printf("\n\n");    
        }
        system("pause");
        return 0;  
}
	


