#include<iostream>
using namespace std;

class Human
{
	public:
	int Eyes;
	int Hands;
	int Legs;
	void Watching()
	{
		cout<<"Watching T.V. through eyes: "<<this->Eyes<<endl;
	}
	void Holding()
	{
		cout<<"holding dumbbell in the hands: "<<this->Hands<<endl;
	}
	void Walking()
	{
		cout<<"walking in the park: "<<this->Legs<<endl;
	}
};

int main()
{
	Human Surajda;
	Surajda.Eyes=2;
	Surajda.Hands=3;
	Surajda.Legs=1;
	Surajda.Watching();
	Surajda.Holding();
	Surajda.Walking();
}
