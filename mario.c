#include <stdio.h>
int main()
{
    printf("Pattern 1\n");
    for(int i=0;i<3;i++)
    {
        printf("?");
    }
    int k=4;
    printf("\nPattern 2\n");
    for(int i=1;i<=k;i++)
    {
        // for (int j = 4; j > i; j--)
        // {
        //     printf(" ");
        // }
        // for (int j = 1; j <=i; j++)
        // {
        //     printf("#");
        // }
        // printf(" ");
        //  for (int j = 1; j <=i; j++)
        // {
        //     printf("#");
        // }
        // for (int j = 4; j > i; j--)
        // {
        //     printf(" ");
        // }
        // printf("\n");
        for (int j = 1; j <= (2*k+1); j++)
        {
            if(j != 5 )
            {
                if(j <= 4-i || j> (2*k-3+i) )
                {
                    printf(" ");
                }
                else
                printf("#");
            }
            else
                printf(" ");

        }
        printf("\n");
        
    }

}