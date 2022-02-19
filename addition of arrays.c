#include<stdio.h>

int main()
{
int i,j;
int r1,r2,c1,c2;
float mat1[10][10],mat2[10][10],matre[10][10];
printf("r1:");
scanf("%d",&r1);
printf("c1:");
scanf("%d",&c1);
printf("r2 c2");
scanf("%d : %d :",&r2,&c2);
printf("enter");
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
scanf("%f",&mat1[i][j]);
}
}
printf("enter 2");
for(i=0;i<r2;i++){
for(j=0;j<c2;j++){
scanf("%f",&mat2[i][j]);
}
}
if((r1==r2)&&(c1==c2)){
for(i=0;i<r1;i++){
for(j=0;j<c1;j++){
matre[i][j]=mat1[i][j]+mat2[i][j];
printf("result=%f",matre[i][j]);
printf("\n");
  }

}  
    
  }  
    
    
}