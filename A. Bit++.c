#include <stdio.h>
int main()
 {
    int n, count=0, i, j;
    char a[4];

    scanf("%d", &n);

    gets(a);
    for(i=0 ; i<n; i++ ) {
        gets(a);
        for(j=0 ; j<3 ; j++) {
            if(a[j]== '+') {
                count++;
                break;
            }
            else if(a[j]== '-') {
                count--;
                break;
            }
        }

    }


    printf("%d", count);

    return 0;
}
