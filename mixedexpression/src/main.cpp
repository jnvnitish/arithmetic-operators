//section 8
//mixed type expressions
/* ask the user to enter 3 integers
calculate the sum of the intergers then
calculate the average of the three integers


display th three integer entered
the sum of 3 intergrs and 
the average of the 3 integers*/

#include <iostream>
using namespace std;
int main(){
    int total{};
    int num1{},num2{},num3{};
    const int count {3};
    cout<<"\n enter the 3 integers separatd by space"<<endl;
    cin>>num1>>num2>>num3;
    total=num1+num2+num3;
    double average{0.0};
    average=total/count;  //for this condition total should be completely divisible
    average=static_cast<double>(total)/count;   //total could be anything answer will be exact
    //average=(double)total/count; // old style
    cout<<"the three intergers are:"<<num1<<","<<num2<<","<<num3<<","<<endl;
    cout<<"The sum of 3 integers is:"<<total<<endl;
    cout<<"The average of the 3 interger is:"<<average<<endl;
}