#pragma once

#include "Application.h"

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char **argv)
{
	// TODO: Move this later.
	Hazel::Log::Init();

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif /* HZ_PLATFORM_WINDOWS */
