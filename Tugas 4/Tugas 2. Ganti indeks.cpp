#include <iostream>

using namespace std;

int main () {
    int nilai [3] = {23, 25, 27};
    int i;

    cout << "Index Sebelum: " << endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Nilai[" << i << "] = " << nilai [i] << std::endl;
    }

    i = 0;
    nilai [i] = 20;

    cout << "Index Setelah: " << endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Nilai[" << i << "] = " << nilai[i] << std::endl;
    }

    return 0;
}