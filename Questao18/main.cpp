#include <stdio.h>
#include <stdlib.h>

//alocacao a matriz
int** aloca(int nl, int nc){
    int **mat;
    mat = (int **) malloc(nl*sizeof (int*));
    mat[0] = (int*) malloc(nl*nc*sizeof (int));
    for(int i = 1; i < nl; i++){
        mat[i] = mat[i-1] + nc;
    }
    return mat;
}
//multiplicacao das matrizes
void mult_mat(int **mat1, int nl1, int nc1, int **mat2, int nc2, int **mat3){
    int soma;

    for(int i = 0; i < nl1; i++){
        for(int j = 0; j < nc2; j++){
            soma = 0;
            for(int k = 0; k < nc1; k++){
                soma += mat1[i][k]*mat2[k][j];
            }
            mat3[i][j] = soma;
        }
    }
}
//imprime na tela
void imprime_mat(int **mat, int nl, int nc){
    for(int i = 0; i < nl; i++){
        printf("| ");
        for(int j = 0; j < nc; j++){
            printf("\t");
            printf("%d ", mat[i][j]);
        }
        printf("\t|\n");
    }
}

//ler do usuario a matriz
void ler_mat(int **mat, int nl, int nc){
    int i, j;
    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            mat[i][j] = 0;
        }
    }

    for(i = 0; i < nl; i++){
        for(j = 0; j < nc; j++){
            printf("Matriz:\n");
            imprime_mat(mat, nl,nc);
            printf("Digite o Valor da posisao %dx%d: ",i+1,j+1);
            scanf("%d", &mat[i][j]);
            system("cls");
        }
    }
}

int main(void){
    int **matA = NULL, **matB = NULL, **matC = NULL, nlA, ncA, nlB, ncB;
    printf("Digite o Numero de Linhas da Matriz A: ");
    scanf("%d", &nlA);
    printf("\nDigite o Numero de Colunas da Matriz A: ");
    scanf("%d", &ncA);
    printf("\nDigite o Numero de Colunas da Matriz B: ");
    scanf("%d", &ncB);
    nlB = ncA;
    system("cls");

    matA = aloca(nlA, ncA);
    matB = aloca(nlB, ncB);
    matC = aloca(nlA, ncB);

    ler_mat(matA, nlA, ncA);
    ler_mat(matB, nlB, ncB);

    mult_mat(matA, nlA, ncA, matB, ncB, matC);

    printf("Matriz A: \n\n");
    imprime_mat(matA, nlA, nlB);

    printf("\n\nMatriz B: \n\n");
    imprime_mat(matB, nlB, ncB);

    printf("\n\nMatriz C: \n\n");
    imprime_mat(matC, nlA, ncB);
    printf("\n\n");

    free(matC[0]);
    free(matC);
    free(matB[0]);
    free(matB);
    free(matA[0]);
    free(matA);
    return 0;
}
