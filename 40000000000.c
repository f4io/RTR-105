#include <stdio.h>

int main() {
    long long int a, b, c;
    printf("Ievadi 400000: \n");
    scanf("%lli", &a); 
    printf("Ievadi 100000: \n");
    scanf("%lli", &b); 
    c = a * b;
    printf("\n%lli", c,"\n");

    return 0;
}