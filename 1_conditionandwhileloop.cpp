// DSA pracs-1::conditionsandloops
#include<iostream>
using namespace std;

//iostream:
/*We use <iostream> as a header file because it give access to the user to take input or output like cout, cin, etc. 
Since there are many namespaces are present , we use only the standard one.*/
int main()
{
//output check:
//1
// int a=9;
// if(a==9){
//     cout<<"NINEY";
// }
// if(a>0){
//     cout<<"Positive";
// }
// else{
//     cout<<"Negative";
// }
//op: NINEYPositive
//-----
//2
// int a=2;
// int b=a+1;
// if((a=3)==b)
// {
//     cout<<a;
// }
// else{
//     cout<<a+1;
// }
//op:3
//-----
// int a=24;
// if(a>20){
//     cout<<"Stav";
// }
// else if(a==24){
//     cout<<"in Josh";
// }
// else{
//     cout<<"educon";
// }
// cout<<a;
//op:Stav24
//----
// char ch;
// cout<<"Give input: "<<endl;
// cin>>ch;
// if(ch>='A'&&ch<='Z'){
//     cout<<"Uppercase"<<endl;
// }    
// else if(ch>='a'&&ch<='z'){
//     cout<<"Lowercase"<<endl;    
// }
// else if(ch>='0'&&ch<='9'){
//     cout<<"Numeric"<<endl;
// }
//--------
//while loop:

//print 1 to n:-
// int n;
// cout<<"val of n for 1 to n: ";
// cin>>n;
// int i=1;
// while(i<=n){
//     cout<<i<<" "<<endl;
//     i++;
// }

//sum of 1 to n:
//sum using while loop:
// int n;
// cin>>n;
// int i=1;
// int sum=0;
// while(i<=n){
//     sum=sum+i;
//     i++; 
    
// }
// cout<<"The value of sum of all numbers in between the provided number is: "<<sum<<endl;

//sum without using while loop:
// int n;
// cin>>n;
// cout<<n*(n+1)/2<<endl;

//1 to n : sum of all even numbers:
// int n;
// cin>>n;
// int i=2;
// int sum=0;
// while(i<=n){
//     sum=sum+i;
//     i=i+2;
// }
//    cout << "The value of sum of all even numbers in between the provided number is: " << sum << endl;

//fahrenheit to celcius:
 //float f,c;
//  cout << "The value of temp in f: ";
//  cin >> f;
//  c=5*(f-32)/9;
//  cout<<f<<" fahrenheit is equal to "<<c<<" degree in celcius"<<endl;

// celcius to fahrenheit
// float f,c;
// cout << "The value of temp in c: ";
//  cin >> c;
//  f=c*9/5+32;
//  cout<<c<<" celcius is equal to "<<f<<" fahrenheit "<<endl;

//check prime or not up to n-1 range using while loop:
// int n;
// cin>>n;
// int i=2;
// while(i<n){
//   if(n%i==0){
//     cout<<"Not prime for "<<i<<endl;
//   }  
//   else{
//     cout<<"prime for "<<i<<endl;
//   }
//   i++;
// }

 }
 