#include <Audumbla.h>


class Sandbox : public Audumbla::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Audumbla::Application* Audumbla::CreateApplication()
{
	return new Sandbox();
}