#include<stdio.h>
#define NUM 5
main(){
  int num[NUM]={80,60,22,50,75};
  int i;

  for(i=0;i<NUM;i++)
    printf("num[%d]:%d,address:%p\n",
	   i,num[i],&num[i]);
}
