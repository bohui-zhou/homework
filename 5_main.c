//202611716233
//周博慧
#include <stdio.h>

int main()
{
    float a, b,res;
    char op;
    scanf("%f %c %f", &a, &op, &b);
    
    if(op == '+')
    {
        res = a+b;
        printf("%.2f\n", a + b);
    }
    else if (op == '-')
    {
        res = a-b;
        printf("%.2f\n", a - b);
    }
    else if (op == '*')
    {
        res = a*b;
        printf("%.2f\n", a * b);
    }
    else if (op == '/')
    {
        if(b == 0)
        {
            printf("除数为0\n");
        }
        else
        {
            res =a/b;
            printf("%.2f\n", a / b);
        }
    } 
    else
    {
        printf("运算符非法\n");
    }
                  
    return 0;
}
