#include <iostream>

using namespace std;

//Ex 1
class rectangle
{
	private:
		float length;
		float breadth;
	public:
		rectangle(float len,float width)
		{
			this-> length = len;
			this-> breadth = width;
		}
		float area(){return length*breadth;}
};


//Ex 2
class calculation
{
public:
	int a,b;
	calculation(int a=12,int b=25 ){this->a=a;this->b=b;}
};

//Ex 3
class ComplexNumber
{
public:
		double real,imaginary;
		ComplexNumber() = default;
		ComplexNumber(double rel,double img):real{rel},imaginary{img}{}
		ComplexNumber add(ComplexNumber cmplx)
		{
			ComplexNumber result;
			result.real = this->real+cmplx.real;
			result.imaginary = this->imaginary+cmplx.imaginary;
			return result;
		}
};



int main()
{
	//Ex 1
	cout<<"####Ex 1####"<<endl;
	rectangle ex1(5.8,6.23);
	cout<<"Area of Rectangle with length 5.8 and breadth 6.23 is: "<<ex1.area()<<endl;
	
	//Ex 2
	cout<<"####Ex 2####"<<endl;
	int A,B;
	cout<<"Enter Two integers one-by-one:"<<endl;
	cin>>A>>B;
	calculation ex2(A,B);
	cout<<"Sum of two integers is:"<<ex2.a+ex2.b<<endl;


	//EX 3
	// Complex_Numbers num1, num2 ,tmp;
    // cout << "input first complex number (a bi)" << endl; 
	cout<<"####Ex 3####"<<endl;
	ComplexNumber cmplx1;
	ComplexNumber cmplx2,cmplx3;
	cout<<"Enter the real part and imaginary part of the first complex number \nEnter them one by one:"<<endl;
	cin>>cmplx1.real>>cmplx1.imaginary;
	cout<<"Enter the real part and imaginary part of the second complex number \nEnter them one by one:"<<endl;
	cin>>cmplx2.real>>cmplx2.imaginary;
	cmplx3 = cmplx1.add(cmplx2);
	cout <<"Sum of the real part of the complex numbers is :"<<	cmplx3.real<<endl;
	cout <<"Sum of the imaginary part of the complex numbers is :"<<cmplx3.imaginary<<endl;
	return 0;
}