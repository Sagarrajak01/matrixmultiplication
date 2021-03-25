#include <stdio.h>
#include<conio.h>
int main()
{
  
  int a[10][10],b[10][10],c[10][10];
  int i,j,k,m,n,p,q;
  clrscr();
  l:
  printf("Input row size of matrix A ");
  scanf("%d",&m);
  printf("\n Input column size of matrix A ");
  scanf("%d",&n);
  printf("\nInput row size of matrix B ");
  scanf("%d",&p);
  printf("\nInput column size of matrix B ");
  scanf("%d",&q);
  if(n!=p){
  goto l;
  }
  printf("\nInput %d elements for Matrix A ",m*n);
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("\nInput %d elements for Matrix B ",p*q);
  for(i=0;i<p;i++){
    for(j=0;j<q;j++){
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<q;j++){
      c[i][j]=0;
      for(k=0;k<n;k++){
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
      }
    }
  }
  printf("\nElements of  Matrix A is\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("\nElements of  Matrix B is\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
  printf("\nAfter multiplication of Matrix A and B \n");
  for(i=0;i<m;i++){
    for(j=0;j<q;j++){
      printf("%d ",c[i][j]);
     }
      printf("\n");
  }
   
    
  return 0;
  getch();
}
