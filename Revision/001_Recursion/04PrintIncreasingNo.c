//////////using two parameters///////////

// #include <stdio.h>

// void print(int n,int t){
//     if(n>t) return;
//     printf("%d\n",n);
//     return print(n+1,t);
// }

// int main(){
//     int n=1,t;
//     printf("Want to print till:");
//     scanf("%d",&t);
//     print(n,t);
//     return 0;
// }


/////////////using 1 parameter///////////

#include <stdio.h>

void print(int n){
    if(n==0) return;
    print(n-1);
    printf("%d\n",n);
    return;
}

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    print(n);
    return 0;
}