// There are two types of header files:
// 1. System header files: It comes with the compiler 
#include<iostream>
// 2. User defined header files: It is written by the programmer 
// #include "this.h" --> This will produce an error if this.h is not present in the current directory

using namespace std;

int main(){
    int a = 4 , b = 5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithematic Operators 
    cout<<"the value of a + b is "<<a+b<<endl;  
    cout<<"the value of a - b is "<<a-b<<endl;
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    // cout<<"the value of a ++ b is "<<a++<<endl;
    // cout<<"the value of a-- b is "<<a--<<endl;
    // cout<<"the value of ++a is "<<++a<<endl;
    // cout<<"the value of --a is "<<--a<<endl;
    // cout<<"the value of a^b is "<<a^b<<endl;
    cout<<endl;
    cout<<endl;

    // Assignment operator : used to assign values to variables 
    // int a= 3 , b = 9;
    // char d = 'd';

    // Comparison operator 
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;

    cout<<endl;
    cout<<endl;

    // Logical Operator  
     cout<<"The value of this logical operator is "<<((a==b)&&(a<b))<<endl;
     cout<<"The value of this logical operator is "<<((a==b)||(a<b))<<endl;
     cout<<"The value of this logical operator is "<<(!(a==b))<<endl;

    //  Bitwise operator aage karenge




    Hii this is changed by rhythm munjal 

    return 0;
}