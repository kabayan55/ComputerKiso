#include<stdio.h>
main(){
  int num[5];
  int i;

  num[0]=80;
  num[1]-60;
  num[2]=22;
  num[3]=50;
  num[4]=75;
  for(i=0;i<5;i++)
    printf("No.%d=%d\n",i+1,num[i]);
}
