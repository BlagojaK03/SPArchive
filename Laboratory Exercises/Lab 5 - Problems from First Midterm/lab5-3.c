/* �� ��������� �� ������ ����� (�� ���� ����� �� �� ������ �� �������� ����� � �� ����������� ������� ��������,
�.�. �� ������ �� ������� ����� ��������� �� ���� ����� � ������� �������� �� �����) �� ���� �� �� ������� �����.
�� �� ������� �������� ��� �� ����� �� �� �������� ������ ������� �� ��� ������� ��� �� ����� ��������� �� ��� �������� ���� �� ����� �� �� �� ������ �������.
���������: �� �� ����������� ���� ���� ������� ��� �� ����� ����� �� ��� �������� ���� �� �����. */

#include<stdio.h>
int main()
{
    short f = 0;
    char prev='-', next, c;
    while(1){
        scanf("%c", &next);
        if(prev=='-') prev = next;
        else if(next == '.') break;
        else{
            if(prev >= 'a' && prev <= 'z' && prev != 'a' && prev != 'e' && prev != 'i'
            && prev != 'o' && prev != 'u'&& next >= 'a' && next <= 'z' && next != 'a'
            && next != 'e' && next != 'i' && next != 'o' && next != 'u')
            { f = 1; c = prev; printf("%c", next);}
            else if(f) { printf("%c", c); f = 0;}
            else printf("%c", prev);
            prev = next;
        }
    }
    putchar(prev);
    putchar(next);
    return 0;
}
