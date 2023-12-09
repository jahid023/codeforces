#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

    long long int result = (ceil(a/c)*ceil(b/c));


    printf("%lld\n",result);

    return 0;
}
