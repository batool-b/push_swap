#include "push_swap.h"
#include <stdio.h>

int main(void)
{
    t_stack a;
    t_stack b;

    a.size = 4;
    a.array = malloc(sizeof(int) * 4);
    a.array[0] = 10;
    a.array[1] = 20;
    a.array[2]= 4;
    a.array[3]=66;

    b.size = 3;
    b.array = malloc(sizeof(int) * 3);
    b.array[0] = 30;
    b.array[1] = 40;
    b.array[2] = 0;

    ss(&a, &b);

    printf("A: %d %d %d %d\n", a.array[0], a.array[1],a.array[2],a.array[3]);
    printf("B: %d %d %d\n", b.array[0], b.array[1], b.array[2]);

    free(a.array);
    free(b.array);
    return (0);
}
