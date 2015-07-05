#include<stdio.h>
main(){
  int i,j;

  for(i=1;i<=100;i++){
    //printf("outside loop %d\n",i);
    for(j=2;j<=i;j++){
      //printf("inside loop %d\n",j);
      //printf("i=%d,j=%d\n",i,j);
      if(i==j)
	printf("%d\n",i);
      if(i%j==0)
	break;
    }
  }
}
     
