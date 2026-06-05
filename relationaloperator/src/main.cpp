#include <iostream>
using namespace std;
int main(){

int num1{},num2{};
cout<<boolalpha;

// cout <<"enter the numaber separated by space:"<<endl;
// cin>>num1>>num2;
// cout<<num1<<">"<<num2<<(num1>num2)<<endl;
// cout<<num1<<">="<<num2<<(num1>=num2)<<endl;
// cout<<num1<<"<"<<num2<<(num1<num2)<<endl;
// cout<<num1<<"<="<<num2<<(num1<=num2)<<endl;

// }
int lower{10};
int upper{20};
cout <<"enter the number greater than "<<": "<<lower<<endl;
cin>>num1;
cout <<num1<<" > "<<lower<<" is "<<(num1>lower)<<endl;

cout<< "enter the number less than equal to "<<" : "<<upper<<endl;
cin>>num1;
cout <<num1<<" <= "<<upper<< " is " <<(num1<=upper)<<endl;


cout<<endl;


}