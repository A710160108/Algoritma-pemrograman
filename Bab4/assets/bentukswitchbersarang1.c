#include <stdio.h>

int main() {

    int x = 300;
    int y = 50;

    switch(x) {
        case 300 :
            printf("Ini bagian dari switch luar \n");
        switch(y) {
            case 500 :
                printf("Ini bagian dari switch dalam \n");
        }
    }

    printf("Nilai x sesungguhnya adalah : %d \n", x );
    printf("Nilai y sesungguhnya adalah : %d \n", y );

    return 0;
}
