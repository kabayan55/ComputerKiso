#include<stdio.h>
main(){
  int res;
  printf("plese input 1-9:");
  scanf("%d",&res);
  if((res<=0)||(res>=10)){
    printf("input1-9!!\n");
  }
  else{
    if(((res%2)==0)&&((res%3)==0)){
      printf("your number is 6\n");
    }
    else if((res%2)==0){
      printf("your number is 2,4,or8\n");
    }
    
    if((res%2)!=0){
      if((res%3)==0){
	printf("your number is 3 or 9\n");
      }
      else if((res%5)==0){
	printf("your number is5\n");
      }
    
    else{
      printf("your number is 1 or 7\n");
    }
    }
  }
}
