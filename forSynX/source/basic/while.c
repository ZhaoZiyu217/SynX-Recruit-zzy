#include <stdio.h>

int main()
 {
    int n, count = 0;
    long long a = 0, b = 1;
    printf("请输入打印项数:");
    scanf("%d", &n);
    printf("斐波那契数列前%d项为:", n);
    while (count < n)
     {
        printf("%lld ", a);
        long long next = a + b;
        a = b;
        b = next;
        count++;
    }
    
    printf("\n");
    return 0;
}