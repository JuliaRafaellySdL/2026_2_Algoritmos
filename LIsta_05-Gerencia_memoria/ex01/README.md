# Exercicio 1 - Conjunto

Implementacao em `set.hpp` usando um array dinamico. O array cresce quando fica
cheio e diminui quando a ocupacao cai para um quarto da capacidade.

| Operacao | Custo | Motivo |
| --- | --- | --- |
| `insert` | O(n) | Procura duplicatas linearmente; a realocacao tambem copia os elementos. |
| `erase` | O(n) | Procura o valor e desloca os elementos seguintes. |
| `find` | O(n) | Busca linear. |
| `size` | O(1) | Retorna o contador mantido pela classe. |
| `empty` | O(1) | Verifica se o contador e zero. |
| `clear` | O(1) | Libera o array e reinicia os tres campos. |

O `main.cpp` exercita todas as operacoes, incluindo duplicata, busca e remocao
de valor ausente, conjunto vazio e limpeza.
