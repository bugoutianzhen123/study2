#include<stdio.h>
#include<math.h>

int main (){
    int n;scanf("%d",&n);
    int a,b,i;
    double max=0;
    for (i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        max = sqrt(a*a + b*b)>max ? sqrt(a*a + b*b):max;
    }

    printf("%.2f",max);

    return 0;
}