#include "MyForm.h"

#include <Windows.h>

using namespace Test; //название проекта

[STAThread]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

System::Void Test::MyForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Интерфейс программы", "О программе");
	return System::Void();
}


System::Void Test::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void Test::MyForm::Var1_of_location() {
	////////Рассчет направляющих////////
	for (double i = A / 2 + 0.3; i < A; i += 1.2)
	{
		line_of_N++;
		if (A - i < 0.6)
			flag1_for_K = true;
	}
	for (double i = A / 2 - 0.9; i > 0; i -= 1.2)
	{
		line_of_N++;
		if (i < 0.6)
			flag2_for_K = true;
	}
	N = (int)ceil((line_of_N * B) / 3.6);

	P = line_of_N;

	////////Рассчет длинных поперечные////////
	int count_of_lineD = 0;
	for (double i = B / 2 + 0.3; i < B; i += 0.6)  //Посчитали, сколько нужно поперечных на половину одной колеи
		count_of_lineD++;
	count_of_lineD *= 2; // количество поперечных на одну колею
	D = count_of_lineD * (int)ceil(A / 1.2);


	////////Рассчет коротких поперечных////////
	int count_of_lineK = (line_of_N - 1);
	flag1_for_K == false ? count_of_lineK++ : count_of_lineK;
	flag2_for_K == false ? count_of_lineK++ : count_of_lineK;
	K = count_of_lineK * (int)ceil(B / 0.6);
}

System::Void Test::MyForm::Var2_of_location() {
		////////Рассчет направляющих////////
		int line_of_N = 0; // кол-во линий для направляющих
		for (double i = A / 2; i < A; i += 1.2)
		{
			line_of_N++;
			if (A - i < 0.6)
				flag1_for_K = true;
		}
		for (double i = A / 2 - 1.2; i > 0; i -= 1.2)
		{
			line_of_N++;
			if (i < 0.6)
				flag2_for_K = true;
		}
		N = (int)ceil((line_of_N * B) / 3.6);

		P = line_of_N;

		////////Рассчет длинных направляющих////////
		int count_of_lineD = 0;
		for (double i = B / 2; i < B; i += 0.6)  //Посчитали, сколько нужно поперечных на половину одной колеи
			count_of_lineD++;
		count_of_lineD *= 2; // количество поперечных на одну колею
		count_of_lineD--;
		D = count_of_lineD * (int)ceil(A / 1.2);

		////////Рассчет коротких поперечных////////
		int count_of_lineK = (line_of_N - 1);
		flag1_for_K == false ? count_of_lineK++ : count_of_lineK;
		flag2_for_K == false ? count_of_lineK++ : count_of_lineK;
		K = count_of_lineK * (int)ceil(B / 0.6);
	}

System::Void Test::MyForm::Var3_of_location(){
	////////Рассчет направляющих////////
	int line_of_N = 0; // кол-во линий для направляющих
	for (double i = A; i > 0; i -= 1.2)
	{
		line_of_N++;
		if (i < 0.6)
			flag2_for_K = true;
	}
	N = (int)ceil((line_of_N * B) / 3.6);

	P = line_of_N - 1;

	////////Рассчет длинных поперечных////////
	int count_of_lineD = 0;
	for (double i = B / 2 + 0.3; i < B; i += 0.6)  //Посчитали, сколько нужно поперечных на половину одной колеи
		count_of_lineD++;
	count_of_lineD *= 2; // количество поперечных на одну колею
	D = count_of_lineD * (int)ceil(A / 1.2);

	////////Рассчет коротких поперечных////////
	int count_of_lineK = (line_of_N - 1);
	flag2_for_K == false ? count_of_lineK++ : count_of_lineK;
	K = count_of_lineK * (int)ceil(B / 0.6);
}

System::Void Test::MyForm::Var4_of_location() {
	////////Рассчет направляющих////////
	int line_of_N = 0; // кол-во линий для направляющих
	for (double i = A; i > 0; i -= 1.2)
	{
		line_of_N++;
		if (i < 0.6)
			flag2_for_K = true;
	}
	N = (int)ceil((line_of_N * B) / 3.6);

	P = line_of_N - 1;

	////////Рассчет длинных поперечных////////
	int count_of_lineD = 0;
	for (double i = B / 2; i < B; i += 0.6)  //Посчитали, сколько нужно поперечных на половину одной колеи
		count_of_lineD++;
	count_of_lineD *= 2; // количество поперечных на одну колею
	count_of_lineD--;
	D = count_of_lineD * (int)ceil(A / 1.2);

	////////Рассчет коротких поперечных////////
	int count_of_lineK = (line_of_N - 1);
	flag2_for_K == false ? count_of_lineK++ : count_of_lineK;
	K = count_of_lineK * (int)ceil(B / 0.6);
}

System::Void Test::MyForm::Var5_of_location() {
	////////Рассчет направляющих////////
	int line_of_N = 0; // кол-во линий для направляющих
	for (double i = A / 2 - 0.3; i < A; i += 1.2)
	{
		line_of_N++;
		if (A - i < 0.6)
			flag1_for_K = true;
	}
	for (double i = A / 2 - 1.5; i > 0; i -= 1.2)
	{
		line_of_N++;
		if (i < 0.6)
			flag2_for_K = true;
	}
	N = (int)ceil((line_of_N * B) / 3.6);

	P = line_of_N;

	////////Рассчет длинных поперечных////////
	int count_of_lineD = 0; // количество поперечных на одну колею
	for (double i = 0.6; i < B; i += 0.6)  //Посчитали, сколько нужно поперечных на половину одной колеи
		count_of_lineD++;
	D = count_of_lineD * (int)ceil(A / 1.2);

	////////Рассчет коротких поперечных////////
	int count_of_lineK = line_of_N - 1;
	flag1_for_K == false ? count_of_lineK++ : count_of_lineK;
	flag2_for_K == false ? count_of_lineK++ : count_of_lineK;
	K = count_of_lineK * (int)ceil(B / 0.6);
}

System::Void Test::MyForm::Var6_of_location() {
	////////Рассчет направляющих////////
	int line_of_N = 0; // кол-во линий для направляющих
	for (double i = A / 2; i < A; i += 1.2)
	{
		line_of_N++;
		if (A - i < 0.6)
			flag1_for_K = true;
	}
	for (double i = A / 2 - 1.2; i > 0; i -= 1.2)
	{
		line_of_N++;
		if (i < 0.6)
			flag2_for_K = true;
	}
	N = (int)ceil((line_of_N * B) / 3.6);

	P = line_of_N;

	////////Рассчет длинных поперечных////////
	int count_of_lineD = 0; // количество поперечных на одну колею
	for (double i = 0.6; i < B; i += 0.6)  //Посчитали, сколько нужно поперечных на половину одной колеи
		count_of_lineD++;
	D = count_of_lineD * (int)ceil(A / 1.2);

	////////Рассчет коротких поперечных////////
	int count_of_lineK = line_of_N - 1;
	flag1_for_K == false ? count_of_lineK++ : count_of_lineK;
	flag2_for_K == false ? count_of_lineK++ : count_of_lineK;
	K = count_of_lineK * (int)ceil(B / 0.6);
}
