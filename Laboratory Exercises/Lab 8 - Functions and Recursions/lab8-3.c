/* Да се прочита број N од тастатура.
Да се дефинира функција form(int n) што ќе испечати форма од ѕвезди како што е прикажано на следниот пример:
Влез: 5
Излез:
*****
****
***
**
*
За да се освојат сите поени од вежбата, потребно е функцијата form да биде рекурзивна. */

#include <stdio.h>

void form(int n)
{
    if (n) {
        int i;
        for (i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
        form(n-1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    form(n);
    return 0;
}
