#include<stdio.h>



void fun_Value(int no)
{
  no++ ;
}

void fun_Add(int *ptr)
{
  (*ptr)++ ;
}


void fun_Ref(int &ref)
{
  ref++ ;
}



int main()
{

  int i = 10 ;
  int j = 10 ;
  int k = 10 ;

  fun_Value(i);
  fun_Add(&j);
  fun_Ref(k);

  printf("Call by value : Value of i = %d\n" , i);
  printf("Call by address : Value of j = %d\n" , j);
  printf("Call by reference : Value of k = %d\n" , k);

return 0 ;
}