#include <stdio.h>

#define IN 1 // in word
#define OUT 0 // out of word

/* Words length calculating */
int main()
{
    int c, charCount, state;
    int wordsLength[10];

    charCount = 0;
    state = OUT;

    for (int i = 0; i < 10; i++) {
        wordsLength[i] = 0;
    }

    while ((c = getchar()) != '\n') {
        switch (c) {
            case ' ': state = OUT; break;
            case '\t': state = OUT; break;
            default: state = IN; break;
        }

        if (state == IN) {
            if (c >= 'A' && c <= 'z') {
                ++charCount;
            }
            else {
                printf("Error! Enter only letters.");
                return 0;
            }
        }

        else if (state == OUT && charCount > 0){
            ++wordsLength[charCount];
            charCount = 0;
        }
    }

    ++wordsLength[charCount]; // remember the last word

    for (int i = 1; i < 10; i++) {
        printf("Words of %d letters: %d|", i, wordsLength[i]);
        for (int j = 0; j < wordsLength[i]; j++) {
            printf("-");
        }
        putchar('\n');
    }
}
