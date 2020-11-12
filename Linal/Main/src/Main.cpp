#include "Main.h"
#include "Controllers/MainController.h"
using namespace Main;

int main(int argc, char* args[])
{
	Controllers::MainController* main = new Controllers::MainController();
	main->Init();
	return 0;
}

