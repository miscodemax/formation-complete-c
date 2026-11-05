
#include <stdio.h>

int main(void) {

    int n;
    printf("donne un entier : ");
    scanf("%d", &n);

    if (n % 2 == 0) printf("%d est pair!", n);
    printf("%d est impair!", n);

    return 0;
}