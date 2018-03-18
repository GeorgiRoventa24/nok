#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
//using std::string; 

class Masina //clasa abstracta
{
	private:
		int vitezaMedie;
		char *culoare;
	public:
//		~Masina();

		Masina(int vitezaMedie,char *culoare) 
		{
			this->vitezaMedie = vitezaMedie;
			this->culoare = new char[strlen(culoare)+1];
			strcpy(this->culoare, culoare);
					}
	   
	   virtual void afisare()
	   {
		   cout << "Viteza medie masinii este: " << this->vitezaMedie<< "km/h."<<endl;
		   cout << "Culoarea masinii este: " << this->culoare<<endl;
	   }
		virtual void anul_fabricatiei(int a) = 0;
};
class Megane :public Masina
{	
	protected:
		bool hasAutomaticDoors;
	public:Megane(int vitezaMedie, char *culoare,bool hasAutomaticDoors) :Masina(vitezaMedie,culoare)
	{
		
		this->hasAutomaticDoors = hasAutomaticDoors;
	}
    ~Megane();
	 void afisare()
	{
		   Megane::afisare();
		   cout << "Has automatic doors: " << this->hasAutomaticDoors<<endl;
	}
	  void anul_fabricatiei(int an) 
	   {
		   cout << "Anul fabricatiei: " << an << "."<< endl;
	   }
};
class Audi :public Masina
{

	private:
		bool hasAutomaticDoors, automatPilot;
	public:
	Audi (int vitezaMedie, char *culoare, bool automatPilot ,bool hasAutomaticDoors) :Masina(vitezaMedie,culoare)
	{
		this->automatPilot = automatPilot;
		this->hasAutomaticDoors = hasAutomaticDoors;
	}
    ~Audi();
	 void afisare()
	{
		   Masina::afisare();
		   cout << "Pilot automat? : " << this->automatPilot;
		   cout << "Usi automate? : " << this->hasAutomaticDoors<<endl;
	}
	void anul_fabricatiei(int an) 
	   {
		   cout << "Anul fabricatiei: " << an << "." << endl;
	   }
};
int main()
{
	Masina *Megane1 = new Megane(100, "gri", 1);
	Masina *Megane2 = new Megane(110, "alb", 0);
	Masina *Audi1 = new Audi(90, "negru", 1, 1);
	Masina *Audi2 = new Audi(70, "rosie", 1, 0);
	
	//Masina *a, *b;
	//	b=a;//calls assignment operator
	//Masina *c=a; //calls copy constructor
	
	Megane1->afisare();
	Megane1->anul_fabricatiei(2007);
	Megane2->afisare();
	Megane2->anul_fabricatiei(2011);
	Audi1->afisare();
	Audi1->anul_fabricatiei(2014);
	Audi2->afisare();
	Audi2->anul_fabricatiei(2009);
	
	return 0;
}
