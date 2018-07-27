/* вывод на экран строки, состоящей из более 80 символов */
#include <stdio.h>

#define MAXLINE 1000 // максимальный размер строки

int getLine(char line[], int);
void copy (char to[], char from[]);

int main()
{
    int a; // переменная для хранения длины строки
    char line[MAXLINE]; // текущая строка
    char longest[MAXLINE]; // строка с более 80 символами

    while (1) {
        if ((a = getLine(line, MAXLINE)) > 80) { // если длина строки более 80 символов, сохраняем и выводим её на экран
            copy(longest, line);
            printf("Output: %s (%d characters)\n", longest, a);
        } else {
            ;
        }
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

/* копирует строку */
void copy (char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}
