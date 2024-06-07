// Dynamic memory allocation
/*
Enter number of elements : 4
Enter the Elements :
11
21
51
101
You have Entered these Elements : 11    21      51      101
*/




#include<stdio.h>

int main()
{
 int size = 0 ;
 int *p = NULL;
 int cnt = 0 ;

 printf("Enter number of elements : ");
 scanf("%d" , &size);
 
 p = (int *)malloc(size * sizeof(int));

 printf("Enter the Elements : ");
 for(cnt=0 ; cnt<size ; cnt++)
 {
  scanf("%d" , &p[cnt]);
 }
 printf("You have Entered these Elements : ");

 for(cnt=0 ; cnt<size ; cnt++)
 {
  printf("%d\t" , p[cnt]);
 }

 free(p);

  return 0 ;
}

