#include<stdio.h>
//#include<stdlib.h>

int main ()
{
    int n;
    while(scanf("%d",&n) != EOF){
        int j,k;
        int a[100]={0},e[100]={0},i[100]={0},o[100]={0},u[100]={0};
        char str[n][128];
        for (j=0;j<n;j++){
            scanf("%s",str[j]);
            //gets(str[j]);
            
        }
        for (j=0;j<n;j++){
            k=0;
            while(str[j][k] != '\0' || str[j][k+1] != '\0'){
                switch(str[j][k])//记录元音字母次数
                {
                    case 'a': a[j] += 1;break;
                    case 'e': e[j] += 1;break;
                    case 'i': i[j] += 1;break;
                    case 'o': o[j] += 1;break;
                    case 'u': u[j] += 1;break;
                }
                k++;
            }
        }
        for (j=0;j<n;j++){
            printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n\n",a[j],e[j],i[j],o[j],u[j]);
            //printf("%s/n",str[j]);
        }
            
            
        
         
    }
    return 0;
}
/*
int main (){
    int n;
    while(scanf("%d",&n) != EOF){
        int j,k;
        int a=0,e=0,i=0,o=0,u=0;
        for (j=0;j<n;j++){
            char str[128];
            scanf("%s",str);
            while(str[k]){
                switch(str[k])//记录元音字母次数
                {
                    case 'a': a += 1;break;
                    case 'e': e += 1;break;
                    case 'i': i += 1;break;
                    case 'o': o += 1;break;
                    case 'u': u += 1;break;
                }
                k++;
            }
            printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,i,o,u);
            
        }
    }

    return 0;
}*/