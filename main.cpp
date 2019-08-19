#include <iostream>
#include "StackType.h"
#include "StackType.cpp"
#include<string>
using namespace std;

int main()
{
    StackType <char> obj1;
    StackType <char> obj2;
    StackType <char> obj3;
    string input;
    cout<<"input:";
    cin>>input;



   for(int i=0;i<input.length();i++){
    if(input[i]=='(' || input[i]== '[' || input[i]== '{'){
        obj1.push(input[i]);
       }
   }
   char x;
   for(int i=0;i<input.length();i++){
    if(input[i]=='}')
    {
        x=obj1.top();
        if(x=='{'){
            obj1.pop();
        }
    }
    if(input[i]==']')
    {
        x=obj1.top();
        if(x=='['){
            obj1.pop();
        }
    }
    if(input[i]==')')
    {
        x=obj1.top();
        if(x=='('){
            obj1.pop();
        }
    }
   }
   if(obj1.isEmpty()==1)
   {

       cout<<"balanced"<<endl;

   }
   if(obj1.isEmpty()==0){
        cout<<"not balanced"<<endl;


   }


    return 0;
}
