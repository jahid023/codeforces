#include<stdio.h>
int main()
{
    int n,i,k,j;
    int count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }

    for(j=0;j<k;j++)
    {
        if(a[j]>0)
        {
            count++;
        }
    }
    if(j!=n)
        {
            if(a[j]>=a[j-1] && a[j]>0)
    {
        count++;
        for(int l=1;l<n-k;l++)
            {
                if(a[j+l]>=a[j-1])
                {
                    count++;
                }
            }

    }
    }

    printf("%d\n",count);
    return 0;

    }
