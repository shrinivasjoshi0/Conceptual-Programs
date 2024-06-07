/*
Value of i : 11
 Value of i : 12
 Value of i : 13
*/


#include<stdio.h>

void fun()
{

 static int i = 10 ;
  i++ ;
  printf("Value of i : %d\n " , i);


}

int main()
{
  
 fun();
 fun();
 fun();

    return 0 ;
}

