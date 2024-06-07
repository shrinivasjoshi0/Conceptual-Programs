/*
Enter the Size : 5
7934768
11
51

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int iSize = 0 ;
int *ptr = NULL ;

printf("Enter the Size : ");
scanf("%d" , &iSize);

ptr = (int *)calloc(iSize , sizeof(int));
ptr[0] = 11 ;
ptr[1] = 21 ;
ptr[2] = 51 ;

printf("%d\n" , ptr);
printf("%d\n" , ptr[0]);
printf("%d\n" , ptr[2]);

  return 0 ;
}