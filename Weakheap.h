#ifndef WEAKHEAP_H
#define WEAKHEAP_H

#include <vector>
class WeakHeap{
	public:
		struct Node{
			int value; 
			bool revbit;
			Node(): value(0), revbit(false){};
			Node(int v, bool r): value(v), revbit(r){};
		};
		
		WeakHeap();
		WeakHeap(const int&);
		WeakHeap(const int**);
		
		int get_size()const;
		bool isEmpty()const;
		Node* get_root()const;
		
		void insert(const int&);
		void merge(const WeakHeap&);
		
	private:
		Node* root;
		std::vector<Node> heap;
		
		void heapify();
};
#endif
