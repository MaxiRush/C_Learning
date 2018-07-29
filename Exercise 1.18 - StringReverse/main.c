/* вывод на экран строки, напечатанной в обратном порядке */
#include <stdio.h>

#define MAXLINE 1000 // максимальный размер строки

int getLine(char line[], int);
void copy (char to[], char from[]);
void reverse(char from[], char to[], int len);
void clear(char cleared[], int length);
int i = 0;

int main()
{
    int a; // переменная для хранения длины строки
    char line[MAXLINE]; // текущая строка
    char reversed[MAXLINE]; // строка в обратном порядке

    while (1) {
        a = getLine(line, MAXLINE);
        reverse(line, reversed, a);
        printf("Reversed: %s, %d\n", reversed, a);
        clear(reversed, a);
    }
}

/* читает введенную строку в s и возвращает её длину */
int getLine(char s[], int lim) {
    int c, i;
    for (i = 0; i < (lim - 1) && (c = getchar()) != '\n'; i++) {
        s[i] = c;
        if (c == '\n') {
            s[i] = c;
            i++;
        }
    }
    s[i] = '\0';
    return i;
}

/* читает строку s, и сохраняет её в to в обратном порядке */
void reverse(char from[], char to[], int len) {
    while (len > 0) {
        to[i] = from[len-1];
        len--;
        i++;
    }
    i = 0;
}

/* обнуляет элементы массива */
void clear(char cleared[], int length) {
    for (int i = 0; i < length; i++) {
        cleared[i] = 0;
    }
}
