/**
*	@file main.cpp
*	@author John Gibbons
* @edited by Sepehr Noori
*	@date 2022.03.30
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "test.h"

int main()
{
	test t;
	std::cout << "Test 1: ";
	t.testEmpty();

	std::cout << "Test 2: ";
	t.testNonEmpty();

	std::cout << "Test 3: ";
	t.testPeek();

	std::cout << "Test 4: ";
	t.testPeekEmptyQueue();

	std::cout << "Test 5: ";
	t.testEnqueue();

	std::cout << "Test 6: ";
	t.testEnqueueFront();

	std::cout << "Test 7: ";
	t.testDequeue();

	std::cout << "Test 8: ";
	t.testDequeueBack();

	return(0);
}
