/* Using Constant

 Enter the size of radius : 4
50.240002

*/


#include<stdio.h>

int main()
{
  int radius = 0;
  const float PI = 3.14f ;
  
  printf("Enter the size of radius : ");
  scanf("%d" , &radius);
  float Answer = PI * radius * radius ;

  printf("%f" , Answer);
 


  return 0 ;
}