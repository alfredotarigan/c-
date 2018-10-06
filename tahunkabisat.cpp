#include <iostream>
using namespace std;
int main ()
{
    int tahun;
   cout<<("====== Program Menentukan Tahun Kabisat ====== \n \n");
   cout<<("Masukkan Tahun Kabisat :  ");
   cin>>tahun;

   if (tahun%400==0)
   {
       cout<<("Tahun Kabisat");
   }
    else if ((tahun%4==0 && tahun%100!=0))
    {
        cout<<("Tahun Kabisat");
    }

    else
        cout<<("Bukan Tahun Kabisat");

return 0;

}
