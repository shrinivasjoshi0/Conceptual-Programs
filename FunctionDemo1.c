// Addition , Substraction , Multiplication , Division using functions


#include<stdio.h>

float Addition(int iNo1 , int iNo2)
{
  float result = 0 ;

  result = iNo1 + iNo2 ;
  return result ;
}

float Substraction(int iNo1 , int iNo2)
{
  float result = 0 ;

  return(iNo1 - iNo2) ;
  
}

float Multiplication(int iNo1 , int iNo2)
{
  float result = 0 ;

  return(iNo1 * iNo2) ;
  
}

float Division(int iNo1 , int iNo2)
{
  float result = 0 ;

  return(iNo1 / iNo2) ;
  
}


int main()
{
 float iNo1 = 0 ;
 float iNo2 = 0 ;

  
  printf("Enter 2 numbers : ");
  scanf("%f%f" , &iNo1,&iNo2);

  float add = Addition(iNo1,iNo2);
  float sub = Substraction(iNo1,iNo2);
  float mul = Multiplication(iNo1,iNo2);
  float div = Division(iNo1,iNo2);

  printf("Addition is : %f\n" , add);
  printf("Substraction is : %f\n" , sub);
  printf("Multiplication is : %f\n" , mul);
  printf("Division is : %f\n" , div);

  return 0 ;
}


