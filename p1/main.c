#include <stdio.h>

int main(void){

    char str[10] = {};
    char *p = nullptr, *q = nullptr;
    char maxChar = 0;
    int maxCount = 0;

    for (p = str; p < str + 10; p++)
        scanf("%c", p);

    for (p = str; p < str + 10; p++){
        int count = 0;
        for (q = str; q < str + 10; q++){
            if (*q == *p)
                count++;
        }
        if (count > maxCount){
            maxCount = count;
            maxChar = *p;
        }
    }

    printf("%c %d\n", maxChar, maxCount);

    return 0;
}
