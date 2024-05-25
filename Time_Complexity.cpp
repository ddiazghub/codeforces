#include <iostream>

using namespace std;

int main() {
  /**
   * Big-O (n)
   *
   * O(1): Tiempo constante, no cambia con el tamaño de la entrada.
   * O(log n): Tiempo logarítmico, crece con el tamaño de la entrada.
   * O(n): Tiempo lineal, crece linealmente con el tamaño de la entrada.
   * O(n log n): Tiempo lineal-logarítmico, común en algoritmos de ordenamiento eficientes. Ej: Merge Sort.
   * O(n^2): Tiempo cuadrático, común en algoritmos de ordenamiento menos eficientes. Ej: Bubble Sort.
   * O(2^n): Tiempo exponencial, el tiempo se duplica con cada incremento.
   * O(n!): Tiempo factorial, el tiempo crece exponencialmente.
   */
}

// Caso de O(1):
int firstElement (int arr[], int n) {
  return arr[0];
}

// Caso de O(n):
int sumArray(int arr[], int n) {
  int sum = 0;

  // 1 Ciclo for
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  return sum;
}

// Caso de O(n^2):
void printPairs(int arr[], int n) {
  // Ciclos for anidados
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i] << ' ' << arr[j] << endl;
    }
  }
}

// Phases:
void example(int n) {
  // O(n)
  for (int i = 0; i <= n; i++) {
    // Proceso
  }

  // O(n^2)
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      // Proceso
    }
  }

  // O(n)
  for (int i = 0; i <= n; i++) {
    // Proceso
  }

  // La complejidad de tiempo de esta función es O(n^2).
  // Se utiliza la mayor complejidad de tiempo entre todas las fases.
}
