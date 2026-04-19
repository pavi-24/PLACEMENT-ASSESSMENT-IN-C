#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n,rev=0;
    while(temp!=0){
        int last=temp%10;
        rev=rev*10+last;
        temp/=10;
    }
    if(rev==n){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}