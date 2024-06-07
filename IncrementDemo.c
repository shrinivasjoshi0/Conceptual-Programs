/*
in iNo2 : 11
in iNo1 : 11
in iNo2 : 11
in iNo1 : 12
*/

#include<stdio.h>


int main()
{
 int iNo1 = 10 ;
 int iNo2 = 0 ;

 iNo2 = ++iNo1 ; // Pre-increment
 
 printf("in iNo2 : %d\n" , iNo2);
 printf("in iNo1 : %d\n" , iNo1);

iNo2 = iNo1++ ; // post increment

 printf("in iNo2 : %d\n" , iNo2);
 printf("in iNo1 : %d\n" , iNo1);

  return 0 ;
}