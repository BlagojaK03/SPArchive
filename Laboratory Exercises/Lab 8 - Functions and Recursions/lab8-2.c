/* �� ��������� �� ��������� �������� A � B.
�� ����� �� �� ��������� ���� ������ �� ���������� [A,B] ��� �� ���������� � �� ��������� ���� �� ������� 0,1,2,3 � 4.

������� �� ������:
�� �� ������������ ������� reverseNumber (int number) ��� �� �� �������� ��������� ��� �� ��������� ��� number.
�� �� ������������ ������� isPalindrome (int number) ��� �� ����� 1 ������� ����� number � ���������, � 0 �� ���������.
�� �� ������������ ������� containsDigits (int number) ��� �� ����� 1 ������� ���� ����� �� ����� �� 0,1,2,3 ��� 4, � 0 �� ���������.
�� �� ���������� ��������� isPalindrome � containsDigits �� main ���������.

������������: ��������� �� ��������� containsDigits ����������. */

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

