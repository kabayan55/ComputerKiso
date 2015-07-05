#include<stdio.h>
int min(int x,int y){
  if(x<y)
    return x;
  else
    return y;
}
main(){
  int num1,num2,ans;
  printf("please input integer 1:");
  scanf("%d",&num1);
  printf("please input integer 2:");
  scanf("%d",&num2);
  ans=min(num1,num2);
  printf("minimum number is %d\n",ans);
}



