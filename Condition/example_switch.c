#include<stdio.h>
main(){
  int num;

  printf("please input 1 or 2:");
  scanf("%d",&num);
  switch(num){
    case1:
      printf("your input is 1\n");
      break;
    case2:
      printf("your input is 2\n");
      break;
    default
      printf("please input 1 or 2!!\n");
      break;
  }
}
