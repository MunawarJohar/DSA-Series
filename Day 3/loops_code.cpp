#include<iostream>
using namespace std;
int main(){
// print number 1 to 5
int count=1;
while(count<=5){
  cout<<"count "<<count<<endl;
 // count=count+1; //method one
  //second method
  count++;
}

 int  sum=0;
 
for(int i=1;i<10;i++){
  sum=sum+i;

}
  cout<<"\n sum = "<<sum;
  

 
 int oddsum=0;
 // sum of odd number using for loop
 for(int k=1;k<=5;k++){
  if(k%2!=0){
  oddsum+=k;
 }  
 }
   cout<<"\n sum of odd numbers "<<oddsum;
   
  // do while loop
  int l=0;
  do{
  cout<<"\n print do while loop multiple time";
  l++;
  }while(l<3);   


// check if a number is prime or not
 bool isPrime=true;
 int n=11;
for(int i=2;i<=n-1;i++){
 if(n%i==0){
   isPrime=false;
  break;
 }
} if(isPrime==true){
 cout<<"\n prime number";
 }
 else{
 cout<<"\n none prime number";
 }
cout<<endl;

// Nested loops
for(int i=0;i<5;i++){
   for(int j=0;j<5;j++){
   cout<<"*";
   }
   cout<<endl;
}

  return 0;
}
