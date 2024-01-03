/* Од тастатура се внесуваат цели броеви се додека не се внесе нешто што не е цел број.
Да се испечати на екран сумата на броевите во кои цифрите се подредени во опаѓачки редослед.
Доколку нема такви броеви, да се испечати порака NEMA. */

#include <stdio.h>
int main ()
{
    int x, sum;
    while (scanf("%d", &x)) {
        int check = 1, a = x, y = x%10;
        a /= 10;
        while (a > 0) {
            if (a % 10 <= y) {
                check = 0;
                break;
            } else {
                y = a % 10;
                a /= 10;
            }
        }
        if (check == 1) {
            sum += x;
        }
    }
    if (sum != 0) {
        printf("%d", sum);
    }
    else {
        printf("NEMA");
    }

    return 0;
}
