#include <iostream>
using namespace std;
int main(){

  bool equal_result{false};
  bool not_equal_result{false};
   int num1{},num2{};
   cout<<boolalpha<<endl;  //will display true ,false instead of 0,1.
    cout<<"enter two results separated by space"<<endl;
    cin>>num1>>num2;

   equal_result=(num1==num2);
   not_equal_result=(num1!=num2);
   cout<<"comparision results(equal):"<<equal_result<<endl;
   cout<<"comparision results(not equal):"<<not_equal_result<<endl;
}