/* �� ���������� ���� �� ������� ����� N, ����� K � ������ C. ����� �� ��������� N ���������� ���� (����� �� ��� ���).
�� �� ��������� �� ����� ������������ ���� ��� �� ������� ������ C ����� K ���� ��� ������� �� ���������� �� �������.
��� ���� ����� ����, �� �� �������� ������ NONE. */

/*
**�������� �� �����������:**
���� ������ ���� ���������� �� ������� � ��������� �� ������ �����.
���������� ���� ��' �� ������ ����� � ����� ���������� ����� �������� ����� �� �� ����� ���� ���� ������.
������ �� ������� ��� � �������� �� ��������� ������ �� courses (�� fgets), �� ���������� �� �� ��������� �� ������� ����� �� ���� ������.
������� �� �� �� ������� ���������� �� �� ������ ���� ��� �����, ����� ���� � �������� �� �������� �������� ����� ��� ����� �� ���������.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int charCount (char *a, char c)
{
    int j, charCounter = 0;
    for (j = 0; a[j] != '\0'; j++) {
        if (isalpha(a[j])) {
            if (tolower(a[j]) == tolower(c))
                charCounter++;
        }
    }
    return charCounter;
}

int main()
{
    int N, K, strCount = 0;
    char C, str[100];
    scanf("%d %d %c", &N, &K, &C);

    for (int i = 0; i < N; i++) {
        scanf("%100s", str);
        if (charCount(str, C) == K) {
            puts(str);
            strCount++;
        }
    }
    if (!strCount) printf("NONE");
    return 0;
}