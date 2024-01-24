#include <iostream>

int main() {
    // Deklarasi dan inisialisasi matriks
    int matriksA[2][2] = {{2, 3}, {4, 5}};
    int matriksB[2][2] = {{6, 7}, {8, 9}};
    int hasil[2][2];

    // Melakukan perkalian matriks
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriksA[i][j] * matriksB[i][j];
        }
    }

    // Menampilkan hasil perkalian
    std::cout << "Hasil perkalian Matriks:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << hasil[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}