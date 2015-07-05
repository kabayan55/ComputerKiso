#include<stdio.h>
main(){
  int res;
  printf("please input integer:");
  scanf("%d",&res);
  if((res%2)!=0){
    printf("your input is odd number\n");
      if((res%3)==0)
	printf("can be divided by 3\n");
      else if ((res%5)==0)
	printf("can be divided by 5\n");
      else
	printf("cannot be divided by 3 nor 5\n");
  }
  else
    printf("your input is even number\n");
}
