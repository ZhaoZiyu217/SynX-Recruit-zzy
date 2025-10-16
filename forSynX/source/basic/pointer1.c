# include<stdio.h>
int main()
{
    int num=10;
    int *ptr=&num;
    printf("num的值:%d\n",*ptr);
    printf("num的地址:%p\n",ptr);
    *ptr=20;
    printf("修改后num的值:%d\n",num);
    return 0;
}