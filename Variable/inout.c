#include<stdio.h>
main(){
  int a,b,c;

  a=10;
  b=20;
  
 

  printf("c=");
  scanf("%d",&c);
  printf("a=%d,b=%d,c=%d\n",a,b,c);

 
  b=c;
  a=b;
  printf("a=%d,b=%d,c=%d\n",a,b,c);
}
