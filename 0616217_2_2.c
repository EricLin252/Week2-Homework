#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[15];
    /*
    char y[5];
    char m[3];
    char d[3];
    */
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%s", a);
    printf("You entered the date ");
    printf("%c%c%c%c", a[6], a[7], a[8], a[9]);
    printf("%c%c", a[0], a[1]);
    printf("%c%c", a[3], a[4]);

    return 0;
}
