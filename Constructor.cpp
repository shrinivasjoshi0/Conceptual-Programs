#include<iostream>

using namespace std ;

class demo
{
   public:
   int i = 11 ; 
   int j= 111 ; 
  
  demo()
  {
    cout<<"inside default constructor..!\n";
  }

  demo(int a , int b)
  {
    cout<<"inside paramerized constructor..!\n";
    i = a ;
    j = b ;

    cout<<i<<"\n";
    cout<<j<<"\n";
  }

  demo(demo &ref)
  {
    cout<<"Inside copy constructor..!\n" ;
    i = ref.i ;
    j = ref.j ;
    cout<<i<<"\n";
    cout<<j<<"\n";
  }
  

  ~demo()
  {
    cout<<"Inside destructor..!\n" ;
  }
};

int main()
{
  int x = 20 ;
  int y = 30 ;
  demo d1 ;
  demo d2 (x,y);
  demo d3(d2);

  return 0 ;
}