#include<stdio.h>
int factorial(int x){
  int n=1,i;
  for(i=1;i<=x;i++){
    n=n*i;
}
    return n;
}

main(){
  int num,ans;
  printf("please input integer.");
  scanf("%d",&num);
  ans=factorial(num);
  printf("%d!=%d\n",num,ans);
}
