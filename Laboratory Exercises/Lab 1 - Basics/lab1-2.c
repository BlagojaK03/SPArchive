//�� �� �������� �������� ������(cm) �� ����� �������� � ������ �� �� �������� ����������� �� m � cm.

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int P = (a+b+c)/3;
    printf("%d m %d cm", P/100, P%100);

    return(0);
}

