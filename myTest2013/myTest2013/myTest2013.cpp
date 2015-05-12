// myTest2013.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <iostream>
#include <string>


int _tmain(int argc, _TCHAR* argv[])
{
	// 测试std map 排序问题
	//	std::map<int, std::string> mapTest;
	// 	mapTest[9] = "第1次写入";
	// 	mapTest[23] = "第2次写入";
	// 	mapTest[15] = "第3次写入";
	// 	mapTest[10] = "第4次写入";
	// 	mapTest[1] = "第5次写入";
	// 	mapTest[6] = "第6次写入";
	// 	mapTest[5] = "第7次写入";
	// 	mapTest[18] = "第8次写入";
	// 	mapTest[11] = "第9次写入";
	// 	mapTest[12] = "第10次写入";
	// 	mapTest[4] = "第11次写入";
	// 	mapTest[3] = "第12次写入";
	// 	std::map<int, std::string>::iterator iter = mapTest.begin();
	// 	for (; iter != mapTest.end(); ++iter)
	// 	{
	// 		std::cout << iter->first << iter->second <<std::endl;
	// 	}

	struct myStruct
	{
		std::string name;
		std::map<int, std::string> myMap;
	};

	myStruct myStruct1;
	myStruct1.name = "myStruct1";
	myStruct1.myMap[9] = "第1次写入";
	myStruct1.myMap[23] = "第2次写入";
	myStruct1.myMap[15] = "第3次写入";
	myStruct1.myMap[10] = "第4次写入";
	myStruct1.myMap[1] = "第5次写入";
	myStruct1.myMap[6] = "第6次写入";
	myStruct1.myMap[5] = "第7次写入";
	myStruct1.myMap[18] = "第8次写入";
	myStruct1.myMap[11] = "第9次写入";
	myStruct1.myMap[12] = "第10次写入";
	myStruct1.myMap[4] = "第11次写入";
	myStruct1.myMap[3] = "第12次写入";

	myStruct myStruct2 = myStruct1;
	myStruct2.name = "myStruct2";

	std::map<int, std::string>::reverse_iterator iter = myStruct1.myMap.rbegin();
	for (; iter != myStruct1.myMap.rend(); ++iter)
	{
		std::cout << iter->first << iter->second << std::endl;
	}

	char wait;
	std::cin >> wait;
	return 0;
}

