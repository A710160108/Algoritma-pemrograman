#include <stdio.h>

int main() {

    char hasilujian = 'A';
    switch(hasilujian) {
        case 'A' :
            printf("Sangat Baik! \n");
        break;
        case 'B' :
        case 'C' :
            printf("Baik \n");
        break;
        case 'D' :
            printf("Cukup \n");
        break;
        case 'F' :
            printf("Sebaiknya coba lagi \n");
        break;
        default :
            printf("Gagal \n");
    }

    printf("Nilai anda adalah %c \n", hasilujian);

    return 0;
}
