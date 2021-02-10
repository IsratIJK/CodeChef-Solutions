#include<stdio.h>
int main() {
    int t,i,fact=1,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        for(n=1;n>0;n--){
            fact*=n;
        }
        
    }
}