// prog3_queue.cpp
//

#include "Queue.h"
#include <iostream>

int main()
{
    Queue file1;
    Queue file2;

    file1.enqueue(67);
    file1.enqueue(39);
    file1.enqueue(83);
    file1.enqueue(42);
    std::cout << "Premier element : " << file1.getFront() << "\n";
    std::cout << "Dernier element : " << file1.getBack() << "\n";
    std::cout << "La file : \n";
    file1.afficherFile();

    
}