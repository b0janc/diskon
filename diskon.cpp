#include <iostream>
using namespace std;

int main() {
    double harga;
    double diskon;

    cout << "Harga : ";
    cin >> harga;

    cout << "Diskon : ";
    cin >> diskon;

    cout << "Hasil = "
        << harga * (100 - diskon) / 100
        << endl;


  
}