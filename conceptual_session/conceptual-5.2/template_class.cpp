#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Adder
{

public:
    T add(T a,T b){
    return a+b;
    }

};
class Add{
public:
    int add(int a,int b){
    return a+b;
    }
};
int main(){
    //vector<int>v;
     //vector<string>v;
      //vector<float>v;
      //stack,queue,sort,min,max
Adder<int>intAdder;
int sum=intAdder.add(3,4);
cout<<"Sum: "<<sum<<endl;
Adder<double>doubleAdder;
double result=doubleAdder.add(1.5,2.7);

Add adder;
int sum2=adder.add(3,4);
cout<<"Sum : "<<sum2<<endl;
return 0;

}
