#include <iostream>
using namespace std ;

int main()
{
    cout << "## PROGRAM C++ MENENTUKAN GANJIL GENAP ##" << endl ;
    cout << "=========================================" << endl ;
    cout << endl ;

    int x ;

    cout << "Input Sebuah Bilangan Bulat : " ;
    cin >> x ;

    if (x % 2==0){
        cout << x << " adalah bilangan Genap" ;
    } 
    else{
        cout << x << " adalah bilangan Ganjil" ;
    }

    cout << endl ;
    return 0 ;
}