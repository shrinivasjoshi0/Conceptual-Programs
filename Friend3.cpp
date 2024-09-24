#include<iostream>
using namespace std ;

class demo
{
 public : int i ;
 private : int j ;
 protected : int k ;

public:

demo()
{
  i = 11 ;
  j = 21 ;
  k = 51 ;
}
friend void hello :: display() ; 
};

class hello
{
  public :
  
  void display()
  {
    demo obj ;
    cout<<"Jay Shri Ram...\n" ;
    cout<<"Value of i"<<obj.i<<"\n";
   // cout<<"Value of j"<<obj.j<<"\n";
    //cout<<"Value of k"<<obj.k<<"\n";
  }

};

int main()
{
  hello hobj ; 
  hobj.display();
  return 0 ;
}