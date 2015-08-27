// myTest2013.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <map>
#include <iostream>
#include <string>
#include <boost/thread/thread.hpp>

#include "TestLog4cpp.h"

void hello()
{
	std::cout << "Hello world, I'm a thread!" << std::endl;
}

void testBoostThread()
{
	//����BOOST�߳�
	boost::thread thrd(&hello);
	thrd.join();
}

void testMapOrder()
{
	// ����std::map��������
	std::map<int, std::string> mapTest;
	mapTest[9] = "��1��д��";
	mapTest[23] = "��2��д��";
	mapTest[15] = "��3��д��";
	mapTest[10] = "��4��д��";
	mapTest[1] = "��5��д��";
	mapTest[6] = "��6��д��";
	mapTest[5] = "��7��д��";
	mapTest[18] = "��8��д��";
	mapTest[11] = "��9��д��";
	mapTest[12] = "��10��д��";
	mapTest[4] = "��11��д��";
	mapTest[3] = "��12��д��";
	std::map<int, std::string>::iterator iter = mapTest.begin();
	for (; iter != mapTest.end(); ++iter)
	{
		std::cout << iter->first << iter->second << std::endl;
	}

	/*struct myStruct
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
	}*/
}

void testMultiMapOrder()
{
	std::multimap<int, std::string> mapTest;
// 	mapTest.insert(std::pair<int, std::string>(9, "��1��д��"));
// 	mapTest.insert(std::pair<int, std::string>(23, "��2��д��"));
// 	mapTest.insert(std::pair<int, std::string>(9, "��3��д��"));
// 	mapTest.insert(std::pair<int, std::string>(15, "��4��д��"));
// 	mapTest.insert(std::pair<int, std::string>(10, "��5��д��"));
// 	mapTest.insert(std::pair<int, std::string>(5, "��6��д��"));
// 	mapTest.insert(std::pair<int, std::string>(11, "��7��д��"));
// 	mapTest.insert(std::pair<int, std::string>(3, "��8��д��"));
// 	mapTest.insert(std::pair<int, std::string>(5, "��9��д��"));
// 	mapTest.insert(std::pair<int, std::string>(6, "��10��д��"));
// 	mapTest.insert(std::pair<int, std::string>(10, "��11��д��"));
// 	mapTest.insert(std::pair<int, std::string>(15, "��12��д��"));

	mapTest.insert(std::pair<int, std::string>(9, "��1��д��"));
	mapTest.insert(std::pair<int, std::string>(23, "��2��д��"));
	mapTest.insert(std::pair<int, std::string>(9, "��3��д��"));
	mapTest.insert(std::pair<int, std::string>(15, "��4��д��"));
	mapTest.insert(std::pair<int, std::string>(10, "��5��д��"));
	mapTest.insert(std::pair<int, std::string>(5, "��6��д��"));
	mapTest.insert(std::pair<int, std::string>(11, "��7��д��"));
	mapTest.insert(std::pair<int, std::string>(3, "��8��д��"));
	mapTest.insert(std::pair<int, std::string>(5, "��9��д��"));
	mapTest.insert(std::pair<int, std::string>(6, "��10��д��"));
	mapTest.insert(std::pair<int, std::string>(10, "��11��д��"));
	mapTest.insert(std::pair<int, std::string>(15, "��12��д��"));
	std::multimap<int, std::string>::iterator iter = mapTest.begin();
	for (; iter != mapTest.end(); ++iter)
	{
		std::cout << iter->first << iter->second << std::endl;
	}
	std::cout << "����" << std::endl;
	std::multimap<int, std::string>::reverse_iterator riter = mapTest.rbegin();
	for (; riter != mapTest.rend(); ++riter)
	{
		std::cout << riter->first << riter->second << std::endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
// 	CTestLog4cpp testLog4cpp;
// 	testLog4cpp.doTest();

	testMultiMapOrder();
	char wait;
	std::cin >> wait;
 	return 0;
}

