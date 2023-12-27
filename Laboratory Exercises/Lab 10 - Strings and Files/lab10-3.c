/* Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:

релативната фреквенција на сите мали букви
релативната фреквенција на сите големи букви
Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие карактер/и со вкупниот број на карактери во текстот
(да се игнорираат празните места и специјалните знаци).

Да не се менува функцијата writeToFile(). */

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
