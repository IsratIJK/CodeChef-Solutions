#include<stdio.h>
int main() {
    int t,a,b,i,r;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d%d",&a,&b);
        r=a%b;
        printf("%d\n",r);
    }
    return 0;
    

}