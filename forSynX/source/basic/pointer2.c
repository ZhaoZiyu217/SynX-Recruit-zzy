#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    for (int i=0;i<5;i++)
    {
        printf("arr[%d]=%d",i,*ptr);
        printf("，地址：%p\n",ptr);
        ptr++;
    }
    return 0;

}