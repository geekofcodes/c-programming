//This is a program to print the sum, diff, etc operations and to display the pow() function from the math library.

#include<stdio.h>
#include<math.h>
int Add(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;
}
int Subtract(int x, int y)
{
    int sub;
    sub = x-y;
    return sub;
}
int Multiply(int x, int y)
{
    int product;
    product=x*y;
    return product;
}
int Division(int x, int y)
{
    int quotient;
    quotient=x/y;
    return quotient;
}
int Modulus(int x, int y)
{
    int rem;
    rem=x%y;
    return rem;
}
int Power(int x, int y)
{
    int power;
    power=pow(x,y);
    return power;
}

int main()
{
    
    int x, y;
    scanf("%d%d",&x,&y);
    printf("%d\n", Add(x,y));
    printf("%d\n", Subtract(x,y));
    printf("%d\n", Multiply(x,y));
    printf("%d\n", Division(x,y));
    printf("%d\n", Modulus(x,y));
    printf("%d\n", Power(x,y));

    return 0;
}