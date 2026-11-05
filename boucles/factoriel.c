#include <stdio.h>

int main(void) {

    int n;
    long long fact = 1;

    printf("donne un entier positif : ");
    scanf("%d", &n);

    if (n == 0 || n == 1) fact = 1;

    for (int i = 2; i <= n; i++) fact *= n;

    printf("le factoriel de %d est : %lld", n, fact);

    return 0;
}