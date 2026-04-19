#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int end=strlen(str);
    int last=end;
    for(int i=end-1;i>=0;i--){
        if(str[i]=='.'){
            for(int j=i+1;j<last;j++){
                printf("%c",str[j]);
            }
            printf(".");
            last=i;
        }
    }
    for(int i=0;i<last;i++){
        printf("%c",str[i]);
    }
    return 0;
}