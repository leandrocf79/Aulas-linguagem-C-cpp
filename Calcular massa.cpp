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
	printf("\tCALCULAR MASSA\n\n");
	printf("Entre com os 2 valores: ");
	scanf("%f %f", &a, &b);
	resultado=calcularmassa(a, b);
	printf("\nResultado: %.2f", resultado);
	
return 0;
}


//Melhorar, fica assim:

#include <iostream>

float calcularMassa(float a, float b) {
  // Valor constante
  const float mA = 321.43;
  const float mB = 150.72;

  return (a * mA) + (b * mB);
}

int main(int argc, char** argv) {
  // Declare as variáveis
  float a = 0, b = 0, resultado = 0;

  // Imprima o título do programa
  std::cout << "\tCALCULAR MASSA\n\n";

  // Pergunte ao usuário pelos dois valores
  std::cout << "Entre com os 2 valores: ";
  std::cin >> a >> b;

  // Calcula a massa e imprime o resultado para cada par de valores
  for (int i = 1; i <= 2; i++) {
    resultado = calcularMassa(a, b);
    std::cout << "\nValores " << a << ", " << b << "\t: " << resultado;

    // Atualiza os valores para a próxima iteração do loop
    a += 0.2;
    b -= 0.2;
  }

  return 0;
}

