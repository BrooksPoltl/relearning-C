#include <stdio.h>

main()
{
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius\tFahr\n");
    printf("--------------\n");
    while(celsius <= upper) {
        fahr = celsius * (1.8) + 32;
        printf("%d\t%d\n", celsius, fahr);
        celsius = celsius + step;
    }
}