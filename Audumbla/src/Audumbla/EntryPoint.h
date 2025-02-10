#pragma once


#ifdef ADMBL_PLATFORM_WINDOWS

extern Audumbla::Application* Audumbla::CreateApplication(); // ���������� ��������� �� ���������� Audumbla

int main(int argc, char** argv) // argc - ���-�� ����������, argv - ������ ���������� �� ������
{
	printf("Audumbla Engine run");
	auto app = Audumbla::CreateApplication();
	app->Run();
	delete app;
}

#endif