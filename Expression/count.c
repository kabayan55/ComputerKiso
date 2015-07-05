#include<stdio.h>
main(){
  int num=0;
  int sum=0;

  num++;
  sum+=num;
  printf("count step %d:sum=%d\n",num,sum);

  num++;
  sum+=num;
  printf("count step %d:sum=%d\n",num,sum);

  num++;
  sum+=num;
  printf("count step %d:sum=%d\n",num,sum);
}
