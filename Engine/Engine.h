#pragma once
#include <time.h>
#include <fstream>
#include <iostream>
#include <string.h>
#include <string>

namespace EngineRuntime {
	class Engine
	{
	private:
		int tick;
		void SaveFile();
		void LoadFile();

	public:
		bool Update();
		void Load();
		void Save();

	};


}