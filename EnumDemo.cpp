/*
0
1
10
20
21
*/
#include<iostream>
using namespace std ;

int main()
{
  enum days{Sunday , Monday , Tuesday , Wednesday} ;
  cout<<Sunday<<"\n";
  cout<<Monday<<"\n" ;

  enum months {jan=10 , feb=20 , march};
  cout<<jan<<"\n" ;
  cout<<feb<<"\n" ;
  cout<<march<<"\n" ;

  return 0 ;
}