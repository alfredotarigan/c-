#include <iostream>
using namespace std;

const int A = 200;
const int B = 250;
const int C = 150;
bool kondisi = true;
// fungsi perpustakaan
void fungsiPeminjaman(string, char, int, int, char);

int main(int argc, char const *argv[])
{
    string namaPeminjam;
    char golonganBuku;
    int lamaPeminjaman;
    int total;
    int uang;
    char cobaLagi;
    {

        cout << "Perpustakaan Rakyat Pedesaan" << endl;
        cout << "----------------------------" << endl;

        cout << "Nama Peminjaman            : ";
        cin >> namaPeminjam;
        cout << "Golongan Buku [A/B/C]      : ";
        cin >> golonganBuku;
        cout << "Lama Peminjaman            : ";
        cin >> lamaPeminjaman;

        cout << "Masukkan uang anda : ";
        cin >> uang;

        cout << endl
             << endl;

        fungsiPeminjaman(namaPeminjam, golonganBuku, lamaPeminjaman, uang, cobaLagi);
    }

    return 0;
}

void fungsiPeminjaman(string namaPeminjam, char golonganBuku, int lamaPeminjaman, int uang, char cobaLagi)
{
    while (kondisi)
    {
        cout << "Nama Peminjam              : " << namaPeminjam << endl;

        if (golonganBuku == 'A')
        {
            if (lamaPeminjaman > 7)
            {

                cout << "Harga Sewa Buku            : " << A + 100 << endl;
                cout << "Lama Peminjaman            : " << lamaPeminjaman << " Hari" << endl;
                cout << "Jumlah Bayar               : " << A + 100 << " Rupiah" << endl;
                cout << "Besar Denda                : " << 100 << " Rupiah" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "Jumlah yang Harus dibayar Rp " << A + 100 << " Rupiah" << endl;
                cout << "Uang yang anda masukkan : " << uang << endl;
                if (uang == 300)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih." << endl;
                    kondisi = false;
                }
                else if (uang > 300)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih" << endl;
                    cout << "Kembalian anda : " << uang - (A + 100) << endl;
                    kondisi = false;
                }
                else
                {
                    cout << "Uang yang anda masukkan masih kurang, silahkan masukkan kembali " << endl;
                    cout << "Masukkan Uang : ";
                    cin >> uang;
                    if (uang == 300)
                    {
                        cout << "Buku yang anda bayar sudah lunas,Terimakasih." << endl;
                        kondisi = false;
                    }
                    else if (uang > 300)
                    {
                        cout << "Buku yang anda bayar sudah lunas,Terimakasih" << endl;
                        cout << "Kembalian anda : " << uang - C << endl;
                        cout << endl;
                        kondisi = false;
                    }
                    else if (uang < 300)
                    {
                        cout << "Uang yang anda masukkan kurang,silahkan masukkan kembali" << endl;
                        cout << "Masukkan Uang : ";
                        cin >> uang;
                    }
                }
            }
            else
            {
                cout << "Harga Sewa Buku            : " << A << endl;
                cout << "Lama Peminjaman            : " << lamaPeminjaman << " Hari" << endl;
                cout << "Jumlah Bayar               : " << A << " Rupiah" << endl;
                cout << "Besar Denda                : " << 0 << " Rupiah" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "Jumlah yang Harus dibayar Rp " << A << " Rupiah" << endl;
                cout << "Jumlah yang Harus dibayar Rp " << A << " Rupiah" << endl;
                cout << "Uang yang anda masukkan : " << uang << endl;
                if (uang == 200)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih." << endl;
                    kondisi = false;
                }
                else if (uang > 200)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih" << endl;
                    cout << "Kembalian anda : " << uang - A << endl;
                    kondisi = false;
                }
                else if (uang < 200)
                {
                    cout << "Uang yang anda masukkan masih kurang, silahkan masukkan kembali " << endl;
                    cout << "Masukkan Uang : ";
                    cin >> uang;
                }
            }
        }
        else if (golonganBuku == 'B')
        {
            if (lamaPeminjaman > 7)
            {

                cout << "Harga Sewa Buku            : " << B + 100 << endl;
                cout << "Lama Peminjaman            : " << lamaPeminjaman << " Hari" << endl;
                cout << "Jumlah Bayar               : " << B + 100 << " Rupiah" << endl;
                cout << "Besar Denda                : " << 100 << " Rupiah" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "Jumlah yang Harus dibayar Rp " << B + 100 << " Rupiah" << endl;

                if (uang == 350)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih." << endl;
                    kondisi = false;
                }
                else if (uang > 350)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih" << endl;
                    cout << "Kembalian anda : " << uang - (B + 100) << endl;
                    kondisi = false;
                }
                else
                {
                    cout << "Uang yang anda masukkan masih kurang, silahkan masukkan kembali " << endl;
                    cout << "Masukkan Uang : ";
                    cin >> uang;
                    if (uang == 350)
                    {
                        cout << "Buku yang anda bayar sudah lunas,Terimakasih." << endl;
                        kondisi = false;
                    }
                    else if (uang > 350)
                    {
                        cout << "Buku yang anda bayar sudah lunas,Terimakasih" << endl;
                        cout << "Kembalian anda : " << uang - C << endl;
                        kondisi = false;
                    }
                    else if (uang < 350)
                    {
                        cout << "Uang yang anda masukkan masih kurang, silahkan masukkan kembali " << endl;
                        cout << "Masukkan Uang : ";
                        cin >> uang;
                    }
                }
            }
            else
            {
                cout << "Harga Sewa Buku            : " << B << endl;
                cout << "Lama Peminjaman            : " << lamaPeminjaman << " Hari" << endl;
                cout << "Jumlah Bayar               : " << B << " Rupiah" << endl;
                cout << "Besar Denda                : " << 0 << " Rupiah" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "Jumlah yang Harus dibayar Rp " << B << " Rupiah" << endl;
                if (uang == 300)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih." << endl;
                    kondisi = false;
                }
                else if (uang > 300)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih" << endl;
                    cout << "Kembalian anda : " << uang - C << endl;
                    kondisi = false;
                }
                else if (uang < 300)
                {
                    cout << "Uang yang anda masukkan masih kurang, silahkan masukkan kembali " << endl;
                    cout << "Masukkan Uang : ";
                    cin >> uang;
                }
            }
        }

        else if (golonganBuku == 'C')
        {
            if (lamaPeminjaman > 7)
            {

                cout << "Harga Sewa Buku            : " << C + 100 << endl;
                cout << "Lama Peminjaman            : " << lamaPeminjaman << " Hari" << endl;
                cout << "Jumlah Bayar               : " << C << " Rupiah" << endl;
                cout << "Besar Denda                : " << C + 100 << " Rupiah" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "Jumlah yang Harus dibayar Rp " << C + 100 << " Rupiah" << endl;
                if (uang == 250)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih." << endl;
                    kondisi = false;
                }
                else if (uang > 250)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih" << endl;
                    cout << "Kembalian anda : " << uang - (B + 100) << endl;
                    kondisi = false;
                }
                else
                {
                    cout << "Uang yang anda masukkan masih kurang, silahkan masukkan kembali " << endl;
                    cout << "Masukkan Uang : ";
                    cin >> uang;
                    if (uang == 250)
                    {
                        cout << "Buku yang anda bayar sudah lunas,Terimakasih." << endl;
                        kondisi = false;
                    }
                    else if (uang > 250)
                    {
                        cout << "Buku yang anda bayar sudah lunas,Terimakasih" << endl;
                        cout << "Kembalian anda : " << uang - C << endl;
                        kondisi = false;
                    }
                    else if (uang < 250)
                    {
                        cout << "Uang yang anda masukkan masih kurang, silahkan masukkan kembali " << endl;
                        cout << "Masukkan Uang : ";
                        cin >> uang;
                    }
                }
            }
            else
            {
                cout << "Harga Sewa Buku            : " << C << endl;
                cout << "Lama Peminjaman            : " << lamaPeminjaman << " Hari" << endl;
                cout << "Jumlah Bayar               : " << C << " Rupiah" << endl;
                cout << "Besar Denda                : " << 0 << " Rupiah" << endl;
                cout << "---------------------------------------------------------" << endl;
                cout << "Jumlah yang Harus dibayar Rp " << C << " Rupiah" << endl;
                if (uang == 150)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih." << endl;
                    kondisi = false;
                }
                else if (uang > 150)
                {
                    cout << "Buku yang anda bayar sudah lunas,Terimakasih" << endl;
                    cout << "Kembalian anda : " << uang - C << endl;
                    kondisi = false;
                }
                else if (uang < 150)
                {
                    cout << "Uang yang anda masukkan masih kurang, silahkan masukkan kembali " << endl;
                    cout << "Masukkan Uang : ";
                    cin >> uang;
                }
            }
        }
    }
}
