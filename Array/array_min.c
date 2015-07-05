#include<stdio.h>
#define NUM 5
main(){
  int num[NUM]={80,60,22,50,75};
  int i,min=100,min_i=0;


  for(i=0;i<NUM;i++){
    if(num[i]<min){
      min=num[i];
      min_i=i;
    }
  }
  printf("Minimum number is:num[%d]=%d\n",min_i,min);
}
