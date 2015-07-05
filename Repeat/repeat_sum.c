#include<stdio.h>
main(){
  int num=0,sum=0;

  do{
    printf("please input 0-100(0:End):");
    scanf("%d",&num);

    if((num<0)||(num>100)){
	printf("input 0-100!!\n");
      }
      else{
      sum+=num;
      }
    
    }while(num);
    printf("sum=%d\n",sum);
}
