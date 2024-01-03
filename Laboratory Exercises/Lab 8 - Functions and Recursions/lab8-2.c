/* Од тастатура се вчитуваат броевите A и B.
На екран да се испечатат сите броеви од интервалот [A,B] кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4.

Предлог за работа:
Да се имплементира функција reverseNumber (int number) која ќе го пресмета обратниот број на определен број number.
Да се имплементира функција isPalindrome (int number) која ќе врати 1 доколку бројот number е палиндром, а 0 во спротивно.
Да се имплементира функција containsDigits (int number) која ќе врати 1 доколку сите цифри во бројот се 0,1,2,3 или 4, а 0 во спротивно.
Да се искористат функциите isPalindrome и containsDigits во main функцијата.

Дополнително: Направете ја функцијата containsDigits рекурзивна. */

#include <stdio.h>

int reverseNumber (int n)
{
    int i, reverseN = 0;
    for (i = 0; n != 0; ++i) {
        reverseN = (reverseN * 10) + (n % 10);
        n /= 10;
    }
    return reverseN;
}

int isPalindrome (int n)
{
    if (n == reverseNumber(n)) return 1;
    else return 0;
}

int containsDigits (int n)
{
    if (n == 0) return 1;
    if (n % 10 > 4) return 0;
    return containsDigits(n/10);
}

int main()
{
    int i, a, b;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++) {
        if (isPalindrome(i) && containsDigits(i))
            printf("%d\n", i);
    }
    return 0;
}

