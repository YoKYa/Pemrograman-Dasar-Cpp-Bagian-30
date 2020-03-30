#include <iostream>
#include <array> // Standar Library Array

using namespace std;

int main(){

    array<int, 5> Angka; // Cara Deklarasi Array pada standar Library

    // Memasukkan Nilai pada array seperti array pada iostream
    // Memasukkan Sebuah angka ke array
    cout << "Memasukkan Angka Pada Array" << endl;
    int i = 0;
    for (int &A : Angka){ // Memasukkan Nilai Tanpa mengetahui panjang array
        cout << "Angka Ke-" << i + 1 << " : " ;
        cin >> A; // Array dimulai dari 0  
        i++;
    }

    // Mengeluarkan sebuah angka pada array;
    i=0;
    cout << endl << "Mengeluarkan Angka Pada Array" << endl;
    for (int &A : Angka){
         cout << "Angka Ke-" << i + 1 << " : " << A << endl;
         cout << "Dan Alamtnya : " << &A << endl;
         i++;
    }

    return 0;
}