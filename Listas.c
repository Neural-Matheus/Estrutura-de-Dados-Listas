#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura ponto para representar um ponto no plano cartesiano
struct ponto {
    float x;
    float y;
    struct ponto *prox;
};

// Renomeando a estrutura ponto para abreviar o seu uso
typedef struct ponto Ponto;

// Declaração do ponteiro listaPontos, que será o início da lista encadeada de pontos
Ponto *listaPontos;

// Função para adicionar um novo ponto à lista encadeada
// Parâmetros: coordenadas (x, y) do ponto a ser adicionado
void add(float x, float y) {
    // Aloca memória dinamicamente para um novo nó Ponto
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    // Ajusta o ponteiro do novo ponto para apontar para o início da lista
    p->prox = listaPontos;
    // Atualiza o ponteiro do início da lista para apontar para o novo ponto
    listaPontos = p;
}

// Função para imprimir todos os pontos presentes na lista encadeada
void imprime() {
    // Cria um ponteiro auxiliar para percorrer a lista
    Ponto *auxLista = listaPontos;
    // Loop para percorrer a lista e imprimir os pontos
    while (auxLista != NULL) {
        printf("Ponto(%.1f, %.1f)\n", auxLista->x, auxLista->y);
        // Avança para o próximo ponto na lista
        auxLista = auxLista->prox;
    }
}

int main(void) {
    // Adiciona três pontos à lista encadeada usando a função add()
    add(1, 5);
    add(2, 7);
    add(5, 3);

    // Chama a função imprime() para exibir na tela os pontos presentes na lista
    imprime();
    
    return 0;
}
