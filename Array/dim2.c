#include<stdio.h>
#define NA 2
#define NB 5
main(){
  int num[NA][NB]={{80,60,22,50,75},{90,55,68,72,58}};
  int i,j;

  for(i=0;i<NA;i++)
    for(j=0;j<NB;j++)
      printf("num[%d][%d]=%d\n",i,j,num[i][j]);
}
