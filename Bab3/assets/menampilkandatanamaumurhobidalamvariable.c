#include <stdio.h>

int main() {
    char nama[30];
    int umur;
    char hobi[64];

    printf("Lengkapi data diri anda pada form berikut! \n");
    printf("| ========================================== | \n");
    printf("\t Nama : "); gets(nama);
    printf("\t Umur : "); scanf("%i", &umur);
    printf("\t Hobi : "); scanf("%s", &hobi);

    printf("Terima kasih!");
    return 0;
}
