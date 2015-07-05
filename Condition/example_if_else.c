#include<stdio.h>
main(){
  int res;

  printf("please input integer:");
  scanf("%d",&res);
  if((res%2)==0){
    printf("your input is even number\n");
    printf("first part is executed\n");
  }
  else{
    printf("your input is odd number\n");
    printf("your input is %d\n",res);
  }
}
