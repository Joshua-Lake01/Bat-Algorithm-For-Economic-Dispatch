#include "NewMainForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BATPROJECT::NewMainForm form;
	Application::Run(% form);
}