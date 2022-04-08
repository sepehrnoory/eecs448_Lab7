/**
* @file test.cpp
* @author Sepehr Noori
* @date 2022.03.30
*/
#include "test.h"
#include <string>
#include <iostream>

test::test()
{

}

void test::testEmpty()
{
  Queue q;
  std::string response = "";
  if(q.isEmpty() == 0)
  {
    response = "FAILED";
  }
  else
  {
    response = "PASSED";
  }
  std::cout << "Newly created Queue is empty: " << response << '\n';
}

void test::testNonEmpty()
{
  Queue q;
  std::string response = "";
  q.enqueue(12);
  if(q.isEmpty() == 0)
  {
    response = "PASSED";
  }
  else
  {
    response = "FAILED";
  }
  std::cout << "isEmpty returns false on nonempty queue: " << response << '\n';
}

void test::testPeek()
{
  Queue q;
  std::string response = "";
  q.enqueue(12);
  if(q.peekFront() == 12)
  {
    response = "PASSED";
  }
  else
  {
    response = "FAILED";
  }
  std::cout << "Enqueing 12 on empty queue then peekFront returns 12: " << response << '\n';
}

void test::testPeekEmptyQueue()
{
  Queue q;
  std::string response = "";
  try
  {
    q.peekFront();
    response = "FAILED";
  }
  catch(std::exception &e)
  {
    response = "PASSED";
    std::cout << "peekFront on empty queue throws exceptions: " << response << '\n';
  }
}

void test::testEnqueue()
{
  Queue q;
  std::string response = "";
  for(int i=1;i<5;i++)
  {
    q.enqueue(i);
    if(q.peekFront() == 1)
    {
      response = "PASSED";
    }
    else
    {
      response = "FAILED";
    }
  }
  std::cout << "Enqueing 4 integers then ensuring the front stays constant with peekFront:: " << response << '\n';
}

void test::testEnqueueFront()
{
  Queue q;
  std::string response = "";
  q.enqueue(2);
  if(q.peekFront() == 2)
  {
    q.enqueue(3);
    if(q.peekFront() == 2)
    {
      response = "PASSED";
    }
    else
    {
      response = "FAILED";
    }
  }
  std::cout << "Enqueue adds value to end of queue: " << response << '\n';
}

void test::testDequeue()
{
  Queue q;
  std::string response = "";
  q.enqueue(1);
  q.enqueue(2);
  q.dequeue();
  q.dequeue();
  if(q.isEmpty())
  {
    response = "PASSED";
  }
  else
  {
    response = "FAILED";
  }
  std::cout << "Dequeing the same amount of enqueues will yield empty queue: " << response << '\n';
}

void test::testDequeueBack()
{
  Queue q;
  std::string response = "";
  q.enqueue(1);
  q.enqueue(2);
  int tempFront = q.peekFront();
  q.dequeue();
  if(tempFront == q.peekFront())
  {
    response = "PASSED";
  }
  else
  {
    response = "FAILED";
  }
  std::cout << "Dequeing will remove node from the back of queue: " << response << '\n';
}
