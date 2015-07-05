#include<stdio.h>
main(){
  char str[6];
  char str2[20];

  str[0]='H';
  str[1]='e';
  str[2]='l';
  str[3]='l';
  str[4]='o';
  str[5]='\0';
  printf("Please input your name:");
  scanf("%s",str2);
  printf("%s,%s\n",str,str2);
}
