#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int last=n%10;
    n/=10;
    while(n!=0){
        int a=n%10;
        if(a>last){
            printf("No");
            return  0;
        }
        last=a;
        n/=10;
    }
    printf("Yes");
    return 0;
}