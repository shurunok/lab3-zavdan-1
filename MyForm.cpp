#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Lb3z1::MyForm form;// ��'� ������ �������, ���������, myproekt ��� ��.
    Application::Run(% form);
}
