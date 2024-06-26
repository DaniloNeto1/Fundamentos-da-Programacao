#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Cell Cell;
struct Cell{
        int item;
        int col;
        Cell *next;
};

typedef struct{
        Cell *head;
}ListaE;

typedef struct{
       int n_lin;
       int n_col;
       ListaE **lin;
}Spa_Mat;

Spa_Mat* criar(int l, int c){
    Spa_Mat* mat = (Spa_Mat*) malloc(sizeof(Spa_Mat));
    int i;
    mat->n_col = c;
    mat->n_lin = l;
    mat->lin = (ListaE**) malloc(sizeof(ListaE) * l);
    for (i = 0; i < l; i++){
            mat->lin[i] = (ListaE*) malloc(sizeof(ListaE));
            mat->lin[i]->head = NULL;
    }
    return mat;
}

Cell* criar_celula(int item, int col){
    Cell *nova = (Cell*) malloc(sizeof(Cell));
    nova->item = item;
    nova->col = col;
    nova->next = NULL;

    return nova;
}

int** create_matrix(int n, int m){
    int i; 
    int **mat;
    mat = (int**) malloc(n*sizeof(int));
    for (i = 0; i < n; i++)
        mat[i] = (int*) malloc(m*sizeof(int));
    return mat;
}

void imprimir(Spa_Mat* mat){
    int i, j;
    Cell* aux;
    for (i = 0; i < mat->n_lin; i++){
        aux = mat->lin[i]->head;
        j = 0;
        while (aux != NULL){
            while (j < aux->col){
                printf("0 ");
                j++;
            }
            printf("%d ", aux->item);
            j++;
            aux = aux->next;
        }
        for (j=0; j < mat->n_col; j++)
            printf("0 ");
        printf("\n");
    }
}

void inserir(int key, Spa_Mat *m, int l, int c){
    Cell *aux;
    if(m == NULL){
        m=criar(l, c);
    }
    aux = criar_celula(key, c);

    Cell *auxB=m->lin[l]->head;
    Cell *auxC=NULL;
    while(auxB!=NULL && auxB->col<c){
        auxC=auxB;
        auxB=auxB->next;
    }

    if(auxC == NULL){
        if(auxB!=NULL)
            aux->next=auxB;
        m->lin[l]->head=aux;
    }else{
        auxC->next=aux;
        aux->next=auxB;
    }
}

Spa_Mat* converter(int**mat, int linha, int coluna){
    Spa_Mat *matE=criar(linha, coluna);
    int i, j;
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            if(mat[i][j]!=0)
                inserir(mat[i][j], matE, i, j);
        }
    }
    return matE;
}

void triangular(Spa_Mat *ms){
    int i, soma=0, somaB=0;
    Cell* aux;

    for(i = 0; i < ms->n_lin; i++){
        aux = ms->lin[i]->head;
        if(aux==NULL){
            soma=0;
        }
        while(aux!=NULL){
            if(aux->col > i){
                soma=soma+aux->item;
            }
            else if(aux->col < i)
                somaB=somaB+aux->item;
            aux=aux->next;
        }
    }
    if(soma==0 || somaB==0){
        printf("triangular");
    }else
        printf("nao triangular");


    free(aux); 
}

int main(){
    
    int i, j, linhac;

    scanf("%d", &linhac);

    int **mat=create_matrix(linhac, linhac);

    for(i=0; i<linhac; i++){
        for(j=0; j<linhac; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    Spa_Mat *matrix = criar(linhac, linhac);
    
    matrix=converter(mat, linhac, linhac);

    triangular(matrix);
    
    free(mat);

    return 0;
}