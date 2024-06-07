/*
Enter the number : 2
Jay Shri Krishna
Jay Shri Krishna
*/

#include<stdio.h>


int main()
{
  int num = 0 ;
  int i = 0 ;

  printf("Enter the number : ");
 scanf ("%d" , &num);
  
  if(num<=0)
  {
    num = 1 ;
  }


  for(i=0 ; i<num ; i++)
   {
    printf("Jay Shri Krishna\n");
   }
  return 0 ;
}