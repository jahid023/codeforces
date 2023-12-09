#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    int sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c>=2)
        {
            sum++;
        }
    }
    printf("%d\n",sum);

    return 0;
}
