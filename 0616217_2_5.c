#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];

    printf("Your input: ");
    scanf("%s", a);
    printf("ASCII: ");
    int i;
    for(i = 0; a[i] != '\0'; i++){
        printf("%d", a[i]);
    }
    return 0;
}
