#include<stdio.h>

int length(const char s[])//求字符串长度
{
    int len = 0;
    while(s[len])len++;
    return len;
}


int main ()
{
    int i,k,z=0,o=0,j=0,len;
    char str[100];
    while(1){
        scanf("%s",str);
        if (str[0] == 'E') break;
        len=length(str);
        for (i=0;i<len;i++)
        {
            switch(str[i])//记录字母个数
            {
                case 'Z': z++; break;
                case 'O': o++; break;
                case 'J': j++; break;
            }
        }
        //printf("%d %d %d",z,o,j);//检查
        for(i=0;;i++)
        {
            if(z>0){putchar('Z');z--;}
            if(o>0){putchar('O');o--;}
            if(j>0){putchar('J');j--;}
            if((z+o+j)==0){putchar('\n');break;}
        }
    }
    return 0;
}