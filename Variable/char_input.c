#include<stdio.h>
main(){
  double num;
  char ch;

  printf("please input character:");
  ch=getchar();
  printf("character is %c\n",ch);

  printf("please input real number:");
  scanf("%lf",&num);
  printf("number is %f\n",num);
}
