#include<iostream>
using namespace std ;


class demo
{
   public : int i ;

   private : int j ;

    protected : int k ; 

    public :

    demo()
    {
      i = 10 ;
      j = 20 ;
      k = 30 ;
    }
};

void display()
{
  demo obj ;
  cout<<"Value of i : "<<obj.i<<"\n" ;
  cout<<"Value of j : "<<obj.j<<"\n" ;
  cout<<"Value of k : "<<obj.k<<"\n" ;

}


int main()
{
 display();
  return 0 ;
}


#include<iostream>
using namespace std ;

class demo
{
public : int i
}