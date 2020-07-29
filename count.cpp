/*  Accept a String input
- Print the count of words in the String. Space is assumed to be the separator between words
- Print all numbers that are present in the String and also if they are odd or even. Numbers which are together should be counted as one number.
Eg. If the String input is
The boy had 2 apples, 23 oranges and 222 grapes.
then the output should be as below
Total words - 10
Even numbers - 2,222
Odd numbers - 23 */

#include<iostream>
#include<sstream>
using namespace std;
int countwords(string str)
{
	stringstream s(str);  //breaking input into words
	string word;    // store words
	int count=0;
	while(s>>word)
	count++;
	return count;
}
void getNumberFromString(string s) {
   int odd[100],even[100],i=0,j=0,n=0,m=0;
   stringstream str_strm;
   str_strm << s; //convert the string s into stringstream
   string temp_str;
   int temp_int;
   while(!str_strm.eof()) {
      str_strm >> temp_str; //take words into temp_str one by one
      if(stringstream(temp_str) >> temp_int) 
       { 
         if(temp_int%2==0)
	 {
	    even[i]=temp_int;
	    i++;
	 }
	 else
	 {
	    odd[j]=temp_int;
	    j++;
	 }
      }
      temp_str = ""; //clear temp string
   }
   cout<<"Even numbers - ";
   for(int k=0;k<i;k++){
      cout<<even[k];
      if(k<i-1)
      cout<<",";}
   cout<<"\nEven numbers - ";
   for(int k=0;k<j;k++){
   cout<<odd[k];
   if(k<j-1)
      cout<<",";}
}
int main() {
   string str;
   cout<<"enter a string:";
   getline(cin,str);
   cout<<"Total words - "<<countwords(str)<<"\n";
   getNumberFromString(str);
}
