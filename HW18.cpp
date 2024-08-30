#include <iostream>
//#include <string>
#include <vector>
template<typename T>

class Stack
{
private:
	std::vector<T> v;
public:
	void push(T);
	void pop();
	void show();
	void top();
};

template<class T> void Stack<T>::push(T elem)
{
	v.push_back(elem);
	std::cout << "Pushed element is: " << v.back() << "\n";
	
}
template<class T> void Stack<T>::pop()
{
	std::cout << "Poped element is: " << v.back() << "\n";
	v.pop_back();
	 
}
template<class T> void Stack<T>::show()
{
	std::cout << "Your stack: " << "\n";
	for (auto a : v) std::cout << a << " ";
	std::cout << "\n";
}
template<class T> void Stack<T>::top() 
{
	std::cout << "Last element is: " << v.back() << "\n";
}



int main()
{
	Stack <int> k;
	k.push(1);
	k.push(2);
	k.push(3);
	k.show();
	k.top();
	k.pop();
	k.show();

	Stack<float> f;
	f.push(1.f);
	f.push(4.f);
	f.push(67.f);
	f.show();
	f.pop();
	f.show();
}

