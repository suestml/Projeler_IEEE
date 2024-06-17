#include <stdio.h>
int main() {
    int pw, y, t, i;
    int s = 5;
    int dizi[5] = {0}; // Toplamı tutacak dizi
    int klasik[9] = {50, 70, 150, 30, 10, 50, 100, 50, 70}; // 580
    int rock[9] = {100, 90, 70, 150, 90, 200, 100, 70, 80}; // 950
    int pop[9] = {30, 80, 150, 90, 150, 20, 100, 200, 120}; // 940
    int arabesk[9] = {200, 90, 20, 70, 80, 60, 100, 0, 110}; // 730
    int rap[9] = {30, 25, 70, 80, 150, 10, 100, 10, 40}; // 515

    for (i = 0; i < 9; ++i) {
        dizi[0] += rock[i];
        dizi[1] += pop[i];
        dizi[2] += arabesk[i];
        dizi[3] += klasik[i];
        dizi[4] += rap[i];
    }
    for (i = 0; i < (s - 1); i++) {
        pw = i;
        for (y = i + 1; y < s; y++) {
            if (dizi[pw] < dizi[y])
                pw = y;
        }
        if (pw != i) {
            t = dizi[i];
            dizi[i] = dizi[pw];
            dizi[pw] = t;
        }
    }
    printf("En çok dinlenen müzik türünden en az dinlenen müzik türüne sıralama\n");
    i=0;
    for (int j = 0; j < 5; j++) {
        if (dizi[j] == dizi[i]) {
            switch (j) {
                case 0:
                    printf("Rock: %d\n", dizi[i]);
                    break;
                case 1:
                    printf("Pop: %d\n", dizi[i]);
                    break;
                case 2:
                    printf("Arabesk: %d\n", dizi[i]);
                    break;
                case 3:
                    printf("Klasik: %d\n", dizi[i]);
                    break;
                case 4:
                    printf("Rap: %d\n", dizi[i]);
                    break;
            }
             i++;
        }
    }
    return 0;
}
