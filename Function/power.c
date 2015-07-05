#include<stdio.h>
int power(int x,int y);
main(){
  int num1, num2,ans;
  printf("please input integer 1:");
  scanf("%d",&num1);
  printf("please input integer 2:");
  scanf("%d",&num2);
  ans=power(num1,num2);
  printf("power number is %d\n",ans);
}
int power(int x,int y)
{
  int i,n;
  for(i=1,n=1;i<=y;i++){
    n*=x;
  }
  return n;
}
