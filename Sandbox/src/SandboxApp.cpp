#include <Kiwwi.h>

class Sandbox : public Kiwwi::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Kiwwi::Application* Kiwwi::CreateApplication() {
	return new Sandbox();
}