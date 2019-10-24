#include <stdio.h>
int InputArray(int n)
{
    int INPUT;
    scanf("%d",&INPUT);
    while(INPUT>=n || INPUT<0)
    {
        printf("Reinput : ");
        scanf("%d",&INPUT);
    }
    return INPUT;
}

int main()
{
    int n;
    scanf("%d",&n);
    int Set[n],tempINPUT,max;
    printf("The given array is : \n");
    for(int i=0; i<n; i++)
    {
        Set[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        tempINPUT = InputArray(n);
        Set[tempINPUT]++;
    }
    for(int i=0; i<n; i++)
    {
        if(Set[i]>1)
        {
            max=i;
        }
    }
    printf("The maximum repeating number is : %d\n",max);

    return 0;
}