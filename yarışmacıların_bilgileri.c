#include <stdio.h>
#include <stdint.h>

// Submarine yapısı tanımı
typedef struct Submarine {
    char name[50];
    char team_name[50];
    uint8_t id;
    uint16_t features;
} tSubmarine;

// features fonksiyonu tanımı
void features(uint8_t secim, tSubmarine *araclar) {
    printf("Takım ismi: %s\n", araclar[secim - 1].team_name);
    printf("Araç ismi: %s\n", araclar[secim - 1].name);

    uint16_t features = araclar[secim - 1].features;
    printf("Gripper: %s\n", (features & 0b00000001) ? "Var" : "Yok");
    printf("Max derinlik: %d\n", ((features >> 1) & 0b00000111) * 25);
    printf("Max hız: %d\n", ((features >> 4) & 0b00000111) * 15);
    printf("Eksen sayısı: %d\n", ((features >> 7) & 0b00000011) + 3);
    printf("Motor sayısı: %d\n", ((features >> 9) & 0b00000011) * 2 + 4);
    printf("Otomatik sürüş: %s\n", ((features >> 11) & 0b00000001) ? "Var" : "Yok");
    printf("Katıldığı yarışma sayısı: %d\n", features >> 12);
}

int main() {
    tSubmarine araclar[5] = {
        {"ZIMA", "CAS Marine", 1, 0b0010110110111010},
        {"ALVIN", "DeepDive", 2, 0b1001000100101001},
        {"KRAKEN", "DeepSea", 3, 0b0100001010011111},
        {"NEMO", "Marina", 4, 0b0101011011001101},
        {"DERYAROVA", "TeamMuradov", 5, 0b1101111000010010}
    };

    uint8_t secim;
    printf("Araç seçiniz:\n");
    printf("1. ZIMA\n");
    printf("2. ALVIN\n");
    printf("3. KRAKEN\n");
    printf("4. NEMO\n");
    printf("5. DERYAROVA\n");

    printf("Girdi: ");
    scanf("%hhu", &secim);

    features(secim, araclar);

    return 0;
}
