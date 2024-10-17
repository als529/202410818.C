#include <stdio.h>

void to_binary(int number) {
    if (number == 0)
        return;

    to_binary(number / 2);  
    printf("%d", number % 2);  
}

int main() {
    int n;

    printf("Please enter a number: ");
    scanf_s("%d", &n);

    if (n == 0) {
        printf("0");
    }
    else {
        to_binary(n);
    }

    printf("\n");
    return 0;
}