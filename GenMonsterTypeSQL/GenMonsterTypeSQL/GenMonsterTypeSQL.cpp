// GenMonsterTypeSQL.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include "../include/version.h"

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "程序版本：" << VERSION_NUMBER << std::endl;
	std::set<unsigned int> setID;
	std::ifstream fin("majl_test.log", std::ios::in);
	char linebuff[1024] = { 0 };
	std::cout << "正在读取文件内容..." << std::endl;
	while (fin.getline(linebuff, sizeof(linebuff)))
	{
		std::string line(linebuff);
		// std::cout << line << std::endl;
		if (line.length())
		{
			std::string strId = line.substr(36, line.length() - 36 - 3);
			// std::cout << strId << std::endl;
			unsigned int id = std::atoi(strId.c_str());
			// std::cout << id << std::endl;
			if (id)
			{
				setID.insert(id);
			}
		}
	}
	fin.clear();
	fin.close();

	std::cout << "正在生成脚本..." << std::endl;
	std::ofstream fout("MonsterType.SQL", std::ios::out);
	set<unsigned int>::iterator iter = setID.begin();
	for (; iter != setID.end(); ++iter)
	{
		unsigned int id = *iter;
		// std::cout << id << std::endl;
		fout << "DELETE FROM `monstertype` WHERE `id` = " << id << ";" << std::endl;
		fout << "INSERT INTO `monstertype` (`id`, `name`, `sort`, `drop_money_min`, `drop_money_max`, `is_money_share`, `is_map_awardmoney`, `award_exp`, `ishare`, `ismapaward_exp`, `camp`, `additive_attribute`, `pve_energy`) VALUES"<< std::endl;
		fout << "(" << id << ", '', " << id << ", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);" << std::endl;
	}
	fout.clear();
	fout.close();

	//char end;
	//std::cin >> end;
	return 0;
}

