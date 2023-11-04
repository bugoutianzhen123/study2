
#include<stdio.h>

/*
//对象式宏
#define number 8
//程序中的number 被替换成 8
int main (){
    int i,group[number];
    for ( i = 0; i < number; i++)
    {
        group[i]=i;
        printf("%d ",group[i]);
    }
    return 0;
}*/

/*int main(){
    int block[5],i,enter[5];//
    int a[5] = {1,2,3,4,5,};
    for (i =0;i<5;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    
   
puts("-------------------------------");
    for(i=0;i<5;i++){
        printf("enter[%d]:",i);
        scanf("%d",&enter[i]);
    }

    printf("\n");
    for (i =0;i<5;i++){
        printf("enter[%d] = %d\n",i,enter[i]);
    }
    printf("\n");
    
    //求min，max
    int max,min;//int min=max=0;是错的，得int min
    max=min=enter[0];//相当于max=（min=enter[0]）
    for (i=1;i<5;i++){
        if(enter[i]>max) max=enter[i];
        if(enter[i]<min) min=enter[i];
    }
    printf("max:%d,nim:%d",max,min);

    //倒序排序
    for (i=0;i<2;i++){//比上次我用的倒叙排列更简便
        int num = enter[i];
        enter[i]=enter[4-i];
        enter[4-i]=num;
    }
    for (i =0;i<5;i++){
        printf("enter[%d] = %d\n",i,enter[i]);
    }

    int b[5] = {1,2};//b[5]={1,2,0,0,0}
    
//多维数组
//int z[5][5];
    

    return 0;

}*/
//5.9
#define NUMBER 80
int main (){
    int i,j,k,num,tensu[NUMBER],bunpu[11]={0};

    //避免测试是反复输入数据
    tensu[0]=17;tensu[1]=38;tensu[2]=100;tensu[3]=95;tensu[4]=23;tensu[5]=62;
    tensu[6]=77;tensu[7]=45;tensu[8]=69;tensu[9]=81;tensu[10]=83;tensu[11]=51;
    tensu[12]=42;tensu[13]=36;tensu[14]=60;
    for (i=0;i<15;i++){
        bunpu[tensu[i]/10]++;
    }
    puts("---分布图---");
/*
//顺序
    printf("      100:");//100
    for(j=0;j<bunpu[10];j++){
        putchar('*');
    }
    putchar('\n');

    for (i=9;i>=0;i--)//<100
    {
        printf("%3d - %3d:",i*10,i*10+9);
        for (j=0;j<bunpu[i];j++){
            putchar('*');
        }
        putchar('\n');     
    }
*/
//倒序
/*
   for (i=0;i<10;i++)//<100
   {
    printf("%3d - %3d:",i*10,i*10+9);
    for(j=0;j<bunpu[i];j++){
        putchar('*');
    }
    putchar('\n');
   }

   printf("      100:");//100
   for(j=0;j<bunpu[10];j++){
        putchar('*');
    }
*/
     int wild[11]={0};
    //for (int l=0;l<11;l++)printf("%d ",bunpu[l]);
       
   
    for(j=3;j>=1;j--){
      for(i=0;i<11;i++){
          if(bunpu[i]>=j)printf("  *  ");//wild[i]=1;
          if(bunpu[i]<j)printf("     ");//wild[i]=0;
      }
      
      /*for(k=0;k<11;k++){
          
          if(wild[k]=1)printf(" 1 ");
          if(wild[k]=0)printf("   ");
      }*/
      putchar('\n');
    }
    puts("------------------------------------------------------");
    for(i=0;i<11;i++){
        printf(" %3d ",i*10);
    }
    return 0;

}