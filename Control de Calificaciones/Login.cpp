#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ControldeCalificaciones::Login form;
	Application::Run(%form);
}

