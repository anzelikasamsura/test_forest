#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include "Res_test.h"
using namespace std;
void File_save(int RES) {
	ofstream f;
	f.open("Res_test.txt");
	f << "���������� �����: \n"<<RES<<" �������� ���������� �� 10\n\n";
	if (RES == 0) { f << "�� ���������������, 0 ��� ��� �� �������."; }
	else if ( RES > 0 && RES < 4) { f << "��� �������� ������ ����������, ����� �������� ������ ����������."; }
	else if ( RES > 3 && RES < 8) { f << "������� ����������. �� ����� ������, �� �� ����������."; }
	else if ( RES > 7 && RES < 10) { f << "�� ����� ������ ������ ������� ������������ ����!"; }
	else if (RES == 10) { f << "���������!"; }

	f.close();
}