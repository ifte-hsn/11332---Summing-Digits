#include <stdio.h>


int sum(int n);
int main()
{
    int n;

    while(scanf("%d",&n)==1 && n != 0) {

        while(n>=10) {
            n = sum(n);
        }
        printf("%d\n",n);
    }
    return 0;
}

int sum(int n) {
    int sum = 0;
    while(n>0) {
        sum += n%10;
        n = n/10;
    }

    return sum;
}
