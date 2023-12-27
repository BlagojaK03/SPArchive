/* �� ���������� ���� �� ������� ���������� �� ���� ��������� ����� MxN.
����� �� ������� ��������� �� ������� �� �� ����� (x_igrac, y_igrac), �� �� ������� ��������� �� ������� (x_topka, y_topka) � ��������� �� ����� (x1_gol, y1_gol) (x2_gol, y2_gol).
�� ���� �� �� ������ ���� ��������� ����� �� �� �������� ����������� �����, �� ����������� ����� ������� � ������� �� �������� 'i', ����� � ������� �� �������� ']' � ������� � �������� �� 'o', �� �������� �� �������� �� '-'.
���� ������ � ������ �� �� ���������� �� ����� ����������� ����� ������ ��������� ���������.
����� �� ���������� ���� �� ��������� ��� ��������� �� ������������� �� ������� �� x ������������ � ������������� �� ������� �� � ������������.
�� ������������� �� ������� ������� �� ���� �� ����� �� ������ GOAL, ������� �� ���� ������ �� ����������� ����� �� ������ OUT � ������� �� ���� �� �������, �� �� � ��� �� ������ ������ ������� �� ������� � ����������� ����� �� ������ ������� �� �������.

��������: �� ������������� �� ����������� ����� ��������� �������. */

#include <stdio.h>
int main()
{
    int m, n, x_igrac, y_igrac, x_topka, y_topka, x1_gol, y1_gol, x2_gol, y2_gol, i, j;
    scanf("%d %d", &m, &n); //golemina na teren
    scanf("%d %d", &x_igrac, &y_igrac); //lokacija na igrac
    scanf("%d %d", &x_topka, &y_topka); //lokacija na topka
    scanf("%d %d %d %d", &x1_gol, &y1_gol, &x2_gol, &y2_gol); //lokacija na golot
    char teren[m][n];

    //pechatenje na terenot
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (x_igrac == i && y_igrac == j)
                teren[i][j] = 'i';
            else if (x_topka == i && y_topka == j)
                teren[i][j] = 'o';
            else if ((x1_gol == i && y1_gol == j) || (x2_gol == i && y2_gol == j))
                teren[i][j] = ']';
            else
                teren[i][j] = '-';
            printf("%c ", teren[i][j]);
        }
        printf("\n");
    }

    //pomestuvanje na topkata
    int x_offset, y_offset, new_x, new_y;
    scanf("%d %d", &x_offset, &y_offset);
    new_x = x_topka + x_offset;
    new_y = y_topka + y_offset;

    //pechatenje rezultat
    if ((new_x == x1_gol && new_y == y1_gol) || (new_x == x2_gol && new_y == y2_gol))
        printf("GOAL!");
    else if ((new_x >= 0 && new_x < m) && (new_y >= 0 && new_y < n)) {
        printf("Novata pozicija na topkata e (%d, %d)\n", new_x, new_y);
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (i == x_topka && j == y_topka)
                    printf("- ");
                else if (i == new_x && j == new_y)
                    printf("o ");
                else
                    printf("%c ", teren[i][j]);
            }
        printf("\n");
        }
    }
    else
        printf("OUT!");
    return 0;
}

