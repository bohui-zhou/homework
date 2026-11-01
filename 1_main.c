//202611716233
//周博慧
#include <stdio.h>

int main(void)
{
	float c,f;
	printf("请输入摄氏温度 ");
    scanf("%f", &c);
	f = c* 9.0/ 5 + 32;
    printf(" %.1f\n",f);
    return 0;
 }
