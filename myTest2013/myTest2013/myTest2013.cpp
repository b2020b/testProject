// myTest2013.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <map>
#include <iostream>
#include <string>


int _tmain(int argc, _TCHAR* argv[])
{
	// ����std map ��������
	//	std::map<int, std::string> mapTest;
	// 	mapTest[9] = "��1��д��";
	// 	mapTest[23] = "��2��д��";
	// 	mapTest[15] = "��3��д��";
	// 	mapTest[10] = "��4��д��";
	// 	mapTest[1] = "��5��д��";
	// 	mapTest[6] = "��6��д��";
	// 	mapTest[5] = "��7��д��";
	// 	mapTest[18] = "��8��д��";
	// 	mapTest[11] = "��9��д��";
	// 	mapTest[12] = "��10��д��";
	// 	mapTest[4] = "��11��д��";
	// 	mapTest[3] = "��12��д��";
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
	myStruct1.myMap[9] = "��1��д��";
	myStruct1.myMap[23] = "��2��д��";
	myStruct1.myMap[15] = "��3��д��";
	myStruct1.myMap[10] = "��4��д��";
	myStruct1.myMap[1] = "��5��д��";
	myStruct1.myMap[6] = "��6��д��";
	myStruct1.myMap[5] = "��7��д��";
	myStruct1.myMap[18] = "��8��д��";
	myStruct1.myMap[11] = "��9��д��";
	myStruct1.myMap[12] = "��10��д��";
	myStruct1.myMap[4] = "��11��д��";
	myStruct1.myMap[3] = "��12��д��";

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

