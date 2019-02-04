
/***************************************************
Author: Cameron Coventry	Date: 1/28/19

Purpose: To replace all instances of a string with another string

Current file:  Change.cc

****************************************************/

#include <iostream>
#include "change.h"


/*************************
Function: StringChange

Purpose:Finds the string in question and switches
					it with desired string
*************************/
void StringChange(char** argv)
{
	string s;

	while(getline(cin, s))
	{
		if(s.find(argv[1]) != std::string::npos)
		{
			s.replace(s.find(argv[1]), s.length(), argv[2]);
		}
		cout<<s<<endl;
	}
	cout<<"done"<<endl;
}
