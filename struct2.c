#include <stdio.h>

/* Without typedef */
struct Point {
    int x;
};

/* With typedef */
typedef struct {
    int x;
} Number;

int main(void) {
    struct Point a;  // "struct" is required
    Number b;        // "struct" is not required

    a.x = 5;
    b.x = 10;

    printf("a.x = %d\n", a.x);
    printf("b.x = %d\n", b.x);

    return 0;
}
