#include <stdio.h>
#include <math.h>
int main()
{
    int n = 0;
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            scanf("%d",&n);
            if (n == 1)
            {
                printf("%d\n",abs(i - 3) + abs(j - 3));
            }
        }
    }
    return 0;
}
