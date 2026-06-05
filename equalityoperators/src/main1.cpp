#include <iostream>
using namespace std;
int main(){

    char char1{},char2{};
    bool equal_result{true};
    bool not_equal_result{false};
    cout<<boolalpha<<endl;
   cout<<"enter the character separateed by space:"<<endl;
   cin>>char1>>char2;
   equal_result=(char1==char2);
   not_equal_result=(char1!=char2);
   cout<<"result comparision(equal):"<<equal_result<<endl;
   cout<<"result comparision (not equal):"<<not_equal_result<<endl;

} 

