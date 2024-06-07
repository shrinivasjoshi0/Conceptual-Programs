

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int Arr[4] ;  // static memory
 float fValue ;  // static memory
 double dArr[4];  // static memory

 int iSize ; 
 int *ptr = NULL ;

 printf("ENter the SIze : ");
 scanf("%d" , &iSize);

 ptr = (int *)malloc(iSize * sizeof(int)); 



  return 0 ;
}