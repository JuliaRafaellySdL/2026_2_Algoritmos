#include <iostream>

bool existe(int valor, int contados[], int qtd) {
  for (int i = 0; i < qtd; ++i) {
    if (contados[i] == valor) {
      return true;
    }
  }
  return false;
}

void conta(int n, int a[], int contados[], int quantidade[],
               int &qtd_contados) {
  for (int i = 0; i < n; ++i) {
    if (not existe(a[i], contados, qtd_contados)) {
      int qtd = 0;
      for (int j = 0; j < n; ++j) {
        if (a[j] == a[i]) {
          qtd = qtd + 1;
        }
      }
      contados[qtd_contados] = a[i];
      quantidade[qtd_contados] = qtd;
      qtd_contados = qtd_contados + 1;
    }
  }
}
int main() {
  int n;
  std::cin >> n;
  int a[n], contados[n], quantidade[n], qtd_contados = 0;
  for (int i = 0; i < n; ++i)
    std::cin >> a[i];
  conta(n, a, contados, quantidade, qtd_contados);
  for (int i = 0; i < qtd_contados; ++i)
    std::cout << contados[i] << ": " << quantidade[i] << std::endl;
  return 0;
}