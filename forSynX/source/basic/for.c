#include<stdio.h>
int main()
{
    int n;
    long long m=1;
    printf("请输入一个非负整数：\n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        m*=i;
        
    }
    printf("%d!=%lld",n,m);
    return 0;

}