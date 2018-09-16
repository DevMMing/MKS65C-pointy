#include <stdio.h>
unsigned int a =2348348348;
char *p = &a;
int main(void) {/*
  //move through bytes
  printf("num in hex :%x\n",a);
  printf("first byte:%hhx\n second byte:%hhx \n third byte:%hhx \n fourth byte:%hhx\n",*p++,*p++,*p++,*p++);
  */
  /*
  //modifying bytes by one
  printf("Initial value in hex:%x,in dec:%d\n",a,a);
  (*p)++;
  *p++;
  printf("First change: hex:%x,dec:%d\n",a,a);
  (*p)++;
  *p++;
  printf("Second change: hex:%x,dec:%d\n",a,a);
  (*p)++;
  *p++;
  printf("Third change: hex:%x,dec:%d\n",a,a);
  (*p)++;
  *p++;
  printf("Fourth change: hex:%x,dec:%d\n",a,a);
  printf("Final state in hex:%x,in dec:%d",a,a);
  */
  //modifying bytes by 16
  printf("Initial value in hex:%x,in dec:%d\n",a,a);
  *p=(*p)+16;
  *p++;
  printf("First change: hex:%x,dec:%d\n",a,a);
  *p=(*p)+16;
  *p++;
  printf("Second change: hex:%x,dec:%d\n",a,a);
  *p=(*p)+16;
  *p++;
  printf("Third change: hex:%x,dec:%d\n",a,a);
  *p=(*p)+16;
  *p++;
  printf("Fourth change: hex:%x,dec:%d\n",a,a);
  printf("Final state in hex:%x,in dec:%d",a,a);
  return 0;
}
