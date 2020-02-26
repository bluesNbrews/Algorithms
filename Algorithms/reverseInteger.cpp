/*
Reverse Integer Problem: Given a 32-bit signed integer, reverse digits of an integer.

Corner / edge cases:

Ex1:
Input: 123
Output: 321

Ex2:
Input: -123
Output: -321

Ex3:
Input: 120
Output: 21
*/

#include<iostream>
#include<string>
#include<cstdlib>

//I am trying out not using namespace std. It is more painful but a good learning exp :)
//using namespace std
 
std::string reverseString(std::string myStr){
 
  int length = myStr.length();
 
  for(int i = 0; i < length / 2; i++){
    std::swap(myStr[i], myStr[length - i - 1]);
  }
 
  return myStr;
 
}
 
int main(){
 
  int myInt = 120;
  //Find if the int is positive or negative (1 is positive and -1 for negative)
  int sign = (myInt > 0) - (myInt < 0);
  
  //Get the positive integer as a string
  std::string myString = std::to_string(myInt);
  
  //Reverse the string 
  std::string myStringRev = reverseString(myString);
 
  //Check if the integer is positive and negative and return as such
  if(myInt == abs(myInt)){
    std::cout << stoi(myStringRev) << std::endl; //Does not keep the leading zero as in ex 3
  }
  if(sign == -1){
    std::cout << (stoi(myStringRev) * -1) << std::endl; //Does not keep the leading zero as in ex 3
  }
 
  return 0;
}