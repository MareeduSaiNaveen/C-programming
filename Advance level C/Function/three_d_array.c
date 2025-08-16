#include <stdio.h>

// Function to input elements into 3D array
void input3DArray(int depth, int rows, int cols, int (*arr)[rows][cols]) {
    int i, j, k, num = 1;
    printf("Enter %d elements:\n", depth * rows * cols);
    for (i = 0; i < depth; i++) {
        for (j = 0; j < rows; j++) {
            for (k = 0; k < cols; k++) {
                arr[i][j][k] = num++;
            }
        }
    }
}

// Function to print elements from 3D array
void print3DArray(int *depth, int *rows, int *cols, int (*arr)[*rows][*cols]) {
    int i, j, k;
    printf("\n3D Array Elements:\n");
    for (i = 0; i < *depth; i++) {
        printf("Layer %d:\n", i);
        for (j = 0; j < *rows; j++) {
            for (k = 0; k < *cols; k++) {
                printf("%d ", *(*(*(arr + i) + j) + k));
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int depth, rows, cols;

    printf("Enter depth (layers): ");
    scanf("%d", &depth);
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &cols);

    int arr[depth][rows][cols];

    input3DArray(depth, rows, cols, arr);
    print3DArray(&depth, &rows, &cols, arr);

    return 0;
}

