# Lista Encadeada de Pontos no Plano Cartesiano

Este repositório contém uma implementação simples de lista encadeada em linguagem C. A lista encadeada é utilizada para armazenar pontos no plano cartesiano, onde cada ponto é representado por um par de coordenadas (x, y).

A estrutura de dados utilizada é struct ponto, que contém os campos x e y para armazenar as coordenadas e um ponteiro prox para o próximo ponto na lista.

A função add(float x, float y) é responsável por adicionar um novo ponto à lista encadeada. Ela aloca dinamicamente memória para um novo nó Ponto, preenche suas coordenadas com os valores recebidos e ajusta os ponteiros para inserir o novo ponto no início da lista.

A função imprime() percorre a lista encadeada e imprime na tela todas as coordenadas dos pontos presentes na lista.

No programa principal (main()), são adicionados três pontos à lista utilizando a função add(). Em seguida, a função imprime() é chamada para mostrar os pontos na tela.

Essa implementação pode ser utilizada como base para trabalhar com listas encadeadas e para entender os conceitos de alocação dinâmica de memória em C.

## Funcionalidades

1. Adicionar um novo ponto à lista encadeada.
2. Imprimir na tela todos os pontos presentes na lista.

## Exemplo de Uso

Listas encadeadas podem ser utilizadas em diversas aplicações, tais como:

- Implementação de filas e pilhas
- Gerenciamento de memória dinâmica
- Estruturas de dados em bancos de dados
- Algoritmos de busca e ordenação
- Listas de tarefas e agendamentos
- Tratamento de colisões em tabelas hash
- ... e muitas outras.

## Contribuição

Fique à vontade para explorar o código, fazer alterações ou utilizar em seus projetos. Se tiver sugestões de melhorias ou encontrar algum problema, sinta-se à vontade para contribuir abrindo uma "Issue" ou enviando um "Pull Request".
