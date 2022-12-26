#include "MyForm.h"
#include <Windows.h>

using namespace Sudoku;

enum DIFFICULTY {EASY, NORMAL, HARD};

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return EXIT_SUCCESS;
}