#pragma once

#ifdef TNSE_PLATFORM_WINDOWS

extern TNSE::Application* TNSE::CreateApplication();

int main(int argc, char** argv)
{
	printf("It's Thursday Night\n");
	auto app = TNSE::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error TNSE only supports Windows currently
#endif