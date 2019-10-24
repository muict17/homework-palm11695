#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int Set[n],Counter[n];
    printf("The given array is : \n");
    for(int i=0; i<n; i++)
    {
        Counter[i]=0;
        scanf("%d",&Set[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j && Set[i]==Set[j])
            {
                Counter[i]++;
            }
        }
    }
    int major=0,PrintOut;
    for(int i=0; i<n; i++)
    {
        if(major<Counter[i] && Counter[i]!=0)
        {
            major = Counter[i];
            PrintOut = i;
        }
    }
    printf("The maximum repeating number is : %d\n",Set[PrintOut]);

    return 0;
}