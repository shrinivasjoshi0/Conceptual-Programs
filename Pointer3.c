#include<stdio.h>

int main()
{
  int Arr[5] = {11,21,51,101,111};

  int *p = Arr ;

  printf("%d\n" , *p);
  printf("%d\n" , Arr);

    return 0 ;
}