#include "CPP_STL_Extension.h"
#include <iostream>

using namespace std;
using namespace STLExt;

int main()
{
    cout << "Start testing CPP_STL_Extension" << endl;
//===========================================================================================================================
	cout << "\n\n\nStart testing function %% split %%" << endl;
	string testString1 = " ko no  dio da";
	cout << "\nTest1: string: " << testString1 << endl;

	vector<string> testStringOut1 = split(testString1);  //split(string&)

	cout << "Output list as follows:" << endl;
	for (auto &str : testStringOut1) {
		cout << str << endl;
	}
	cout << "End Test1" << endl;
	//-----------------------------------------------------------------------------------
	string testString2 = "#ko#no##dio#da#";
	cout << "\nTest2: string: " << testString2 << endl;

	vector<string> testStringOut2 = split(testString2, '#');  //split(string&, char)

	cout << "Output list as follows:" << endl;
	for (auto &str : testStringOut2) {
		cout << str << endl;
	}
	cout << "End Test2" << endl;
	//-----------------------------------------------------------------------------------
	string testString3 = "#ko#no##dio#da#";
	string testStringFlag3("o#");
	cout << "\nTest3: string: " << testString3 << ", flag: " << testStringFlag3 << endl;

	vector<string> testStringOut3 = split(testString3, testStringFlag3);  //split(string&, string&)

	cout << "Output list as follows:" << endl;
	for (auto &str : testStringOut3) {
		cout << str << endl;
	}
	cout << "End Test3\n" << endl;
	cout << "End testing function %% split %%\n\n\n" << endl;
//===========================================================================================================================
}
