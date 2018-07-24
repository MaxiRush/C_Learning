/**Гистограммы частот встречаемости вводимых символов */

#include <stdio.h>

int main()
{
    int c, i, j;
    int charArray[126]; // создаем массив для подсчета вводимых символов

    for(i = 0; i < 126; i++) {
        charArray[i] = 0; // обнуляем каждый элемент массива
    }

    while((c = getchar()) != '\n') {
        ++charArray[c]; // увеличиваем счетчик введенного символа
    }

    printf("\n**Gistogramm of characters entered**\n");
    printf("____________________________________\n");
    for(i = 0; i < 126; i++) { // просматриваем весь массив
        if(charArray[i] > 0) { // находим символы, которые считали
            printf("%c: ", i);
            for(j = 0; j < charArray[i]; j++) { // выводим гистограмму
                printf("-");
            }
            printf("\n");
        }
    }
}
