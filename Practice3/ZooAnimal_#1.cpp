#include <iostream>
#include <string>
#include <cstring>

using namespace std;






class ZooAnimal  
{
	private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
	    void Destroy (); // destroy function
	    char* reptName ();
		//Task 1
		// create the class with the constructor
		void Create(char *st,int a,int b, int c)
		{
		    this->name = st;
		    this->cageNumber = a;
		    this->weightDate = b;
		   	this->weight = c;
		}
		//Task 2
	    // -------- member function to return the number of days
	    // -------- since the animal was last weighed
	    int daysSinceLastWeighed (int today)
	    {
	    	int startday, thisday;
		  	thisday = today/100*30 + today - today/100*100;
		   	startday = weightDate/100*30 + weightDate - weightDate/100*100;
		   	if (thisday < startday) 
		   		thisday += 360;
		   	return (thisday-startday);
	  	}

	    // prints all info in the class
	    void info()
	    {
	    	cout<<"The name is "<<name<<endl;
	    	cout<<"Cage Number is "<<cageNumber<<endl;
	    	cout<<"Weight Date is "<<weightDate<<endl;
	    	cout<<"Weight is "<<weight<<endl;
	    }


	};

   void ZooAnimal::Destroy ()
   {	
    delete [] name;
   }

   // -------- member function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }
   




int main()
{
	/* code */
	//Task 1
	ZooAnimal animal1;
	char i[]="lion";
	animal1.Create(i,15,16,120);
	animal1.info();
	//Task 2
	char statement[] = "Number of days since the animal was last weighed is ";
	cout<<statement<<animal1.daysSinceLastWeighed(1027)<<endl;
    cout<<"\n\n";
	//Task 3
	ZooAnimal bozo;
    char k[]="Bozo";
    bozo.Create (k, 408, 1027, 400);
    cout << "This animal's name is " << bozo.reptName() << endl;
    bozo.Destroy ();


	return 0;
}