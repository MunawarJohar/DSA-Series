#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"Enter Your number ";
 cin>>n;
 if(n>=0){
 cout<<"\n n is positive number";
 }
 else{
 cout<<"\n n is negative number";
 }
 
 int number;
 cout<<"\n Enter the number ";
 cin>>number;
 if(number%2==0){
 cout<<"\n Even number";
 }
 else{
 cout<<"\n Odd number";
 }
 
 int marks;
 cout<<"\n Enter your marks ";
 cin>>marks;
 
 if(marks>=90){
 cout<<"\n A";
 }
 else if(marks>=70 && marks<=80){
 cout<<"\n B";
 }
 else if(marks>=60 && marks<=70){
 cout<<"\n C";
 }
 else{
  cout<<"\n Try for passing Keep it up";
 }
 
 char ch;
 cout<<"\n Enter character ";
 cin>>ch;
 
 if(ch>='a'&& ch<='z'){
 cout<<"\n lower case character";
 }
  if(ch>=65 && ch <=90){
 cout<<"\n Upper case character";
 }
 else{
 cout<<"\n invalid character"<<endl;
 }
 
 int num1=33;
 cout<<(n>=0?"positive":"Negative")<<endl;
 
 return 0;
}
