#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int w;
    scanf("%d",&w);
    if(w>=1 && w<=100)
    {

        if(w%2 == 0 && w>2)
        {
            printf("YES");
        }
        else
        {
        printf("NO");
        }
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}
