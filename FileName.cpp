#include <iostream>
using namespace std;

class Object
{
public:
	virtual void BeginPlay();
};

class Actor :public Object
{
public:
	 virtual void BeginPlay() override;
};

class Pawn:public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	Object* obj = new Object;
	obj->BeginPlay();	

	cout << "\n----------------------\n";

	Actor* act = new Actor;
	act->BeginPlay();

	cout << "\n----------------------\n";

	Pawn* paw = new Pawn;
	paw->BeginPlay();

	cout << "\n----------------------\n";

	delete obj;
	delete act;
	delete paw;

	system("pause");
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay()" << endl;
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay()" << endl;
	Object::BeginPlay();
}

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay()" << endl;
	Actor::BeginPlay();
}
