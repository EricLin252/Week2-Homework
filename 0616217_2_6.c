#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    while(1){
        printf("Red-Fish: The number is ");
        scanf("%d", &a);
        if(a != -1){
            printf("Wen-Jie: The answer is ");
            if(a % 2 == 1) printf("odd.\n\n");
            else printf("even.\n\n");
        }else{
            printf("Wen-Jie: I don't know, I quit.");
            break;
        }
    }
    return 0;
}
