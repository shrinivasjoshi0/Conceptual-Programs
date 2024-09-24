#include<iostream>
using namespace std ;

class Array
{
  private:

  int *Arr ;
  int iLength ;

  public:
  Array(int Size)
  {
    iLength = Size ;
    Arr = new int[iLength];
  } 
  cout<<"Length is :"<<Size;

};

int main()
{
 // int no = 0 ;

  //cout<<"Enter Size of array :"<<"\n";
  //cin>> no;
  Array aobj[5];

  return 0 ;

}