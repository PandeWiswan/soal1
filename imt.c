#include <stdio.h>

#define MAX_SIZE 100

// fungsi sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar arr[j] dan arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n[MAX_SIZE], i;
    int arr[MAX_SIZE];

    // Minta input dari pengguna
    printf("masukkan jumlah total nilai: ");
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("nilai yang dimaksukkan melebihi %d.\n ", MAX_SIZE);
        return 1;
    }

    printf("masukkan %d nilai:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Urutkan array
    bubbleSort(arr, n);

    // Cetak array yang telah diurutkan
    printf("hasil dari pengurutan total nilai:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
