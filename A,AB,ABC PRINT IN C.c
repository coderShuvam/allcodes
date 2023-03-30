#include <stdio.h>
int main()
{
    int i, j;
    char ch='A';
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j+=1)
        {
            printf("%c",'A' + j-1);
        }
        printf("\n");
    }
    return 0;
}
