#include<stdio.h>
main(){

  char str1[100];
  char str2[100];
  int i;

  printf("please input word1:");
  sxanf("%s",str1);
  printf("please input word2:");
  sxanf("%s",str2);

  for(i=0;str1[i]!='\0';i++){
    if(str1[i]!=str2[i]){
      printf("they are not the same\n");
      break;
    }
  }
}
