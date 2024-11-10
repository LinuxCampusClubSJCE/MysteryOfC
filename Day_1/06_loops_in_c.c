#include <stdio.h>

int j;

void pritn()
{
    printf("%d",j);
}

int main() {
    int i;

    // for loop
    // printf("for loop:\n");
    // for (int i = 1; i <= 5; i++) {
    //     printf("%d ", i);
    // }
    // printf("\n");

    // // while loop
    // printf("\nwhile loop:\n");
    // i = 1;  // Reset i to 1
    // while (i <= 5) {
    //     printf("%d ", i);
    //     i++;
    // }
    // printf("\n");

    // do-while loop
    printf("\ndo-while loop:\n");
    i = 6;  // Reset i to 1
    do {
        printf("Pushpa\n");
        printf("%d ", i);
        i++;
    } while (i >0);
    printf("\n");

    return 0;
}
/*for loop:
1 2 3 4 5 

while loop:
1 2 3 4 5 

do-while loop:
1 2 3 4 5
*/