/* �� �� ������ �������� ��� ��� �� �������� �� ��� "text.txt" �� �� ������ � �� �� �������� �� ���������� �����:

����������� ���������� �� ���� ���� �����
����������� ���������� �� ���� ������ �����
����������� ���������� �� �����(�) ��������(�) �� ���������� ���� �������� �� �������� ��������� �� ��/��� ��������/� �� �������� ��� �� ��������� �� �������
(�� �� ���������� �������� ����� � ����������� �����).

�� �� �� ������ ��������� writeToFile(). */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
    FILE *dat = fopen("text.txt", "r");
    int stringL = 0, charBig = 0, charSmall = 0;
    char C;
    while ((C = fgetc(dat)) != EOF) {
        if (isalpha(C)) stringL++;
        if (isupper(C)) charBig++;
        else if (islower(C)) charSmall++;
        else continue;
    }
    float freqSmall = (charSmall * 1.0)/stringL, freqBig = (charBig*1.0)/stringL;
    printf("%.4f\n%.4f", freqBig, freqSmall);
    fclose(dat);
    return 0;
}
