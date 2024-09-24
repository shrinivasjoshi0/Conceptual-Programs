#include<iostream>

using namespace std ;

class demo
{
  public : int x , y ;

  demo()
  {

    cout<<"Inside Demo Constructor...\n";
    x = 10 ;
    y = 20 ;
  }
  ~demo()
  {
    cout<<"Inside Demo Destructor..\n.";
  }
  void fun()
  {
    cout<<"Inside fun of Demo ...\n";
  }
};

class hello : public demo
{
  public:
  int a , b , c ;
   hello()
   {
    cout<<"Inside Hello constructor...\n";
    a= 30 ;
    b= 40 ;
    c = 50 ;
   }
   ~hello()
   {
    cout<<"inside hello destructor\n" ;
   }

   void gun()
   {
    cout<<"inside gun of hello\n";
   }
};

class smrutigandh : public hello
{
  public :
  int p ;

  smrutigandh()
  {
    cout<<"inside smruti constructor..\n";
    p = 51 ;
  }
  ~smrutigandh()
  {
    cout<<"inside smruti desstructor..\n";
  }

  void sun()
  {
    cout<<"inside sun of smruti ..\n";
  }
};

int  main()
{
  smrutigandh sobj ;
  cout<<sizeof(sobj)<<"\n"; // 24
  cout<<sobj.x<<"\n"; // 10
  cout<<sobj.y<<"\n"; // 20
  cout<<sobj.a<<"\n"; // 30
  cout<<sobj.b<<"\n";// 40
  cout<<sobj.c<<"\n"; // 50
  cout<<sobj.p<<"\n"; // 51

  sobj.fun();
  sobj.gun();
  sobj.sun();

return 0 ;
}