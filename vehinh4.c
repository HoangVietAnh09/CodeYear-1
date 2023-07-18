
#include <stdio.h>

int main() {
    int height;
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= 2*height-1; j++) {
            if (j % 2 == 1 && j >= i && j <= 2*height-i) {
                if ((i+j) % 4 == 0) {
                    printf("D");
                } else {
                    printf("B");
                }
            } else {
                printf("@");
            }
        }
        printf("\n");
    }

    return 0;
}
