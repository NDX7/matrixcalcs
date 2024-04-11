#include<stdio.h>
void main(){
    int r,c;
    printf("enter no. of rows");
    scanf("%d",&r);
    printf("enter no. of coloumns");
    scanf("%d",&c);
    int a1[r][c];
    int a2[r][c];
    int s[100][100];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter elements into first matrix");
            scanf("%d%d",a1[i][j]);}
        }
         for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter elements into 2nd matrix");
            scanf("%d%d",a2[i][j]);
        }//sum
         for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           s[i][j]=a1[i][j]+a2[i][j];}
           
        }
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("sum is %d",s[i][j]);
            
        }
    }

         }}
