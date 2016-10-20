#include <stdio.h>

int main() {
    const int PANJANG = 10;
    const int LEBAR = 5;
    const char GANTIBARIS = '\n';
    int area;
    area = PANJANG * LEBAR;
    printf("nilai area : %d", area);
    printf("%c", GANTIBARIS);
    printf("Terimakasih");

    return 0;
}
