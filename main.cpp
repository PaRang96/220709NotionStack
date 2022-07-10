#include <iostream>
using namespace std;

template <typename T>
class MyStack
{
	T* arr;
	int key;
	int size = 0;

public:
	MyStack(int NewSize = 1);
	~MyStack();

	void Push(T element);
	void IsFull();
	void IsEmpty();
	void Pop();
	int Size();
	T Top();
};

template<typename T>
MyStack<T>::MyStack(int NewSize)
{
	arr = new T[NewSize];
	key = -1;
	size = NewSize;
}

template<typename T>
MyStack<T>::~MyStack()
{
	delete[] arr;
	arr = nullptr;
}

template<typename T>
void MyStack<T>::Push(T element)
{
	if (size == key + 1)
	{
		cout << "Stack is already full" << endl;
	}
	else
	{
		key++;
		arr[key] = element;
	}
}

template<typename T>
void MyStack<T>::IsFull()
{
	if (key + 1 == size)
	{
		cout << "Stack is full" << endl;
	}
	else
	{
		cout << "Stack is not full" << endl;
	}
}

template<typename T>
void MyStack<T>::IsEmpty()
{
	if (key == -1)
	{
		cout << "Stack is empty" << endl;
	}
	else
	{
		cout << "Stack is not empty" << endl;
	}
}

template<typename T>
void MyStack<T>::Pop()
{
	if (key == -1)
	{
		cout << "There is no element to top" << endl;
	}
	else
	{
		arr[key] = NULL;
		key--;
	}
}

template<typename T>
int MyStack<T>::Size()
{
	cout << key + 1 << endl;
	return key + 1;
}

template<typename T>
T MyStack<T>::Top()
{
	cout << arr[key] << endl;
	return arr[key];
}

int main()
{
	MyStack<int> TestStack(3);
	TestStack.IsEmpty();
	TestStack.IsFull();
	TestStack.Push(10);
	TestStack.Top();
	TestStack.Pop();
	TestStack.IsEmpty();
	TestStack.Push(1);
	TestStack.Push(2);
	TestStack.Push(3);
	TestStack.Push(4);
	TestStack.IsFull();
	TestStack.Size();
	TestStack.~MyStack();

	return 0;
}