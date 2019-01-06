#include <iostream>
using namespace std;
int main()
{
    cout << "Permainan Tebak Angka" << endl;

    int inputAngka;
    char pilihan;
    bool kondisi = true;
    while (kondisi)
    {

        cout << "Masukkan angka yang ingin ditebak : ";
        cin >> inputAngka;
        if (inputAngka % 2 == 0)
        {
            cout << "Angka yang anda input adalah Bilangan Genap" << endl;
            cout << "Ingin main lagi ? (Y/N) ";
            cin >> pilihan;
            if (pilihan == 'N')
            {
                kondisi = false;
            }
        }
        else if (inputAngka % 2 != 0)
        {
            cout << "Angka yang anda input adalah Bilangan Ganjil" << endl;
            cout << "Ingin main lagi ? (Y/N) ";
            cin >> pilihan;
            if (pilihan == 'N')
            {
                kondisi = false;
            }
        }
        else
        {
            kondisi = false;
        }
    }
    return 0;
}
