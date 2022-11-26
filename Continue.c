//This is a program to display how continue statement works.

#include <stdio.h>

int main() {
    
    int low,high;
    printf("Enter the numbers: ");
    scanf("%d %d",&low, &high);
    
    int i = low;
    while(i <= high){
        
        if(i%5==0){
            i++;
            continue; //The value is skipped as soon as continue is encountered and it goes to the next iteration of the loop. 
        }
        printf("%d ",i);
        i++;

    }
    
    return 0;
}