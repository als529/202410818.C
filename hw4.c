#include <stdio.h>

int is_prime(int number) {
    if (number < 2)
        return 0;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Please enter a number : ");
    scanf("%d", &n);

    if (is_prime(n))
        printf("it is a prime number.\n");
    else
        printf("it is not a prime number.\n");

    return 0;
}
