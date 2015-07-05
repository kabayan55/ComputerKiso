#include<stdio.h>
main(){
  
  int num1=10,num2=20;
  int *ptr1,*ptr2,tmp;
  

  ptr1=&num1;
  ptr2=&num2;
  printf("num1=%d,num2=%d\n",*ptr1,*ptr2);
  tmp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=tmp;
  printf("num1=%d,num2=%d\n",*ptr1,*ptr2);
}
