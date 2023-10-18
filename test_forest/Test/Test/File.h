#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include "Res_test.h"
using namespace std;
void File_save(int RES) {
	ofstream f;
	f.open("Res_test.txt");
	f << "–езультаты теста: \n"<<RES<<" вопросов правильных из 10\n\n";
	if (RES == 0) { f << "Ќе расстраивайтесь, 0 это еще не страшно."; }
	else if ( RES > 0 && RES < 4) { f << "Ёто довольно низкий показатель, стоит почитать больше литературы."; }
	else if ( RES > 3 && RES < 8) { f << "—редний показатель. ¬ы много знаете, но не достаточно."; }
	else if ( RES > 7 && RES < 10) { f << "¬ы очень хорошо знаете природу собственного кра€!"; }
	else if (RES == 10) { f << "ѕромастер!"; }

	f.close();
}