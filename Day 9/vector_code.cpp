#include<iostream>
#include<vector>
using namespace std;

int main() {
// first method 
//vector<int> vec;
//cout<<vec[0];

 
//
//vector<int> vec={1,3,5};
//cout<<vec[0]<<endl;

// second method
vector<int> vec(5,0);
cout<<vec[0]<<endl;
cout<<vec[1]<<endl;
cout<<vec[2]<<endl;
cout<<vec[3]<<endl;
cout<<vec[4]<<endl;

//vector<char> vec2={'a','b','c', 'd'};
//for(char ch:vec2){
// cout<<ch<<endl;
//}
vector<int> vec3;
cout<<"Size: "<<vec3.size()<<endl;
//push back
vec3.push_back(24);
vec3.push_back(34);
vec3.push_back(54);
cout<<"Size after push back: "<<vec3.size()<<endl;
//for(int val :vec3){
// cout<<val<<endl;
//}

vec3.pop_back();
cout<<"Size after pop back: "<<vec3.size()<<endl;

cout<<"the value of front: "<<vec3.front()<<endl;
cout<<"the value of back: "<<vec3.back()<<endl;

// index of vector
cout<<"index :"<<vec3.at(1)<<endl;

vector<int> vectornew;
vectornew.push_back(3);
vectornew.push_back(44);
vectornew.push_back(5);

cout<<"size of new vector"<<vectornew.size()<<endl;
cout<<"capacity of new vector: "<<vectornew.capacity()<<endl; 

  return 0;
}

