/*
	Template Class
*/
#include <iostream>
using namespace std;

template <class T>
class Arithmetic{
	private:
		T a;
		T b;

	public:
		Arithmetic(T a, T b);

		T add();

		T sub();

		void compute(){
			cout<<"Addition: "<<add()<<endl;
			cout<<"Subtraction: "<<sub()<<endl;
		}
};


template <class T>
Arithmetic<T>::Arithmetic(T a, T b){
	this->a = a;
	this->b = b;
}

template <class T>
T Arithmetic<T>::add(){
	T c;
	c = a + b;
	return c;
}

template <class T>
T Arithmetic<T>::sub(){
	T c;
	c = a - b;
	return c;
}

int main(){
	Arithmetic<int> ar(10,5);
	
	Arithmetic<float> fl(10.2, 2.8);	
	ar.compute();
	fl.compute();
}


