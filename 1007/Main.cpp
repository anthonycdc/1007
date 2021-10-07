#include <iostream>
using namespace std;

// Init function. Sets up SDL and all of its subsystems.

void Init()
{
	cout << "Initializing game..." << endl;
}
// run function. Contains the primary loop.
void HandleEvents()
{
	cout << "Handleing..." << endl;
}
void Update()
{
	cout << "Processing..." << endl;
}
void Render()
{
	cout << "Rendering..." << endl;
}
int Run()
{
	bool isRunning = true;
	char input;

	Init();
	while (isRunning) // game loop.
	{
		HandleEvents(); //Input.
		Update(); //Processing.
		Render(); //Output.
		cout << "Do you want to quit? [y/n]: ";
		cin >> inupt;
		if ( input == 'y')
	}

}
// main function. enter point of every C++ program.
int main()
{
	return Run();
}

