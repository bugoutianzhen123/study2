#include <stdio.h>

int main() {
    int n;
    //char str;   
    while(scanf("%d", &n)!= EOF) 
    {   
        if (n == 0)break;
        int times = 0,i=0;
        char str[1000];
        scanf("%s",str);
        while(str[i]){
            if('0' <= str[i] && str[i] <= '9') times++;
            i++;
        }
        printf("%d\n", times);
        n--;
    }
    return 0;
}