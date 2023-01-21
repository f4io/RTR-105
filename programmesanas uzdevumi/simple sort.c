#include  <stdio.h>
int main() {
    int a,b,c,d,e,f,g;
    printf("ievadiet pirmo decimalskaitli:");
    scanf("%d",&a);
    printf("ievadiet otro decimalskaitli:");
    scanf("%d",&b);
    printf("ievadiet treso decimalskaitli:");
    scanf("%d",&c);
    printf("dilstosa vai augosa seciba? 1 prieks dilstosas un 2 prieks augosas:");
    scanf("%d",&d);
    if(d==1) {
     if(a>b && a>c) {
        e=a;
        if(b>c) {
            f=b;
            g=c;
        }
        else{
            f=c;
            g=b;
        }
    }
    else if(b>a && b>c) {
        e=b;
        if(a>c) {
            f=a;
            g=c;
        }
        else{
            f=c;
            g=a;
        }
    }
    else if(c>a && c>b) {
        e=c;
        if(b>a) {
            f=b;
            g=a;
        }
        else{
            f=a;
            g=b;
        }
     }
     printf("%d %d %d",e,f,g);
    }
    else if (d==2) {
        if(a<b && a<c) {
        e=a;
        if(b<c) {
            f=b;
            g=c;
        }
        else{
            f=c;
            g=b;
        }
    }
    else if(b<a && b<c) {
        e=b;
        if(a<c) {
            f=a;
            g=c;
        }
        else{
            f=c;
            g=a;
        }
    }
    else if(c<a && c<b) {
        e=c;
        if(b<a) {
            f=b;
            g=a;
        }
        else{
            f=a;
            g=b;
        }
     }
     printf("%d %d %d",e,f,g);
    }
    else {
        printf("nederiga kartosanas seciba");
    }
    return 0;
}
