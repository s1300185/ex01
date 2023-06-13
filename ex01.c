#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  char name[100];
  int a,b,total;
  printf("What is your name?\n ");
  printf(">");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  srand(time(NULL));
  a =rand()%6+1;
  b =rand()%6+1;
  total=a+b;
  printf("Die 1: %d\n",a);
  printf("Die 2: %d\n",b);
  printf("Total value: %d\n",total);
  if(total>7){
    printf("%s won!\n",name);
  }else{
    printf("%s lost.\n",name);
  }
  return 0;
}
