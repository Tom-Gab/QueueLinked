#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class Queue
{
	private:
		Node* m_head;
		Node* m_tail;
		int m_size;
	public:
		Queue();
		int getFront();
		int getBack();
		void enqueue(int data);
		void dequeue();
		bool isEmpty();
		void afficherFile();
	
};

#endif 