//This is a program for printing the square root and cube root of a number.

#include<stdio.h>
#include<math.h>
double SquareRoot(int x)
{
    double sq;
    sq=sqrt(x);
    return sq;
}
double CubeRoot(int x)
{
    double cr;
    cr=cbrt(x);
    return cr;
}

int main()
{
    int n;
    printf("Enter a number to find its square root or cube root: ");
    scanf("%d", &n);
    printf("%f\n", SquareRoot(n));
    printf("%f\n", CubeRoot(n));
    return 0;
}