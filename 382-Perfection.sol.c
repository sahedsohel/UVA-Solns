#include <stdio.h>

int num[300] ,i, j, k, count, limit, sum_of_divi=0;
int main()
{
    count=0;

    while((scanf(" %d", &num[count]))==1)
    {
        if(num[count]==0)
            break;
        count++;
    }
    printf("PERFECTION OUTPUT\n");

    for(i=0; i<count; i++)
    {
        limit=num[i]/2;
        for(k=1, sum_of_divi=0; k<=limit; k++)
        {
            if(num[i]%k==0)
            {
                    sum_of_divi+=k;
            }
        }
        if(sum_of_divi==num[i])
            printf("%5d  PERFECT\n", num[i]);
        else if(sum_of_divi>num[i])
            printf("%5d  ABUNDANT\n",num[i]);
        else if(sum_of_divi<num[i])
            printf("%5d  DEFICIENT\n",num[i]);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
