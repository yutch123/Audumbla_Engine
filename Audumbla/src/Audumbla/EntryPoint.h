#pragma once


#ifdef ADMBL_PLATFORM_WINDOWS

extern Audumbla::Application* Audumbla::CreateApplication(); // возвращает указатель на приложение Audumbla

int main(int argc, char** argv) // argc - кол-во параметров, argv - массив указателей на строки
{
	printf("Audumbla Engine run");
	auto app = Audumbla::CreateApplication();
	app->Run();
	delete app;
}

#endif