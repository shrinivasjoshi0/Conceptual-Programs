/*
6422284
6422284
6422288
6422304
11
101

*/



#include<stdio.h>

int main()
{
  int Arr[5] = {11,21,51,101,121};

  printf("%d\n" , Arr); // Address of 1st Element
  printf("%d\n" , &Arr); // Base Address of Array
  printf("%d\n" , Arr+1);
  printf("%d\n" , &Arr+1); 
  printf("%d\n" , Arr[0]);
  printf("%d\n" , Arr[3]);

  return 0 ;
}