#include "rand_work_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main(void)
{
    srand((unsigned)time(NULL) ^ GetTickCount());
    printf("%f",rand_with_in_f(10,1000));
    

}