#include <stdio.h>
int main(void)
{
    int n = 7,mid;
    char str[7] = "PROGRAM";
    mid = n / 2;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = mid; j <= (mid + i) ; j++)
        {
            printf("%c ",str[j % n]);
        }
        printf("\n");
    }
}