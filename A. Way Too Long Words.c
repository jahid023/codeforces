#include<stdio.h>
#include<string.h>
int main()
{
    int n,l,i;
    char a[200];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%s",&a);
       l = strlen(a);

       if(l>10)
       {
           printf("%c%d%c\n",a[0],(l-2),a[l-1]);
       }
       else
       {
           printf("%s\n",a);
       }

    }

    return 0;

}
