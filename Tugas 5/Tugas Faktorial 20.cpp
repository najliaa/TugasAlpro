#include<iostream>

using namespace std ;


long long faktorial(int n){
    if(n == 0 || n == 1){
        cout << n;
        return 1;
    }
    else
    {
        cout << " " << n << " x " ;
        return n * faktorial(n-1);
    }
}

int main(){
    int angka ;
    long long hasil;
    cout << "\t Bilangan faktorial \n\n";
    cout << "Masukan angka :  "; cin >> angka ;
    
    hasil =faktorial(angka);
    cout << "\n\n Hasil faktorialnya  :  " << hasil ;

    return 0;
}