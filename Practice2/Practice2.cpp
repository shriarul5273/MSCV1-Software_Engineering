#include <iostream>

using namespace std;



void menu();
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
int* max_array(int* array,int n);
void problem6();
void problem7();
int* sort_pointer(int* pr,int n);



int main()
{
	cout<<"###### Calculator ######\nProblem 1"<<endl;
	problem1();
	cout<<"###### Min,Max,Frequency of 10 integers ######\nProblem 2"<<endl;
	problem2();
	cout<<"###### Sort 10 integer values  ######\nProblem 3"<<endl;
	problem3();
	cout<<"###### Pascal triangle  ######\n roblem 4"<<endl;
	problem4();
	cout<<"###### Max value from Pointers  ######\nProblem 5"<<endl;
	problem5();
	cout<<"###### Five integer from keyword ######\nProblem 6"<<endl;
	problem6();
	cout<<"###### Sort value from Pointers ######\nProblem7"<<endl;
	problem7();
	return 0;
}


// Problem 1 calculator
void problem1()
{
	int operation;
	char cal;
	float a,b;
	do 
	{
		menu();
		cin>>operation;
		if (operation>5 || operation<1)
		{
			cout<<"Invalid Operation"<<endl;
		}
		else
		{	cout<<"Enter the two numbers:";	
			cin>>a>>b;
			cout<<"Result of ";
			switch(operation)
			{
				case 1: cout<<"Addition :"<<a+b<<endl;
						break;

				case 2: cout<<"Subtraction :"<<a-b<<endl;
						break;

				case 3: cout<<"Multiplication "<<a*b<<endl;
						break;
				case 4: 
						cout<<"Division :";
						if (b == 0) {cout<<" second number cannot be Zero"<<endl;}
						else {cout<<a/b<<endl;}
						break;

				case 5: 
						cout<<"Modulus :";
						if (b == 0) {cout<<" second number cannot be Zero"<<endl;}
						else {cout<<int(a)%int(b)<<endl;}
						break;
			}
		}
		cout <<"Enter 'y' or 'Y' to Continue or anything else to terminate"<<endl;
		cin>>cal;


	}while (cal=='Y' || cal == 'y');
}

// Helper for problem1
void menu()
{
	cout<<"Menu"<<endl;
	cout<<"Enter 1 for Addition"<<endl;
	cout<<"Enter 2 for Subtraction"<<endl;
	cout<<"Enter 3 for Multiplication"<<endl;
	cout<<"Enter 4 for Division"<<endl;
	cout<<"Enter 5 for Modulus"<<endl;
	cout<<"Enter the operation of Choice:"<<endl;

}



//Min, Max and Frequency
void problem2()
{
	int array[10];
	cout <<"Enter ten integers one by one"<<endl;
	for (int i=0;i<10;i++)
	{
		cin>>array[i];
	}
	int min = array[0];
	int max = array[0];
	for (int i=0;i<10;i++)
	{
		if (min>array[i])
		{
			min = array[i];
		}
	} 
	for (int i=0;i<10;i++)
	{
		if (max<array[i])
		{
			max = array[i];
		}
	} 

	cout<<"Greatest value :"<<min<<endl;
	cout<<"Smallest value :"<<max<<endl;

	int array2d[10][2];

	for(int i=0;i<2;i++)
	{
   		for(int j=0;j<10;j++)
   		{
   			array2d[j][i]=0;
     		array2d[0][0]=1;
     	}
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{	
			if(array[i]==array[j+1])
			{
				++array2d[i][0];
				array2d[i][1]=array[i];
			}
		}
	}
	int l=0;
	max=array2d[0][0];
   for(int k=0;k<10;k++)
   {
    	if(max<array2d[k][0])
    	{
    		max=array2d[k][0];
    		l=k;
    	}
    }
    cout<<"The max Frequency is for "<<array2d[l][1]<<" occurs "<<max<<endl;
}


// Sort 10 integer values 
void problem3()
{
	int array[10],temp;
	cout <<"Enter ten integers one by one"<<endl;
	for (int i=0;i<10;i++)
	{
		cin>>array[i];
	}

	for(int i=0;i<10;i++)
	{		
		for(int j=i+1;j<10;j++)
		{
			if(array[i]>array[j])
			{
				temp  = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout<<"Integers sorted in Ascending order:"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<"\nIntegers sorted in Descending order:"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<array[9-i]<<" ";
	}
	cout<<"\n";
}


//Pascal triangle
void problem4()
{
	int size;
    cout << "Enter the Size of the pascal Triangle" << endl;
    cin>>size;
    int array[size][size];
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            if (i == j || j == 0) 
            {
                array[i][j] = 1;
            }
            else 
            {
                array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
            }
            cout << array[i][j] << " ";
        }
        cout<<"\n";

    }
}


//Pointer : max value 
void problem5()
{
	int n;
	cout<<"Enter number of data values:  ";
	cin>>n;
	int array[n];
	int *pr = array;
	for (int i=0;i<n;i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>*(array+i);
	}
	int *max = max_array(array,n);

    cout << "The max is " << *max << "."<<endl;
}

// Helper function for problem 5 
int* max_array(int* array,int n)
{
	int max = array[0];
	int index ;
	for (int i=0;i<n;i++)
	{
		if (max<array[i])
		{
			max = array[i];
			index = i;

		}
	} 
	return array+index;
}

// five integer values from keyword
void problem6()
{
	int array[5];
	int *pr = array;
	cout<<"Enter five numbers separated by space:";
	cin>>*pr>>*(pr+1)>>*(pr+2)>>*(pr+3)>>*(pr+4);
	for (int i=0;i<5;i++)
	{
		cout<<array[i]<<" ";

	}
	cout<<"\n";

}


//Sort an array of ten integer values in ascending order
void problem7()
{
	int n;
	cout<<"Enter number of data values:  ";
	cin>>n;
	int array[n];
	int *pr = array;
	for (int i=0;i<n;i++)
	{
		cin>>*(pr+i);

	}
	cout<<"Pointers sorted in Ascending order:";
	int* lo = sort_pointer(pr,n);
	for(int i=0;i<n;i++)
	{
		cout<<*(lo+i)<<" ";
	}
	cout<<"\n";

}


//Helper for problem7
int* sort_pointer(int* pr,int n)
{
	int* temp;
	for(int i=0;i<n;i++)
	{		
		for(int j=i+1;j<n;j++)
		{
			if(*(pr+i)>*(pr+j))
			{
				*temp  = *(pr+i);
				*(pr+i) = *(pr+j);
				*(pr+j) = *temp;
			}
		}
	}
	return pr;
}
