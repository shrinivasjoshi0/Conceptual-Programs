#include<iostream>
using namespace std ;

class Demo 
{
  public : int i  ;
  private : int j ;
  protected : int k  ;

  public :
  Demo() 
  {
    i = 11 ;
    j = 21 ;
    k = 51 ;
  }
   friend void display();

};

void display()
{
  Demo obj ;
  cout<<"Jay Shri Krishna..\n" ;
  cout<<"Value of i : "<<obj.i<<"\n";
  cout<<"Value of j : "<<obj.j<<"\n";
  cout<<"Value of k : "<<obj.k<<"\n";
}

int main()
{
  display();
  return 0 ;
}