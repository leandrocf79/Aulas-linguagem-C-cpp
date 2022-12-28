#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

int main() {
  // Gerador de números aleatórios para MEGA SENA
  mt19937 rng(random_device{}());

  // Vetor com os números de 1 a 60
  vector<int> numbers(60);
  iota(begin(numbers), end(numbers), 1);

  // Embaralha os números aleatoriamente
  shuffle(begin(numbers), end(numbers), rng);

  // Imprime os primeiros 6 números do vetor
  for (int i = 0; i < 6; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;

  return 0;
}
