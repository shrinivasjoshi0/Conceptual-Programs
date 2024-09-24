#include<iostream>

using namespace std ;

void Display(int i , const int j)
{
  int a = 10 ;
  const float b = 3.14f;
  i++ ;
 // j++ ;
  a++ ;
  //b++ ;
cout<<"Value of i :"<<i<<"\n";
cout<<"Value of i :"<<j<<"\n";
cout<<"Value of i :"<<a<<"\n";
cout<<"Value of i :"<<b<<"\n";
};

int main()
{
  Display(11,21);
}