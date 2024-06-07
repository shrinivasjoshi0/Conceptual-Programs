/*
21
6422288
4
21
21
21
*/

#include<stdio.h>

int main()
{ 
  int no = 21 ;
  int *p = &no ;
  int *a = &no ;
  int **q = &p ;
  int **b = &p ;
  int ***r = &q ;
  int ****x = &r ;
  int *****y = &x ;

  printf("%d\n" , no);
  printf("%d\n" , &no);
  printf("%d\n" , sizeof(no));
  printf("%d\n" , **q);
  printf("%d\n" , *****y);
  printf("%d\n" , **b);

   
  


  return 0 ;
}