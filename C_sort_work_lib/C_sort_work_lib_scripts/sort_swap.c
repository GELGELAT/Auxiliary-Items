#include "sort_swap.h"
#include <string.h>

void swap_two_any(void* a, void*b,size_t size)
{
    void* temp = a;
    memcpy(a,b,size);
    memcpy(b,temp,size);

}