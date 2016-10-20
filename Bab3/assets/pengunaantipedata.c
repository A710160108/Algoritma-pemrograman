#include <stdio.h>
#include <float.h>

int main() {
    printf("Ukuran penyimpanan float : %d \n", sizeof(float));
    printf("Nilai float positif terkecil : %E \n", FLT_MIN );
    printf("Nilai float positif terbesar : %E \n", FLT_MAX );
    printf("Tingkat presisi nilai : %d \n", FLT_DIG );

    return 0;
}
