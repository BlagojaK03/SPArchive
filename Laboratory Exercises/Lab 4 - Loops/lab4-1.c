/* �� �� ������ �������� ��� �� �� �������� ������ �� ���� ������ ������ �� 3 �� ���������� [A,B). � � B �� ��������� �� ���������.

������:
� = 10, B = 20. ������ ��� ��������� �� ���������� �� 10,11,12,13,..,19. �� ��� ������ �� 3 �� �������� 12,15,18, �� ������� ���� � 45. */

#include <stdio.h>
int main ()
{
    int a, b, i, sum = 0;
    scanf("%d%d", &a, &b);
    for (i = a; i < b; i++) {
        if (i%3==0) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}
