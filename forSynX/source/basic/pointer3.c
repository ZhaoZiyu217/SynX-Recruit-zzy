#include<stdio.h>
int main()
{
    int arr[3]={10,20,30};
    int *ptr=arr;
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+1));
    printf("%d\n",*ptr+1);
    ptr++;
    printf("%d\n",*ptr);
    return 0;
}