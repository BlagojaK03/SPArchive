/* �� ���������� ���� �� �� ������� ��������� �������� �� ��� �� ������ � ������ N.
���� �� ������� ����� N � ����� � N*N ���������� �� ���������.

�� �� ������� ������ �� ���������� �� �������� ��������� �� ��������� (����������� �� ������ ��������� � �������).

�� �� �������� ���������������� ������� �� ����� (���� ������� �� ��������� �� ������ �� 3 ����� - %3d). */

#include <stdio.h>
#define max 100

int main()
{
    int n,a[max][max], i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
           if (i == j) a[i][j] *= -1;
           printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

