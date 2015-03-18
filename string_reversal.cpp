// Write a code to reverse a C-style string

#include<iostream>
#include<cstring>

using namespace std;

class string_reversal
{
	     int length;
	     char *str;
	public:
	string_reversal(char *data,int length)
	 {
	 	 str=data;
	 	 this->length = length;
	 }
	 
	 void reverse();
	
};

void string_reversal::reverse()
{
	int len;
	char *ptr;
    len=length;
	ptr=str;
	while(*ptr != '\0')
		ptr++;
	
    ptr--;
    int i=0;
    char *output = new char[len];
    while(*ptr)
     {
          output[i] = *ptr;
          i++;
          ptr--;
     }
	cout << output;
	//Print the reversed string
	
}

int main()
{
	string str;
	cout << "Enter a string that you want to reverse: ";
	cin >> str;
	
	char *data=(char *)str.c_str();
	int length = strlen(data);
	string_reversal r(data,length);
	r.reverse();
	return 1;
	
}
