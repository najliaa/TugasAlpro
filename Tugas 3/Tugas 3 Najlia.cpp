#include <iostream>

int main(){
    //Program meminta pengguna memasukkan bilangan bulat positif.
    int bilangan;

    std::cout << "Masukan Bilangan :";
    std::cin >> bilangan;

    //Program menggunakan pemilihan kondisi untuk menentukan apakah bilangan tersebut ganjil atau genap.
    if (bilangan > 0){
        std::cout << "Bilangan ini Adalah :";

        if (bilangan % 2 == 0){
            std::cout << "Genap" << std::endl; 
        }

        else{
            std::cout << "Ganjil" << std::endl;

    //Jika bilangan ganjil, program menggunakan pengulangan untuk menampilkan deret bilangan ganjil dari 1 hingga bilangan yang dimasukkan.

        std::cout << "Deret bilangan ganjil dari 1 hingga " << bilangan << " :";

        for (int i=1; i<=bilangan; i+=2){
            std::cout << i <<"";
        }

        std::cout<<std::endl;

        }
    //Jika bilangan tidak positif, program memberikan pesan bahwa input tidak valid.
        } else {
            std::cout <<"Input tidak Valid"<<std::endl;
        }

    return 0;

}