#include<iostream>
#include<stdlib.h>

int main()
{
  int Arr[5] ; // static mem allocation
  int *ptr1 = (int *)malloc(5*sizeof(int)); // dynamic in c
  int *ptr2 = new int[5];
  free (ptr1) ; // c
  delete(ptr2) ; //in c++ ;
    return 0 ;
}
