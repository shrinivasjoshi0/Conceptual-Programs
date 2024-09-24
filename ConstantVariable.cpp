#include<iostream>

using namespace std ;

int main()
{
  int i = 10 ;
  const int j = 11 ; 
  const int k ; // Not allowed

  i++ ; // Allowed
  j++ ;  // NA

  return 0 ;
}