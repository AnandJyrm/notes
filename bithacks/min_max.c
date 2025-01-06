// Find the minimum / maximum of 2 integers without conditionals
// ^ is the XOR operator
// assuming x = 5 and y = 9, minimum is:
// r = 9 ^ ( 12 & -1 ) = 9 ^ 12 = 5

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Pass two integers to find their min and max\n");
        return -1;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int r;
    r = y ^ ((x ^ y) & -(x < y));
    printf("Minimum of %d & %d: %d\n", x, y, r);
    r = x ^ ((x ^ y) & -(x < y));
    printf("Maximum of %d & %d: %d\n", x, y, r);
    return 0;
}
