#include <iostream>

#define PI 3.14
using namespace std;


void  calculateArea()
{	float circumference;
	cout<<"Enter the circumference to Calculate the Area."<<endl;
	cin>>circumference;
	float radius = circumference/(2*PI);
	cout <<"The Area of the Circle is "<<(PI*radius*radius)<<endl;
}
int  fibonacci(int n)
{ 	

	if (n == 0 or n == 1){return 1;}
	return fibonacci(n -1) + fibonacci(n - 2) ;

}



void MinMaxTable()
{
	int rows,columns,Max,Min;
	cout <<"Enter the number of rows"<<endl;
	cin>>rows;

	cout <<"Enter the number of columns"<<endl;
	cin>>columns;

	int A[rows][columns];

	cout<<"Total elements " <<rows*columns<<endl;
	cout<<"Enter elements one by one"<<endl;

	for(int i=0; i<rows; i++)
	{
	    for(int j=0; j<columns; j++)
	    {
	        cin>>A[i][j];
	    }
	}
	cout<<endl;

	Max = A[0][0];
    Min = A[0][0];

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            if (A[i][j] > Max)
            {
                Max = A[i][j];
            }
            if (A[i][j] < Min)
            {
                Min = A[i][j];
            }


   		 }
	}
	cout<<"Min of the Table is "<<Min<<endl;
	cout<<"Max of the Table is "<<Max<<endl;

}

void fibonacciSequence()
{	int rank;
	cout <<"Enter the rank of the Fibonacci sequence."<<endl;
	cin >>rank;
	for(int i=0;i<rank;i++)
	cout<<fibonacci(i)<<" ";
	cout<<endl;
}


void multiplicationTable()
{
	int factor,rows;
	cout <<"Enter the multiplication factor to display"<<endl;
	cin>>factor;
	cout <<"Enter the number of rows "<<endl;
	cin>>rows;

	for (int i=0;i<=rows;i++)
	{
		cout <<i<<"*"<<factor<<"="<<i*factor<<endl;
	}

}



void truthTable()
{
	cout<<"AND Truth Table of three variable"<<endl;
	for (int a=0;a<=1;a++){
		for(int b=0;b<=1;b++){
			for (int c=0;c<=1;c++)
			{
				bool d = (a&&b)&&c;
				cout <<a<<"&"<<b<<"&"<<c<<"="<<d<<endl;
			}
		}
	}

	cout<<"OR Truth Table of three variable"<<endl;
	for (int a=0;a<=1;a++){
		for(int b=0;b<=1;b++){
			for (int c=0;c<=1;c++)
			{
				bool d = (a||b)||c;
				cout <<a<<"&"<<b<<"&"<<c<<"="<<d<<endl;
			}
		}
	}
}



int main()
{	cout<<"###### Problem 1 ######"<<endl;
	calculateArea();
	cout<<"###### Problem 2 ######"<<endl;
	MinMaxTable();
	cout<<"###### Problem 3 ######"<<endl;
	fibonacciSequence();
	cout<<"###### Problem 4 ######"<<endl;
	multiplicationTable();
	cout<<"###### Problem 5 ######"<<endl;
	truthTable();
	return 0;
}


