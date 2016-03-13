//
// Created by Gil-ad Gal on 13/3/16.
//

#include <iostream>
#include "Scheduler.h"
#include "Thread.h"

int Scheduler::createThread(void (*f)(), Thread *myThread){
    readyThreadsList.insert(readyThreadsList.begin(), *myThread);
    unsigned int i = 1;
    for (auto it = threads.cbegin(), end = threads.cend();
         it != end && i == it->first; ++it, ++i)
    { }

    threads.insert({i, *myThread});
    std::cout << "done";
};
