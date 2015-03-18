//Check if string has all unique characters or not

#include<iostream>
#include<cstring>

using namespace std;

// Considering ascii character set
// Time complexity of the code is O(n) where n is the length of string
// Space complexity is also O(n)

/* There are four ways with which this program can be executed 
   1. By using ASCII set
   2. By Comparing each character of the set to every other character
   3. By bit operator
   4. By sorting the characters of the string which will take O(nlogn) time 
      if suitable sorting algorithm is used. */
      
bool uniqueness_check(string str)
{
	int i,val;
	val=0;
	bool char_set[256]={false};

	for(i=0;i<str.length();i++)
	{
	    int val = str.at(i);
	    if(char_set[val])
	    return false;
	    char_set[val] = true;
	}
	
	return true;
	
}

int main()
{
	
	string str;
	
	cout << "Enter the string: ";
	cin >> str;
	
	
	int result = uniqueness_check(str);
	if(result)
	cout << "string has all unique characters";
	else
	cout << "string has duplicate characters";
	
	return 1;
}
