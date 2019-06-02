#include <assert.h> 
#include<conio.h>
#include<iostream>
using namespace std;
class Fraction
{
private:
	int nu, de;
public:
	Fraction();
	Fraction(int a, int b);
	void Reduce();
	Fraction& operator=(Fraction const& fr);
	friend ostream& operator<<(ostream& out, const Fraction &fr);
	friend istream& operator>> (istream& in, Fraction& fr);
};
Fraction::Fraction()
{
	nu = 0;
	de = 1;
}
Fraction::Fraction(int a, int b)
{
	nu = a;
	de = b;
}
int GCD(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a == 0 && b != 0)
	{
		return b;
	}
	else if (a != 0 && b == 0)
	{
		return a;
	}
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;

}
void Fraction::Reduce()
{
	if (de != 0)
	{
		int b = GCD(nu, de);
		nu /= b;
		de /= b;
	}
}
Fraction& Fraction::operator=(Fraction const& fr)
{
	if (this != &fr)
	{
		nu = fr.nu;
		de = fr.de;
	}
	return *this;
}

ostream& operator<<(ostream& out, const Fraction &fr)
{
	if (fr.de != 1)
		return out << fr.nu << "/" << fr.de;
	else
		return out << fr.nu;
}
istream& operator >> (std::istream& in, Fraction& fr)
{
	int n, d = 1;
	char c;

	if (in >> n >> c)
	{
		if (c == '/')
		{
			in >> d;
		}
		else
		{
			in.putback(c);
		}
		fr = Fraction(n, d);
	}
	return in;
}

template<class T>
class Classtemplate
{
private:
	T* stack;
	int capacity;
	int top;
public:
	Classtemplate(int size);
	void push(T a);
	void pop();
	T getTop() const;
	bool isEmpty();
	bool isFull();
	bool stackEmpty();
	int getSize();
	~Classtemplate();
};
template<class T>
Classtemplate<T>::Classtemplate(int size)
{
	capacity = size;
	stack = new T[capacity];
	top = 0;
}
template<class T>
void Classtemplate<T>::push(T a)
{
	if (isFull() == true)
	{
		cout << "Stack is full !!!" << endl;
	}
	else
	{
		stack[top] = a;
		top++;
	}
}
template<class T>
bool Classtemplate<T>::isFull()
{
	if (top > capacity - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<class T>
bool Classtemplate<T>::isEmpty()
{
	if (top < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<class T>
void Classtemplate<T>::pop()
{
	if (isEmpty() == true)
	{
		cout << "Stack is empty !!!" << endl;
	}
	else
	{
		top--;
	}
}
template<class T>
T Classtemplate<T>::getTop() const
{
	return stack[top - 1];
}
template<class T>
int Classtemplate<T>::getSize()
{
	return top;
}
template<class T>
bool Classtemplate<T>::stackEmpty()
{
	if (isEmpty() == true)
	{
		cout << "Stack is empty !!!" << endl;
		return true;
	}
	else
	{
		int value = top;
		top = top - value - 1;
		if (isEmpty() == true) return true;
		else return false;
	}
}
template<class T>
Classtemplate<T>::~Classtemplate()
{
	delete[] stack;
}

void main()
{
	int a;
	cout << "Enter size of Stack integer: ";
	cin >> a;
	Classtemplate<int> intS(a);
	for (int i = 1; i <= a; i++)
	{
		intS.push(i);
	}
	intS.pop();
	cout << "Top element of the stack: " << intS.getTop() << endl;
	cout << "Number of elements in the stack: " << intS.getSize() << endl;;
	intS.isFull();
	if (intS.isEmpty() == true)
		cout << "Stack is empty" << endl;
	cout << "--------------------------------------------------" << endl;

	cout << "Enter size of Stack float: ";
	cin >> a;
	Classtemplate<float> floatS(a);
	for (int i = 1; i <= a; i++)
	{
		floatS.push(i + 0.5);
	}
	floatS.pop();
	cout << "Top element of the stack: " << floatS.getTop() << endl;
	cout << "Number of elements in the stack: " << floatS.getSize() << endl;;
	floatS.isFull();
	if (floatS.isEmpty() == true)
		cout << "Stack is empty" << endl;
	cout << "--------------------------------------------------" << endl;


	cout << "Enter size of Stack fraction: ";
	cin >> a;
	Classtemplate<Fraction> fracS(a);
	for (int i = 1; i <= a; i++)
	{
		Fraction f(i, i + 1);
		f.Reduce();
		fracS.push(f);
	}
	intS.pop();
	cout << "Top element of the stack: " << fracS.getTop() << endl;
	cout << "Number of elements in the stack: " << fracS.getSize() << endl;;
	fracS.isFull();
	if (fracS.isEmpty() == true)
		cout << "Stack is empty" << endl;
	_getch();
}