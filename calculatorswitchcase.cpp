#include <iostream>
#include <math.h>

using namespace std;

int main ()
{

int a,b,hasil;
char aritmatika;

    cout << "====== Calculator Metode Switch Case v0.1 ========= \n \n ";

    // memasuk kan nilai ke input user

    cout<<"Masuk kan nilai pertama : ";
    cin >> a;
    cout <<"Pilih Operator +,-,/,%,*,^ : ";
    cin >> aritmatika;
    cout<<"Masuk kan nilai kedua : ";
    cin >> b;

    cout << "\nHasil Perhitungan ";
    cout << a << aritmatika << b;

    switch(aritmatika){
        case '+':
        hasil = a + b;
        cout << "=" << hasil << endl;
        break;
        case '-':
        hasil = a - b;
        cout << "=" << hasil << endl;
        break;
        case '/':
        hasil = a / b;
        cout << "=" << hasil << endl;
        break;
        case '*':
        hasil = a * b;
        cout << "=" << hasil << endl;
        break;
        case '^':
        hasil = pow(a,b);
        cout << "=" << hasil << endl;
        break;
        case '%':
        hasil = a % b;
        cout << "=" << hasil << endl;
        break;

    }

    return main();

}
