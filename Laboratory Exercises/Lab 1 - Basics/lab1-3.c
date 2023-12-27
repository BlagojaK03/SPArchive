//Да се внесат два четирицифрени броја. Да се испечати сумата на цифрите кои се наоѓаат на позицијата на единците, па на десетките, стотките и илјадарките.

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int E = (a%10)+(b%10);
    int D = ((a/10)%10)+((b/10)%10);
    int S = ((a/100)%10)+((b/100)%10);
    int I = (a/1000)+(b/1000);

    printf("Edinici: %d\n", E);
    printf("Desetki: %d\n", D);
    printf("Stotki: %d\n", S);
    printf("Iljadarki: %d\n", I);

    return(0);
}

