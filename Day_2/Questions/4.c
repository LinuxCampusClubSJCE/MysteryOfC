#include <stdlib.h>

int main() {
    int x = 1, y = 0;
    if (x && y) {
        printf("Both x and y are non-zero\n");
    } else {
        printf("One or both values are zero\n");
    }
    return 0;
}