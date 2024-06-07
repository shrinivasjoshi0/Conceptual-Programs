/*
Size of char is : 1
Size of int is : 4
Size of float is : 4
Size of double is : 8
Size of short is : 2
Size of long int is : 4
*/

#include<stdio.h>

int main()
{
  char ch = 'A' ;
  int i = 11 ;
  float f = 21.11f ;
  double d = 101.10214f ;
  short b = 21 ; 
  long int c = 111 ;

  printf("Size of char is : %d\n" , sizeof(ch));
  printf("Size of int is : %d\n" , sizeof(i));
  printf("Size of float is : %d\n" , sizeof(f));
  printf("Size of double is : %d\n" , sizeof(d));
  printf("Size of short is : %d\n" , sizeof(b));
  printf("Size of long int is : %d\n" , sizeof(c));



  return 0 ;
}