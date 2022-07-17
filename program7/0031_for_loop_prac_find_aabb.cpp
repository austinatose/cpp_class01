#include <iostream>
#include <math.h>

int main() {
    // 4 digit square numbers are between 31 and 100

    //solution 1
    int num = 0;
    int list[4];
    for (int i = 32; i <= 99; i++) {
        num = i * i;
        list[0] = num % 10;
        list[1] = num / 10 % 10;
        list[2] = num / 100 % 10;
        list[3] = num / 1000 % 10;
        if (list[0] == list[1] && list[2] == list[3]) {
            printf("%d\n", num);
        }
    }


    //solution 2
    for (int j = 1000; j < 10000; j++) {
        if(sqrt(j) == floor(sqrt(j))) {
            list[0] = j % 10;
            list[1] = j / 10 % 10;
            list[2] = j / 100 % 10;
            list[3] = j / 1000 % 10;
            if (list[0] == list[1] && list[2] == list[3]) {
                printf("%d\n", j);
            }
        }
    }
}

