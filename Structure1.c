/*
11
51
151
0
*/

#include<stdio.h>

struct demo
{
 int i ;
 float j ;
int k ;
};

int main()
{
 struct demo obj1 ; 
 struct demo obj2 ; 
 
 struct demo *ptr = NULL ; 
 ptr = &obj2 ;

 obj1.i = 11 ;
 obj1.j = 21.11f ;
 obj1.k = 51.1121f;

 ptr -> i = 51 ;
 ptr -> j = 101.51f ;
 ptr -> k = 151.101f ;


printf("%d\n" , obj1.i);
printf("%d\n" , ptr->i);
printf("%d\n" , ptr->k);
printf("%d\n" , obj1.j);

  return 0 ;
}
