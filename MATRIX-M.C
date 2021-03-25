#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10];
int i,j,k,ra,ca,rb,cb;
printf("Input rows for matrix A =");
scanf("%d",&ra);
printf("Input columns for matrix A =");
scanf("%d",&ca);
printf("Input rows for matrix B =");
scanf("%d",&rb);
printf("Input columns for matrix B =");
scanf("%d",&cb);
/* printf("\n\t Matrix A \n");
printf("------------------");
for(i=0;i<ra;i++)
{
for(j= 0;j<ca;j++)
{
printf */
if(ca==rb)
{
printf("Input %d elements for matrix A",ra*ca);
for (i=0;i<ra;i++)
{
for(j=0;j<ca;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Input %d elements for matrix B",rb*cb);
for(i=0;i<rb;i++)
{
for(j=0;j<cb;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<ra;i++)
{
for(j=0;j<ca;j++)
{
c[i][j]=0;
for(k=0;k<ra*cb;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("After multiplication of matrix are \n");
for(i=0;i<ra;i++)
{
for(j=0;j<cb;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
}
else
{
printf("Invalid Rows and columns");
}
return 0;
}
