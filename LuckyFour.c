#include<stdio.h>
int main(){
    int n,t,c,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        
        scanf("%d",&n);
        c=0;
        while(n!=0){
            if(n%10==4){
                c++;
            }
            
            n/=10;
        }
         printf("%d\n",c);
    }
}