#include<stdio.h>
main(){
  int inum;
  double dnum;

  inum=123;
  printf("inum=%d\n",inum);
  dnum=inum;
  printf("dnum=%f\n",dnum);
  dnum=3.14;
  inum=dnum;
  printf("inum=%d\n",inum);
}
