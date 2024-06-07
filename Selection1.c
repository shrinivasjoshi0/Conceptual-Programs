/*
 Even Odd
ENter the number : 12
Number is Even...!
F:\PPA and LB\PPA Programs\GitHub Programs\C>a
ENter the number : 7
Number is Odd...!

*/

#include<stdio.h>

int main()
{
  int iNo = 0 ;

  printf("ENter the number : ");
  scanf("%d" , &iNo);

  if(iNo%2 == 0)
  {
    printf("Number is Even...!");
  
  }
  else{
    printf("Number is Odd...!");
  }


  return 0 ;
}
