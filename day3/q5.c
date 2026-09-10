#include <stdio.h>
int main() {
    float celcius;
    scanf("%f", &celcius);
    float fahrenheit = (celcius * 9 / 5) + 32;
    printf("Fahrenheit=%.0f", fahrenheit);
    return 0;
}