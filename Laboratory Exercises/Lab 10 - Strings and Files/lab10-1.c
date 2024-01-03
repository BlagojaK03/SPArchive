/* Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што левата и десната половина од стрингот ќе си ги сменат местата.  */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%100s%[^\n]", str);
    int i, strLength = strlen(str);
    for (i = (strLength/2); i < strLength; i++) {
        printf("%c", str[i]);
    }
    for (i = 0; i < strLength/2; i++) {
         printf("%c", str[i]);
    }
    return 0;
}
