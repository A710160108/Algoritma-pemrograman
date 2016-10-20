#include <stdio.h>

int main() {

    char nama[30];
    int umur;

    printf("Test to compile using terminal\n");
    printf("SELAMAT DATANG DI PRAKTIKUM \n ALGORITMA DAN PEMROGRAMAN \n");
    printf("=========================================================== \n");
    printf("lengkapi data berikut ini. \n");
    /* printf("\tNama: "); gets(nama); */
    printf("\tUmur :"); scanf("%i", &umur);
    printf("============================================================ \n");
    printf("\n Terimakasih %s, Umur anda %d tahun\n ", nama, umur);

    return 0;
}
