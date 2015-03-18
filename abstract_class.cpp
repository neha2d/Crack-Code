//Dynamic Polymorphism

// Base class function pure virtual
// So if try to create object of abstract class, compilation error occurs
// Derived class needs to provide its own implementation to the pure virtual function and then can access it 
// by instantiating its own object


// A class can be made abstract by just declaring one of its function as pure virtual.

/* Purpose of abstract class is to provide a proper base class for derived classes which can be inherited by other classes.
   Abstract classes can not be used to instantiate objects it can only act as an interface to other classes.
   Derived classes which can instantiate objects are called as concrete classes */
   
   
#include<iostream>

using namespace std;

class Shape
{
	protected:
		int width,length;
	public:
		virtual int getArea()=0;
		void setParameters(int w,int l)
		{
			width =w;
			length =l;
		}
};

class Rectangle:public Shape
{
	public:
		int getArea()
		 {
		 	return width*length;
		 }
};

class Triangle:public Shape
{
	 public:
	 	int getArea()
	 	{
	 		return 0.5*width*length;
		}
		
};

int main()
{
	Rectangle rect;
	Triangle tri;
	
	rect.setParameters(10,10);
	tri.setParameters(8,9);
	cout << rect.getArea() << endl;
	cout << tri.getArea() << endl;
	return 1;
 }
