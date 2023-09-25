#include<iostream>
using namespace std;
 
int main(){
    int a=10, b=5;
    // Arithmetic operators
    cout<<"Following are the Arithmetic operators in C++"<<endl;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl; // First print (a) and then increment it by 1
    cout<<"The value of a-- is "<<a--<<endl; // First print (a+1) and then decrease it by 1
    cout<<"The value of ++a is "<<++a<<endl; // Increment (a) by (a+1) and then print
    cout<<"The value of --a is "<<--a<<endl; // Decrement (a+1) by (a) and then print
    cout<<endl;
 
    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';
 
    // Comparison operators
    // Output of all these comparison operators will be (1) if it is true and (0) if it is false
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<endl;
    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;
 
 
    return 0;
}