#include <stdio.h>
int main() {
    int a,b,x,c=1,n,z;
    printf("Ievadiet decimalskaitli ");
    scanf("%d",&a);
    printf("Izvelieties datu tipu: char - 1, int - 2, long long - 3 ");
    scanf("%d",&b);
    if(b==1) {
        char z;
        z=a;
        x=1;
         while(x<=z) {
             c=c*x;
             x++;
         }
    printf("Faktoriala vertiba ir %d",c);
    }
    else if(b==2) {
        int z;
        z=a;
         x=1;
         while(x<=z) {
             c=c*x;
             x++;
         }
    printf("Faktoriala vertiba ir %d",c);
    }
    else if(b==3) {
        long long z;
        z=a;
        x=1;
         while(x<=z) {
             c=c*x;
             x++;
         }
    printf("Faktoriala vertiba ir %d",c);
    }
    else {
        printf("nederigs datu tips");
    }
}
