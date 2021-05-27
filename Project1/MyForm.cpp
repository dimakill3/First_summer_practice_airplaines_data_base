#include "MyForm.h"
#include "auth.h"

int game_on = 0;

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::auth form;
	Application::Run(%form);
}