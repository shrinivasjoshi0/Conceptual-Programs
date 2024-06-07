/*
Enter your name : Shrinivas Rajkumar Joshi
Your name is : Shrinivas Rajkumar Joshi

Length of Name is : 24
*/
int CalculateLength(char *str)
{
  int iCnt = 0 ;

  while(*str != '\0')
  {
    iCnt = iCnt + 1 ;
    str = str + 1 ;
  }
  return iCnt ;
}


#include<stdio.h>

int main()
{
 char arr[50] ;

 printf("Enter your name : ");
 scanf("%[^'\n']s" , arr);

 printf("Your name is : %s\n\n" , arr);
 int Length = CalculateLength(arr);



 printf("Length of Name is : %d\n" , Length);

return 0 ;
}