#include <stdio.h>
#include <stdlib.h>


void ordenaVetorW(int array[], int n) {
    for (int i = 1; i < n; i++) {
        int aux = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > aux) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = aux;
    }
}


void ordenaVetorD(int array[], int array2[], int n) {
    for (int i = 1; i < n; i++) {
        int aux = array[i];
        int aux2 = array2[i];
        int j = i - 1;

        while (j >= 0 && array[j] > aux) {
            array[j + 1] = array[j];
            array2[j + 1] = array2[j];
            j = j - 1;
        }
        array[j + 1] = aux;
        array2[j + 1] = aux2;
    }
}


void maxProfitAssignment(int* difficulty, int difficultySize, int* profit, int* worker, int workerSize) {
    int total = 0;

    
    for (int i = 0; i < workerSize; i++) {
        int maxProfit = 0;

        // Percorre todos os trabalhos para encontrar o melhor lucro possível
        for (int j = 0; j < difficultySize; j++) {
            if (worker[i] >= difficulty[j]) {
                if (profit[j] > maxProfit) {
                    maxProfit = profit[j];
                }
            } else {
                break;
            }
        }

        
        total += maxProfit;
    }

    printf("\n%d\n", total);
}

int main() {
    int difficultysize;
    int workersize;

    
    printf("\nInforme o tamanho do vetor 'worker': ");
    scanf("%d", &workersize);
    printf("Informe o tamanho do vetor 'difficulty' e 'profit': ");
    scanf("%d", &difficultysize);

    
    int *difficulty = (int *)malloc(difficultysize * sizeof(int));
    int *profit = (int *)malloc(difficultysize * sizeof(int));
    int *worker = (int *)malloc(workersize * sizeof(int));

   
    printf("\nInforme os elementos do vetor 'worker':\n");
    for (int i = 0; i < workersize; i++) {
        scanf("%d", &worker[i]);
    }

    printf("\nInforme os elementos do vetor 'difficulty':\n");
    for (int j = 0; j < difficultysize; j++) {
        scanf("%d", &difficulty[j]);
    }

    printf("\nInforme os elementos do vetor 'profit':\n");
    for (int l = 0; l < difficultysize; l++) {
        scanf("%d", &profit[l]);
    }

   
    ordenaVetorW(worker, workersize);
    ordenaVetorD(difficulty, profit, difficultysize);

  
    maxProfitAssignment(difficulty, difficultysize, profit, worker, workersize);

    
    free(difficulty);
    free(profit);
    free(worker);

    return 0;
}
