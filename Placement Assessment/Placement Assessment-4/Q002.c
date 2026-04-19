#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0){
        sum=sum+n%10;
        n/=10;
    }
    int g=sum,rev=0;
    while(g!=0){
        rev=rev*10+g%10;
        g/=10;
    }
    if(sum==rev){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}