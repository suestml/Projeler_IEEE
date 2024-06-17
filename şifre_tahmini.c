#include <stdio.h>
#include <stdint.h>
uint8_t checkNumber(uint8_t *numb, uint8_t *input) {
    int j=0;
    for(int i=0;i<5;i++){
        if(numb[i]==input[j]){
            printf("%d %d ",numb[i],input[j]);
            printf("o\n");
            j++;
        }
        
        for(i=0; i<5;i++){
            if(numb[i]==input[j]){
                printf("%d %d ",numb[i],input[j]);
                printf("+\n");
                j++;
                break;
            }
        }
        if(numb[i]!=input[j]){
            printf("%d %d ",numb[i],input[j]);
            printf("x\n");
            j++;
        }
    }
}

int main() {
    uint8_t numb[5] = {4, 7, 3, 2, 1}; 
//    uint8_t input[5] ={7,5,3,1,8}; //bu oldu
    uint8_t input[5] ={1,7,3,2,6};
 //  uint8_t input[5] = {4, 7, 3, 2, 1};
    printf("5 haneli bir sayi giriniz:\n");
    printf("Sonuç: \n");
    checkNumber(numb, input);
    return 0;
}
