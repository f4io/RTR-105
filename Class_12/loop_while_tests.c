#include<stdio.h>

int main()
{
unsigned char a=10;
// ar unsigned data tipu fals nekad neiestāsies
// unsigned nozīmē burtiski "bez zīmes", tā kā, nevar būt mīnuss
while(a=0)
 {
 printf("a: %d\n",a);
 a--;
 }
printf("a (pec cikla): %d\n",a);

return 0;
}

