#include<stdio.h>

int main()
 {
int i_value = 8963;
printf("i_value (found by identificator) = %d\n",i_value);
printf("sizeof(i_value) = %ld (bytes)\n",sizeof(i_value));

int *i_pointer = &i_value;
printf("\ni_pointer (address) = %p\n",i_pointer);
printf("i_value (found by address) = %d\n",*i_pointer);
printf("sizeof(i_pointer) = %ld (bytes)\n",sizeof(i_pointer));

*i_pointer = (*i_pointer)+1;
printf("\ni_value (found by identificator: after increment) = %d\n",i_value);


return 0;
}
