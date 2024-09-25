#include <stdio.h>

int power(int a,int b){
   int ans=1;
   if(b==1) return a;
   ans=a*power(a,b-1);
   return ans; 
}

int main(){
    int a,b;
    printf("Templete a^b\n");
    printf("Enter a and b:");
    scanf("%d\n%d",&a,&b);

    int ans=power(a,b);
    printf("%d^%d is:%d",a,b,ans);

    return 0;

}