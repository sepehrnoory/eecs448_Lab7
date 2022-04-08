/**
* @file test.h
* @author Sepehr Noori
* @date 2022.03.30
*/
#ifndef TEST_H
#define TEST_H

#include "QueueInterface.h"
#include "Node.h"
#include "Queue.h"
#include <string>

class test
{
  public:
    test();
    void testEmpty();
    void testNonEmpty();
    void testPeek();
    void testPeekEmptyQueue();
    void testEnqueue();
    void testEnqueueFront();
    void testDequeue();
    void testDequeueBack();
  private:

};
#endif
