// classTemplate.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <vector>
#include <stdexcept>

template<typename T>
class Stack {
public:
	void push(const T& e);
	void pop();
	T    top() const;
	bool empty() const { return elems_.empty();  }
private:
	std::vector<T> elems_;
};

template<typename T>
void Stack<T>::push(const T& e) {
	elems_.push_back(e);
}

template<typename T>
void Stack<T>::pop() {
	if (elems_.empty()) {
		throw std::out_of_range("stack<>::pop(): empty statck ");
	}
	elems_.pop_back();
}

template<typename T>
T Stack<T>::top() const {
	if (elems_.empty()) {
		throw std::out_of_range("stack<>::pop(): empty statck ");
	}
	elems_.back();
}




int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

