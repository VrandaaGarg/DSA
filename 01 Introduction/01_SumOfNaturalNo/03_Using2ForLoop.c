#include <stdio.h>

int main(){
    int n,sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum++;
        }
    }
    printf("Sum of natural no. till %d is %d",n,sum);
    return 0;

} 