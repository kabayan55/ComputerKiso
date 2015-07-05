#include<stdio.h>
main(){
  int a=1;
  int b=0;

  printf("short int type:%d bytes\n",sizeof(short int));
  printf("int type:%d bytes\n",sizeof(int));
  printf("long int type:%d bytes\n",sizeof(long int));
  printf("float type:%d bytes\n",sizeof(float));
  printf("double type:%d bytes\n",sizeof(double));
  printf("long double type:%d bytes\n",sizeof(long double));

  printf("variable a:%d bytes\n",sizeof(a));
  printf("value a+b:%d bytes\n",sizeof(a+b));
}
