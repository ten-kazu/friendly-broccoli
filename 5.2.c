#include <stdio.h>

int main()
{
    
    int k;
    printf("トイレ何回いった？");
    scanf("%d", &k);
    
    if (k >= 5)
    {
        printf("oo");
    }
    
    else if (k >= 3)
    {
        printf("ああ");
    }

    else
    {
        printf("バカたれい");
    }

    return 0;
}