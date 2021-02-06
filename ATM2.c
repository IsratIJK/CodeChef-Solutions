#include <stdio.h>
int main() {
    int a;
    double b, result;
    scanf("%d %lf", &a, &b);
    if(a%5==0){
        if(a<b && (a+0.5)<=b){
            result=b-(a+0.5);
            printf("%.2lf\n", result);
        }
        else printf("%.2lf\n",b);
    }
    else printf("%.2lf\n",b);


}