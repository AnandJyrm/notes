// Swap values using XOR
// assuming x = 5, y = 6
// x = y ^ x = 6 ^ 5 = 3
// y = x ^ y = 3 ^ 6 = 5
// x = y ^ x = 5 ^ 3 = 6

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Pass two integers to swap them\n");
        return -1;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    printf("Swap via X of %d, %d:", x, y);
    x = y ^ x;
    y = x ^ y;
    x = y ^ x;

    printf(" %d, %d\n", x, y);

    return 0;
}
