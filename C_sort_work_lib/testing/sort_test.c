
#include "sort_test.h"
#include <stdio.h>
#include <stdlib.h>
#include "sort_work_lib.h"
#include "rand_work_lib.h"
int main(void)
{
    /*
    int amount = 10;
    float* array = create_rand_with_in_arr_f(amount,-100,100);
    qsort(array,amount,sizeof(float),cmp_float);
    for (int i=0;i<amount;i++)
    {
        printf("%f ",array[i]);
    }
    printf("\n");
    */
    char *a = "abc";
    char *b = "cba";
    swap_two_any(a,b,sizeof(char));
    printf("%s",a);
}
