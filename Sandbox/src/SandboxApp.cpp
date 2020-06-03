#include <TNSE.h>

class Sandbox : public TNSE::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

TNSE::Application* TNSE::CreateApplication()
{
	return new Sandbox();
}