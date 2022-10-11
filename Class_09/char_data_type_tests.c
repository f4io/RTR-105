#include<stdio.h>

int main()
{
char a = 10; // divas darbības:
             // mainīgā deklarēšana - char a - vietas piešķiršana atmiņā
             // kur un cik daudz?
             // 1 byte: šī baita saturs nav zināms (0000 1110 vai 1100 1111 utt.)
             // mainīgā deklarēšana - char a
             // vērtības piešķiršana - a = 10
             //                            10 - vesela tipa konstante
             //                            int - vesela tipa konstantēm
             //                            double: reāla tipa konstantēm
             // 1 byte:  0000 1010
             // char a = 10; mainīgā definēšana
             // mainīgā nosaukums nevar saturēt atstarpes un sākties ar skaitli
             // var būt ar mnemonisko nosaukumu, piem. cilindra_tilpums
printf("a mainīga vērtība kā simbols: %c\n",a);
printf("a mainīga vērtība kā decimlāls: %d\n",a);
printf("a mainīga vērtība kā heksidecimāls: %0x\n",a);
printf("a mainīga vērtība kā oktāls: %#o\n",a);

char b;
printf("b mainīga vērtība pirms vērtības piešķiršanas kā simbols: %c\n",b);
printf("b mainīga vērtība kā decimlāls: %d\n",b);
printf("b mainīga vērtība kā heksidecimāls: %0x\n",b);
printf("b mainīga vērtība kā oktāls: %#o\n",b);

b = 250;
return 0;
}
