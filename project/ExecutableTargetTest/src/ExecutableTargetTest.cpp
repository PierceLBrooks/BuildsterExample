
#include <ExecutableTargetTest.hpp>
#include <iostream>

Buildster::ExecutableTargetTest::ExecutableTargetTest() :
	LibraryTargetTest()
{
	std::cout << "ExecutableTargetTest()" << std::endl;
}

Buildster::ExecutableTargetTest::~ExecutableTargetTest()
{
	std::cout << "~ExecutableTargetTest()" << std::endl;
}

