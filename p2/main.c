#include <stdio.h>

int main(void){

    int a[20] = {}, b[20] = {};
    int N;
    int *p = nullptr, *q = nullptr;

    scanf("%d", &N);

    for (p = a; p < a + N; p++)
        scanf("%d", p);
    for (p = b; p < b + N; p++)
        scanf("%d", p);

    for (p = a, q = b + N - 1; p < a + N; p++, q--)
        printf(" %d", *p + *q);
    printf("\n");

    return 0;
}
