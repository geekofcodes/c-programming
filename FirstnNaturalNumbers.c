#include<stdio.h>
//Printing first N natural numbers 
int main(){

    int n;
    printf("Enter how many numbers you want to print: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d", i);
    }

    return 0;
}