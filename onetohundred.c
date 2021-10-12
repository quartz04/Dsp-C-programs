#include <stdio.h>
int main()
{
    int i = 0;
    int j;
    for(i=0; i<=9; i++)
    {
        printf("\n");
        for(j=1; j<=9; j++)
        {
            printf("%d\t", i);
            printf("%d", j);
        }
        printf("\t");
    }
    
    return 0;
}