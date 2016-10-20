#include <stdio.h>
#define PANJANG 10
#define LEBAR 5
#define GANTIBARIS '\n'

int main() {
    int area;
    area = PANJANG * LEBAR;
    printf("nilai area : %d", area);
    printf("%c", GANTIBARIS);
    printf("Terimakasih.");

    return 0;
}
