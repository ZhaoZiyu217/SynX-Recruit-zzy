#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("请输入5个同学的成绩：\n请输入第1个同学的成绩：\n");
    scanf("%d",&a);
    printf("请输入第2个同学的成绩：\n");
    scanf("%d",&b);
     printf("请输入第3个同学的成绩：\n");
    scanf("%d",&c);
     printf("请输入第4个同学的成绩：\n");
    scanf("%d",&d);
     printf("请输入第5个同学的成绩：\n");
    scanf("%d",&e);
    f=a+b+c+d+e;
    g=f/5;
    printf("5个学生的平均分是：%d",g);
    return 0;
}