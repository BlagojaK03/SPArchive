/* Да се напише програма која чита две целобројни матрици со димензија mxn, а потоа печати колку колони од првата матрица се наоѓаат во втората матрица. */

#include <stdio.h>
#define max 100

int main()
{
    int n, m, a[max][max], b[max][max], i, j, k, count = 0, flag;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (j = 0; j < n; j++) {
        for (k = 0; k < n; k++) {
            flag = 1;
            for (i = 0; i < m; i++) {
                if (a[i][j] != b[i][k]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) count++;
        }
    }
    printf("%d", count);
    return 0;
}
