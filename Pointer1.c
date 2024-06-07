/*
11
6422300
4
3854336
6422296
0
4
*/

#include<stdio.h>

int main()
{ 
  int no = 11 ;
  int *p ;
  
  printf("%d\n" , no);
  printf("%d\n" , &no);
  printf("%d\n" , sizeof(no));
  printf("%d\n" , p);
  printf("%d\n" , &p);
  printf("%d\n" , *p);
  printf("%d\n" , sizeof(p));



  return 0 ;
}