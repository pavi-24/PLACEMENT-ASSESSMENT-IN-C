#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int sq=n*n;
    while(sq!=0){
        int last=sq%10;
        sum+=last;
        sq/=10;
    }
    if(sum==n){
        printf("Neon number");
    }
    else{
        printf("Not a Neon number");
    }
    return 0;
}