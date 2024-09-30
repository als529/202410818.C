#include <stdio.h>  

int main() {
    double kilometers, miles;
    int miles_int, kilometers_int;

    printf("Please enter kilometers: ");
    scanf_s("%lf", &kilometers); 

    miles = kilometers / 1.609;

    miles_int = (int)(miles * 10);
    double decimal = (miles * 10) - miles_int;
    if (decimal >= 5.0) { 
        miles_int += 1;
    }
    miles = miles_int / 10.0;

    kilometers_int = (int)(kilometers * 10);
    decimal = (kilometers * 10) - kilometers_int;
    if (decimal >= 5.0) { 
        kilometers_int += 1;
    }
    kilometers = kilometers_int / 10.0;

    printf("%.1f km is equal to %.1f miles\n", kilometers, miles);

    return 0;
}
