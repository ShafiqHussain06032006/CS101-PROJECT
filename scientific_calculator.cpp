// this is our project . represented by abdul moeed
#include<iostream>
using namespace std;
double add(){
cout<<"enter your numbers "<<endl;
int a, b;
cin>>a>>b;
return a+b;
}
double subtract(){
    int a, b;
    cout<<"enter your numbers "<<endl;
    cin>>a>>b;
    return a-b;
}
double multiply(){
     int a, b;
    cout<<"enter your numbers "<<endl;
    cin>>a>>b;
    return a*b;
}
double divide(){
    double a, b;
    cout<<"enter your numbers "<<endl;
    cin>>a>>b;
    if (b==0)
    {
        cout<<"math error";
    }
    return a/b;
}
int main()
{
    int operation=5;
   cout<<"enter 1 for addition "<<endl;
   cout<<"enter 2 for subtraction "<<endl;
   cout<<"enter 3 for multiplication "<<endl;
   cout<<"enter 4 for division "<<endl;
   cin>>operation;
   switch (operation)
   {
   case 1:
    cout<<add();
    break;
   case 2:
   cout<<subtract();
   break;
   case 3:
   cout<<multiply();
   break;
   case 4:
   cout<<divide();
   break;
   default:
    break;
   }
    return 0;
}
