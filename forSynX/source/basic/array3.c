#include <stdio.h>
int main() 
{
    int count[101]={0};
    int n;
    float score, sum = 0, average;
    printf("请输入学生人数：");
    scanf("%d", &n);
    printf("请输入%d个学生的成绩：\n", n);
    for (int i = 1; i <= n; i++) {
        printf("请输入第%d个学生的成绩：", i);
        scanf("%f", &score);
        sum += score;
    }
    average = sum / n;
    printf("%d个学生的平均分是：%.2f\n", n, average);
   
   
    printf("分数分布统计:\n");
    printf("分数\t人数\n");
    printf("==========\n");
    for(int i=0;i<=101;i++)
    {
        if(count[i]>0)
        printf("%d\t%d\n",i,count[i]);
    }

    return 0;
}