//This is a program for understanding break statement.

#include  <stdio.h>

int main() {
    
    int low,high;
    printf("Enter the numbers: ");
    scanf("%d %d",&low, &high);
    
    int i = low;
    while(i<=high)
    {
        printf("%d ",i);
        
        if(i%13==0) //As soon as 13 is encountered the loop breaks
            break;
        i++;
    }
    
    return 0;
}