#include <iostream>
#include <string>
#include <cstring>

using namespace std;






enum scale {ounces, kilograms};

class ZooAnimal  
{
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void changeWeight (int pounds);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      //Task 1
      inline int reptWeightDate(){return weightDate;};
      //Task 2
      inline void changeWeightDate (int today){this->weightDate=today;};
      //Task 3
      void isMotherOf (ZooAnimal& mom){this->mother=&mom;};
      int daysSinceLastWeighed (int today);
      void info();
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
   


void ZooAnimal::Create(char *st,int a,int b, int c)
{
	this->name = st;
	this->cageNumber = a;
	this->weightDate = b;
	this->weight = c;
}


void ZooAnimal::info()
{
   	cout<<"The name is "<<name<<endl;
   	cout<<"Cage Number is "<<cageNumber<<endl;
   	cout<<"Weight Date is "<<weightDate<<endl;
   	cout<<"Weight is "<<weight<<endl;
}




int main()
{
	/* code */
	//Task 3
	char i[]="child Lion";
	char k[]="Lion mom";
	ZooAnimal mother,child;
    child.Create(i, 6554, 5653, 120);
    mother.Create(k, 1486, 230, 220);
    mother.isMotherOf(child);
    child.info();
    mother.info();
    cout << "child of "<< mother.reptName()<<" name is " << child.reptName() << endl;



	return 0;
}