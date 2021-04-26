//////////////////////////////////////////////////////////////////////////////
// Exception.h

#pragma once
#include <iostream>

using namespace std;

class Exception
	//: public exception
{
	string message;
public:
	Exception(string msg) : message(msg) {}
	string what() { return message; }
};