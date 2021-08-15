// Task 2
// Name: Aftab Ahmed

/* AIM: Write a program to check whether the given number of 
three digits is palindrome or not? [Do not use loops]. */

#include<iostream>
using namespace std;

int main(){
    int x,a,b,c;
    int reverse;
    cout<<" enter no. : ";
    cin>>x;
    
    a=x/100;
    b=(x%100)/10;
    c=x%10;
    reverse= c*100 + b*10 + a;
          
    cout<<"Reversed : "<<reverse<<endl;
    if(reverse==x){
    cout<<"Palindrome"<<endl;
    }
    else{
    cout<<"Not palindrome";
    }
    return 0;
}
