#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{

uint16_t a = 4095;
uint8_t l, h;
l = a;
h = (a >> 8);
printf("a = %d\n", a);
printf("l = %d\n", l);
printf("h = %d\n", h);
    return 0;
}
