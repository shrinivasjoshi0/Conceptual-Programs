// Array
/*
Size of array is : 32
in cArr : c
in iArr : 6422284
in fArr : -536870912
in dArr : 6422240
*/

#include<stdio.h>

int main()
{
 char cArr[4] = {'a','B','c','D'};
 int  iArr[4] = {11,21,51,101};
 float fArr[4] = {11.11f , 21.11f , 51.21f , 101.51f};
 double dArr[4] = {111.101 , 121.111 , 151.121 , 201.151};

printf("Size of array is : %d\n" ,sizeof(dArr));
printf("in cArr : %c\n" , cArr[2]);
printf("in iArr : %d\n" , iArr[0]);
printf("in fArr : %d\n" , fArr[3]);
printf("in dArr : %d\n" , dArr[1]);




  return 0 ;
}


