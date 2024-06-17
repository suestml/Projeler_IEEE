#include <stdio.h>
#include <stdint.h>
uint8_t checkNumber(uint8_t *numb, uint8_t *input) {
    int correct = 1; 
    for (int i = 0; i < 5; i++) {
        int j;
        if (numb[i] == input[i]) {
            printf("o");
        } else {
            int found = 0;
            for (j = 0; j < 5; j++) {
                if (numb[i] == input[j]) {
                    found = 1;
                    break;
                }
            }
            if (found) {
                printf("x");
            } else {
                printf("+");
                correct = 0; 
            }
        }
    }
    if (correct) {
        printf("\nDoğru bildiniz, Tebrikler!\n");
    } else {
        printf("\nYanlış bildiniz, Tekrar deneyin!\n");
    }
}
int main() {
    uint8_t numb[5] = {4, 7, 3, 2, 1}; 
    uint8_t input[5];
    
    printf("5 haneli bir sayi giriniz:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%hhu", &input[i]);
    }
    printf("Sonuc: ");
    checkNumber(numb, input);

    return 0;
}
