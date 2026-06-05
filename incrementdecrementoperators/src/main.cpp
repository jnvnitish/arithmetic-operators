
// example 1 simple increment
// #include <iostream>
// using namespace std;
// int main(){

//     int counter{10};
//     int result{0};
//      cout<<"counter:"<<counter<<endl;
//      counter=counter+1;
//      cout<<"counter:"<<counter<<endl;
//      counter++;
//      cout<<"counter:"<<counter<<endl;
//      ++counter;
//      cout<<"counter:"<<counter<<endl;


//      return 0;

// }

// example 2 preincrement
#include <iostream>
using namespace std;
int main(){
   int counter=10;
    int  result=0;
//     result= ++counter;       //Note the preincrement
//     cout<<"counter:"<<counter<<endl;
//     cout<<"result:"<<result<<endl;

// }
counter=10;
result=0;
// result=counter++;   //Note the post increment
// cout<<"counter:"<<counter<<endl;
// cout<<"resullt:"<<result<<endl;
// }
// result=++counter+10;
// cout<<"counter:"<<counter<<endl;
// cout<< "result:" <<result<<endl;
// }
//example post increment
result=counter++  +10;
cout<<"counter:"<<counter<<endl;
cout<<"result:"<<result<<endl;
}
