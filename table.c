#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
    printf("multiplication table%d",i);
    for(j=1;j<=10;++j){
        printf("%dx%d=%d\n",i,j,i*j);
    }
}
return 0;
}
