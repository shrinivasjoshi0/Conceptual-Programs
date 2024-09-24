#include<iostream>

using namespace std ;

class demo
{
 public:

 int i ;
 const int j;
 const int k ;

 demo(int a , int b , int c) : j(b) , k(c)
 {
  i = a;
 // j = b ;
  //k = c ;
 }

};

int main()
{
  demo obj(11,21,51);

  cout<<"value of i"<<obj.i<<"\n";
  cout<<"value of j"<<obj.j<<"\n";
  cout<<"value of k"<<obj.k<<"\n";
  obj.i++;
  cout<<"value of i"<<obj.i<<"\n";
  return 0 ;
}