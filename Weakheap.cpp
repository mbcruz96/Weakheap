#include "Weakheap.h"

WeakHeap::WeakHeap(){
	root = nullptr;
}

WeakHeap::WeakHeap(const int& v){
	Node node = Node(v, false);
	root = &node;
	heap.push_back(node);
	
}

WeakHeap::WeakHeap(const int* arr){
		
}

int::WeakHeap::get_size()const{
	return heap.size();
}

Node*::WeakHeap::get_root()const{
	return root;
}

bool::WeakHeap::isEmpty()const{
	return (heap.size() == 0);
}

void::WeakHeap::insert(const int& v){
	if (heap.size() == 2){
		Node node = Node(v, true);
		heap.push_back(node);
	}
	else{
		Node node = Node(v, false);
		if (heap.size() == 0)
			root = &node;
		heap.push_back(node);
	}
}

void::WeakHeap::merge(const WeakHeap& h){

}

void::WeakHeap::heapify(){
	
}
