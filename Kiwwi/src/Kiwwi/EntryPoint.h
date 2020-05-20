#pragma once

#ifdef KW_PLATFORM_WINDOWS

extern Kiwwi::Application* Kiwwi::CreateApplication();

int main(int argc, char** argv) {
	auto app = Kiwwi::CreateApplication();
	app->Run();
	delete app;
}

#endif
