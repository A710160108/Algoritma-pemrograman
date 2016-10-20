#include <stdio.h>
#include <math.h>

int main() {
    int angka;
    int pangkat;
    int hasil;

    printf("Masukan angka yang akan dihitung akar pangkatnya \n");
    printf("| ========================================== | \n");
    printf("\t Angka : "); scanf("%i", &angka);
    printf("\t Pangkat berapa : "); scanf("%i", &pangkat);
    hasil = pow(angka,pangkat);

    printf("\t Hasil pangkat tiga dari %d adalah : %d \n", angka,  hasil);

    printf("\n Terima kasih!");
    return 0;
}
