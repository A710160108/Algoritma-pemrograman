#include <stdio.h>

int main() {

    int invalid_operator = 0;
    char operator;
    int angka1, angka2;
    float hasil;
    printf("Masukkan dua angka dan opertor dengan format: \n");
    printf("angka1 operator angka2 \n");

    scanf("%d %c %d", &angka1, &operator, &angka2);

    switch(operator) {
        case '*' :
            hasil = angka1 * angka2;
            printf("%d %c %d = %.2f \n", angka1, operator, angka2, hasil);
        break;
        case '/' :
            hasil = angka1 / angka2;
            printf("%d %c %d = %.2f \n", angka1, operator, angka2, hasil);
        break;
        case '+' :
            hasil = angka1 + angka2;
            printf("%d %c %d = %.2f \n", angka1, operator, angka2, hasil);
        break;
        case '-' :
            hasil = angka1 - angka2;
            printf("%d %c %d = %.2f \n", angka1, operator, angka2, hasil);
        break;
        default :
            printf("Invalid operator! \n");
    }

    return 0;
}
