#include<stdio.h>
#define NUM 5
main(){
  int num[NUM]={80,60,22,50,75};
  int i,j,tmp;

  for(i=0;i<NUM-1;i++){
    for(j=i+1;j<=NUM-1;j++){
      if(num[i]>num[j]){
	tmp=num[j];
	num[j]=num[i];
	num[i]=tmp;
      }
    }
  }
  for(i=0;i<NUM;i++)
    printf("No.%d=%d\n",i+1,num[i]);
}
