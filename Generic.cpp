#include<iostream>
using namespace std ;

template <class T>

T Addition(T no1 , T no2)
{
  T ans = 0 ;

  ans = no1 + no2 ;
  return ans ;

}


int main()
{
  int iRet = 0 ;
  float fRet = 0.0f ;
  double dRet = 0.0f ;

  iRet = Addition(21 , 51);
  fRet = Addition(51.21 , 11.21);
  dRet = Addition (5142 , 11);

  cout<<"iRet = "<<iRet<<"\n";
  cout<<"fRet = "<<fRet<<"\n";
  cout<<"dRet = "<<dRet<<"\n";
}