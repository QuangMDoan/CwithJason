#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        int r = rand();
        r = r % 100;
        if(r % 2 == 1) {
            sum += 1;
        }
    }
    printf("the number of odd numbers is %d\n", sum);
}