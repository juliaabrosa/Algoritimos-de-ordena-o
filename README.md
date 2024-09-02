## Julia Rosa

## Algoritimos de ordenação
### Exercício 826 do LeetCode

O desafio proposto consistia em receber 3 vetores: "difficulty", "profit" e "worker" e ter como saída a soma do valor recebido por esses trabalhadores.
A soma deveria ser encontrada de acordo com o maior valor possivél que cada trabalhador poderia executar não excedendo o nível de dificuldade. 

### Exemplos:
Entrada: difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,7]
Saída esperada: 100

Entrada: Input: difficulty = [85,47,57], profit = [24,66,99], worker = [40,25,25]
Saída esperada: 0


O objetivo do desafio foi concluído com êxito nos dois exemplos citados. Foi utiizado o algoritmo de ordenação Insertion Sort para ordenar os vetores e assim, facilitar os testes já que, caso estivesse ordenado, e a dificuldade já fosse maior no meio do vetor, ele não iria precisar percorrer o restante para saber que o seu ganho máximo estaria até ali, já que o restante do vetor já estaria com uma dificuldade maior que a suportada.
