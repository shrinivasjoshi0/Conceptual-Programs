#include<iostream>

using namespace std ;

float calculate(float marks , float outof=100)
{
  float per = (marks / outof) * 100 ;
  return per ;

}
int main()
{
 float ans = 0.0f ;
 ans = calculate(86,100);
 cout<<"Percentage is : "<<ans<<"\n";

 ans =  calculate(70);
 cout<<"Percenatge is : "<<ans<<"\n";

 ans = calculate(320,400);
 cout<<"percentage is :"<<ans<<"\n";


  return 0 ;
}