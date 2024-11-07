#include <stdio.h>

int main() {
    int arr[5];  

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &arr[i]);
    }

    // È¦¼ö¿Í Â¦¼ö¸¦ ±¸ºĞÇÏ¿© Ãâ·Â
    printf("Even numbers : ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {  // Â¦¼ö °Ë»ç
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers : ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {  // È¦¼ö °Ë»ç
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
