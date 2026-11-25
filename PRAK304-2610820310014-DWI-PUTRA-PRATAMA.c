#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if (number == 0) {
        printf("Nol\n");
    } 
    else if (number >= 1 && number <= 9) {
        printf("Satuan\n");
    } 
    else if (number >= 10 && number <= 19) {
        printf("Belasan\n");
    } 
    else if (number >= 20 && number <= 99) {
        printf("Puluhan\n");
    } 
    else {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }

    return 0;
}