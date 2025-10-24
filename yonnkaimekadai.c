#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("short maximum:%Le\n",LDBL_MAX);
    printf("short minimum:%Le\n",LDBL_MIN);
    printf("short precision:%Ld\n",LDBL_DIG);
    
    return 0;
}