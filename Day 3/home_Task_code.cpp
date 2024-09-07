#include<iostream>
using namespace std;
int main(){
// Question number 1 sum of all number which are divisible by 3
int n;
int count=0;
cout<<"Enter your number"<<endl;
cin>>n;
for(int i=1;i<n;i++){
 if(i%3==0){
  count+=i;
 }
}
cout<<"\n Sum of the number: "<<count;

// Factorial of a number
 int number, factorial = 1;
    
    cout << "\n Enter a positive integer: ";
    cin >> number;
    
    if (n < 0) {
        cout << "\n Factorial of a negative number is undefined." << endl;
    } else {
        int i = 1;
        while (i <= number) {
            factorial *= i;
            i++;
        }
        
        cout << "\n Factorial of " << number << " is " << factorial << endl;
    }
  return 0;
}
