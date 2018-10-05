#include <iostream>
#include <math.h>

using namespace std;

int main ()

{
    int a,b,hasil;
    char aritmatika;

     cout << "===== Calculator Sederhana Bosque!!!====== \n \n";

     // memasukan input dari user

     cout<< "Masukan Nilai Pertama : ";
     cin >> a;
     cout << "Pilih Operator +,-,/,*,%,^ : ";
     cin >> aritmatika;
     cout << "Masukan Nilai Kedua : ";
     cin >> b;

     cout << "\nHasil Perhitungan ";
     cout << a << aritmatika << b;


     if (aritmatika == '+'){
        hasil = a + b;


     } else if (aritmatika == '-'){
        hasil = a - b;
        cout << " = " << hasil << endl;
     } else if (aritmatika == '*'){
        hasil = a * b;
        cout << " = " << hasil << endl;
     } else if (aritmatika == '/'){
        hasil = a / b;
        cout << " = " << hasil << endl;
     } else if (aritmatika == '%'){
        hasil = a%b;
        cout << " = " << hasil << endl;
     }else if (aritmatika == '^'){
        hasil = pow(a,b);
        cout << " = " << hasil << endl;
     }

     else {

        cout << " operator anda salah";

     }

    cin.get();
    return 0;
}
