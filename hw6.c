#include <stdio.h>

int main() {
    int arr[5];  

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &arr[i]);
    }

    // Ȧ���� ¦���� �����Ͽ� ���
    printf("Even numbers : ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {  // ¦�� �˻�
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers : ");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {  // Ȧ�� �˻�
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
