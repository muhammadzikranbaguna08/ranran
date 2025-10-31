#include <stdio.h>
#include <stdlib.h>

int main() {
    int baris, kolom;
    int i, j;

    // Input ukuran matriks secara dinamis
    printf("Masukkan jumlah baris matriks: ");
    scanf("%d", &baris);
    printf("Masukkan jumlah kolom matriks: ");
    scanf("%d", &kolom);

    // Alokasi memori dinamis untuk matriks
    int** matriks = (int**)malloc(baris * sizeof(int*));
    for (i = 0; i < baris; i++) {
        matriks[i] = (int*)malloc(kolom * sizeof(int));
    }

    // Input elemen matriks dengan perulangan
    printf("Masukkan elemen matriks:\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("Elemen [%d][%d]: ", i, j);
            scanf("%d", &matriks[i][j]);
        }
    }

    // Menampilkan matriks dengan perulangan
    printf("\nMatriks yang dimasukkan:\n");
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("%d\t", matriks[i][j]);
        }
        printf("\n");
    }

    // Membebaskan memori yang sudah dialokasikan
    for (i = 0; i < baris; i++) {
        free(matriks[i]);
    }
    free(matriks);

    return 0;
}
