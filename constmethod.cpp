#include<iostream>

using namespace std ;

class demo
{
  public:

  int i ; int j ; int k ;

  demo(int a , int b , int c)
  {
    i = a ;
   j =  b;
   k = c ;
  }
  void fun()
  {
   i++ ;
   j++ ;
   k++ ;
  }

   
  void show()
  {
   cout<<"Value of i"<<i<<"\n";
   cout<<"Value of j"<<j<<"\n";
   cout<<"Value of k"<<k<<"\n";
   
  }


  void gun(int x , const int y)
  {
   int no1 = 10 ;
   const int no2 = 20;
   x++ ;
  // y++ ;
   no1++ ;
   //no2++ ;
   i++ ;
   j++ ;
   k++ ;
  }
  void display()
  {
   cout<<"Value of i"<<i<<"\n";
   cout<<"Value of j"<<j<<"\n";
   cout<<"Value of k"<<k<<"\n";
  // cout<<"Value of no1"<<no1<<"\n";
  }

};
int main()
{
  demo obj(11,21,51);
  obj.fun();
  obj.gun(51,101);
  obj.show();
  obj.display();
  return 0 ;

}