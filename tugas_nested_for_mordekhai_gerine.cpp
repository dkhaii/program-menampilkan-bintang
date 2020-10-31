#include <iostream>

using namespace std;

int main()
{
//  Program menampilkan bintang pola persegi
    cout << "Program menampilkan bitang pola persegi.\n";

    for(int a = 1; a <= 3; a++){
        for(int b = 1; b <= 2; b++){
            cout << "*";
        }
        cout << endl;
    }

//  Program menampilkan bintang pola segitiga
    cout << "Program menampilkan bintang pola segitiga.\n";

    for(int a = 1; a <= 3; a++){
        for(int b = 1; b <= a; b++){
            cout << "*";
        }
       cout << endl;
    }

//  Program menentukan bilangan ganjil atau genap
    cout << "Program menampilkan bilangan ganjil atau genap.\n";

    char pilih;
    do{
        int a;
        cout << "Masukan nilai a: ";
        cin >> a;

        if(a % 2 == 0){
            cout << a << " adalah bilangan genap.";
        }else if(a == 0){
            cout << a << " adalah bilangan netral.";
        }else{
            cout << a << " adalah bilangan ganjil.";
        }
        cout << endl;

        cout << "Apakah anda ingin menaljutkan? (y/n)";
        cin >> pilih;
        cout << endl;

    }while(pilih == 'y');

    cout << "Akhir dari program.";
    return 0;
}
