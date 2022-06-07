#include "Engine.h"


using namespace EngineRuntime;

	int tick = 0;

	// Lets you load up your last run.
	void Engine::LoadFile()
	{
		std::fstream f;
		// Find the file, grab it, save the file. Try and use a custom binary

	}

	bool Engine::Update()
	{
		bool play = true;
		std::string input;
		while (play)
		{
			std::cout << "Update";
			tick++;
			std::cin >> input;
		}

		return play;
	}

	void Engine::SaveFile()
	{
		std::fstream f;
	}




