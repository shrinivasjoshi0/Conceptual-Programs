#include<iostream>
using namespace std ;

class Demo
{
  int i ;
  public :
  int j ;
  private :
  int k ;
  protected :
  int A ;

  public:
  Demo()
  {
    i = 10 ;
    j = 20 ;
    k = 30 ;
    A = 40 ;
  }

  void display()
  {
    cout<<"Value of i :"<<i<<"\n";
    cout<<"Value of j :"<<j<<"\n";
    cout<<"Value of k :"<<k<<"\n";
    cout<<"Value of A :"<<A<<"\n";
  }

};

class Hello : public Demo
{
  public:
  void hellodisplay()
  {
     // cout<<"Value of i :"<<i<<"\n";
    cout<<"Value of j :"<<j<<"\n";
    //cout<<"Value of k :"<<k<<"\n";
    cout<<"Value of A :"<<A<<"\n";
  }
  

};

int main()
{ 
  Hello hobj ;
  hobj.hellodisplay();
  hobj.display();
return 0 ;


}