#include<stdio.h>
int main() {
    int n,k,i,a,b=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a%k==0){
            b++;
           
        }
       
    }
     printf("%d\n",b);
     return 0;
    
}