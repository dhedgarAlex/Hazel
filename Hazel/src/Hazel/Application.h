#pragma once

#include <iostream>

namespace Hazel {

	class _declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();
		void run();
	}; // !Application

} // !namespace
