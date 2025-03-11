#include <stdio.h>

void main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {  
            printf("2 x %d = %d\n", i, 2 * i);  
            continue;  
        }
        printf("2 x %d = %d\n", i, 2 * i);  
    }
    return 0;
}
