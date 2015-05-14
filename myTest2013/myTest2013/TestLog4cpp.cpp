#include "stdafx.h"
#include "TestLog4cpp.h"

#include<iostream>
#include"log4cpp/Category.hh"
#include"log4cpp/OstreamAppender.hh"
#include"log4cpp/BasicLayout.hh"
#include"log4cpp/Priority.hh"
using namespace std;

CTestLog4cpp::CTestLog4cpp()
{
}


CTestLog4cpp::~CTestLog4cpp()
{
}

void CTestLog4cpp::doTest()
{
	log4cpp::OstreamAppender* osAppender = new log4cpp::OstreamAppender("osAppender", &cout);
	osAppender->setLayout(new log4cpp::BasicLayout());

	log4cpp::Category& root = log4cpp::Category::getRoot();
	root.addAppender(osAppender);
	root.setPriority(log4cpp::Priority::DEBUG);
	root.error("Hello log4cpp in aError Message!");
	root.warn("Hello log4cpp in aWarning Message!");
	log4cpp::Category::shutdown();
}
