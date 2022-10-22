#include "Nivel_facil.h"
using  namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	PRYAVANZADA01::Nivel_facil form;
	Application::Run(% form);
	return 0;

}