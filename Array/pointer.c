#include<stdio.h>
main(){
  int num;
  int*ptr;

  num=5;
  ptr=&num;
  printf("num:%d\n",num);
  printf("address of num:%p\n",&num);
  printf("pointer ptr:%p\n",ptr);
  printf("value of*ptr.%d\n",*ptr);
}
