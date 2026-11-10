#include <stdio.h>

int main() {
    int arr1[2][2], arr2[2][2], result[2][2] = {0};

    // Input of first matrix
    printf("------First Matrix------\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter values of (%d,%d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input of second matrix
    printf("------Second Matrix------\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter values of (%d,%d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Calculation of resultant matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("------Resultant Matrix------\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%+3d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
