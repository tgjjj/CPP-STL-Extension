#pragma once
#ifndef CPP_STL_EXTENSION_H
#define CPP_STL_EXTENSION_H

#include <iostream>
#include <string>
#include <vector>
#include <math.h>

namespace STLExt {

std::vector<std::string> split(std::string &str, std::string &splitFlag)
{
	std::vector<std::string> v;
	int start = 0;
	int end = 0;
	while ((end = str.find(splitFlag, start)) != str.npos) {
		v.push_back(str.substr(start, end - start));
		start = end + splitFlag.size();
	}
	v.push_back(str.substr(start));
	return v;
}

std::vector<std::string> split(std::string &str, char splitFlag)
{
	std::vector<std::string> v;
	int start = 0;
	for (unsigned int end = 0; end < str.size(); end++) {
		if (str[end] == splitFlag) {
			v.push_back(str.substr(start, end - start));
			start = end + 1;
		}
	}
	v.push_back(str.substr(start));
	return v;
}

std::vector<std::string> split(std::string &str)
{
	return split(str, ' ');
}

} // namespace STLExt

#endif // !CPP_STL_EXTENSION_H