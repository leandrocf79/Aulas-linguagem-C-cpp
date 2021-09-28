#include <iostream>


float calcularmassa(float a, float b){
//valor constante
    const float mA=321.43;
    const float mB=150.72;
    
	printf("\nValores 1,2 : 1,0\t: %f", (1.2*mA + 1*mB));
	printf("\nValores 1,4 : 1,0\t: %f", (1.4*mA + 1*mB));
	printf("\nValores 1,0 : 1,6\t: %f", (1*mA + 1.6*mB));	
	return (a*mA)+(b*mB);	
}

int main(int argc, char** argv) {
	
	float a=0, b=0, resultado=0;
	
	printf("Entre com os 2 valores: ");
	scanf("%f %f", &a, &b);
	resultado=calcularmassa(a, b);
	printf("\nResultado: %.2f", resultado);
	
return 0;
}
