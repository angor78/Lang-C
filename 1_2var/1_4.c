#include <stdio.h>

main(){
    float fahr, celsius;
    int lower, upper, step;
    lower = -20;
    upper = +20;
    step = 1;
    celsius = lower;
    printf("Celsius to Fahr.\n" );
    while (celsius <= upper) {
        fahr = (celsius/(5.0/9.0))+32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
        }
}
