/* ����� �� ����� �� �������. �� ������ �� ������������� n ����� ������, � ������ �� ���� 100�� ����� ���� �����.
����� �� ����� � ���� �� ������ �� ���������� ��� � �� m �� ���������o�� �� ������� ������ (����� ���� s ������� ������),
� ����� �� �������� �� �������� ���������� ��� � �� k �� ������������ (������� � k>m).
�� ���� �� ������ ����������� n,s,m � k, � �� ����� �� ������ 1 ��� ����� ������� �� ������������, 0 ��� �� �������, ��� -1 ��� �� ������� ������� �� ����������.

������: ����� � ��������� 300 �� �� ���������� � 700 �� �� ������������.
��� ����� ��� 4 ���� ������, ���� �� ������ �� ���������� ��� � 300 �� ���������� � �� �� ������� 1 ���� ������.
�� ���������� �� ������� 2 ���� ������ (������: 1 + 2 = 3 ����).
�� ���������� �� ������������ �� �� ������� ���� 400 ��. ���� �� ��� ������� ������ �� ������. */

#include<stdio.h>
int main()
{
    int n,s,m,k;
    scanf("%d %d %d %d", &n, &s, &m, &k);
    int tmp = m/100;
    if(n >= tmp){
        n = n-tmp + s;
        int tmp1 = (k - m)/100;
        if(n >= tmp1){
            printf("1");
        }else{
            printf("0");
        }
    }else{
        printf("-1");
    }
    return 0;
}
