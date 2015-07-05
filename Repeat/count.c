#include<stdio.h>
main(){
  int num,sum=0;

  for(num=0;num<=10;num++){
    sum+=num;
    printf("num=%d,sum=%d\n",num,sum);
  }
}
