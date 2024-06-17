#include <stdio.h>
void reverseArray(int *arr, int size) {
    int temp;
    int *start = arr; // Dizinin başlangıç adresini tutan işaretçi
    int *end = arr + size - 1; // Dizinin son adresini tutan işaretçi

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main() {
    int arr[] = {92, 35, 14, 73};
    int size = sizeof(arr) / sizeof(arr[0]); // Dizinin boyutunu hesaplama

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
