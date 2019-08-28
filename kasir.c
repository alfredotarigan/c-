#include <stdio.h>
int main (){
    int pilihan;

    int daging,telur,beras;
    int hargaBeras = 100000,hargaTelur = 30000,hargaDaging = 150000;
    int totalBelanja1,totalBelanja2,totalBelanja3;
    int total;
    printf("\t======================\n");
    printf("\tSupermarket Sederhana \n");
    printf("\t======================\n");
    printf("List barang yang dijual \n");
    printf("1. Daging             Rp 100.000 kg \n");
    printf("2. Telur              Rp 30.000  lusin \n");
    printf("3. Beras              Rp 150.000 kg \n");
    printf("\n");
    printf("Masukkan daging  / kg       : "); scanf("%d",&daging);
    printf("Masukkan telur  / lusin     : "); scanf("%d",&telur);
    printf("Masukkan beras / kg         : "); scanf("%d",&beras);

    totalBelanja1 = beras * hargaBeras;
    totalBelanja2 = telur * hargaTelur;
    totalBelanja3 = daging * hargaDaging;
    printf("============================================================\n");
    if(beras != 0){
        printf("Anda membeli beras sebesar %d kg, total harga %d rupiah  \n",beras,totalBelanja1);
    }
    if(telur !=0){
        printf("Anda membeli telur sebesar %d kg, total harga %d rupiah \n",telur,totalBelanja2);
    }
    if (daging !=0){
        printf("Anda membeli daging sebesar %d kg, total harga %d rupiah \n",daging,totalBelanja3);

    }
    printf("============================================================\n");

    int uang;
    total = totalBelanja1 + totalBelanja2 + totalBelanja3;
    printf("Total semua belanja anda sebesar : %d \n",total);
    printf("Silahkan masukkan nominal uang anda : "); scanf("%d",&uang);
    int totalKembalian = uang - total;
    printf("Kembalian uang anda sebesar : %d Rupiah\n",totalKembalian);
    printf("Terimakasih. \n");


}
