/* ����� � ������������ �� �� ���� �� ������ �������� �� ������������� ������ � �������� �� �� ��������� �� ������.
�������������� �� ������ �� ������������ �� ������� ���� � ������� ����� ���� (������� � � �) ��� �� ���� ������. �����, �� ��������� ������������ �� ��� �����.
������ �������� �� ����� �� ����� ����� �� ����� ����� �� �������� DA, ��� �������� ����� ���� �� �������� �� �������������� � NE ��� � ������ �� ���� ��� ������ �� ����. */

#include <stdio.h>

int main()
{
    int ax, ay, cx, cy, x1, y1, x2, y2;

    /* ax, ay - koordinati na A,
       cx, cy - koordinati na C,
       x1, y1 - koordinati na prva tochka,
       x2, y2 - koordinati na vtora tochka */

    scanf("%d %d %d %d", &ax, &ay, &cx, &cy);
    scanf("%d %d", &x1, &y1);
    if ((x1 == ax || x1 == cx) && (ay<=y1 && y1<=cy)) {
        printf("DA\n");
    }
    else if ((y1 == ay || y1 == cy) && (ax<=x1 && x1<=cx)) {
        printf("DA\n");
    }
    else {
        printf("NE\n");
    }
    scanf("%d %d", &x2, &y2);
    if ((x2 == ax || x2 == cx) && (ay<=y2 && y2<=cy)) {
        printf("DA\n");
    }
    else if ((y2 == ay || y2 == cy) && (ax<=x2 && x2<=cx)) {
        printf("DA\n");
    }
    else {
        printf("NE\n");
    }
    return 0;
}
