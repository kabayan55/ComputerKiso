#include<stdio.h>
#define NUM 5
main(){
  int num[NUM]={80,60,22,50,75};
  int*pa,*pb,tmp;

  
  for(pa=num;pa<&num[NUM];pa++){
    for(pb=pa+1;pb<&num[NUM];pb++){
      if(*pa>*pb){
	tmp=*pa;
	*pa=*pb;
	*pb=tmp;
      }
    }
    printf("%d\n",*pa);
  }
}
