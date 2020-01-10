#include<iostream>
#include<time.h>
#include<windows.h>
#include<iomanip>
using namespace std;
void second() {
	srand(time(NULL));
	int FirstUserCube, SecondUserCube, FirstComputerCube, SecondComputerCube, SumCubesUser = 0, SumComputerCubes = 0, n = 1;
	for (int i = 0; i < 3; i++) {
		switch (n) {
		case 1:
			cout << i + 1 << " attempt\n";
			system("color 0B");
			cout << "User:\n";
			system("pause");
			FirstUserCube = rand() % 5 + 1;
			SecondUserCube = rand() % 5 + 1;
			cout << setw(1) << setfill((char)201) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)203) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)187) << "" << endl;
			cout << setw(1) << setfill((char)186) << "";
			cout << "     1st     ";
			cout << setw(1) << setfill((char)186) << "";
			cout << "     2nd     ";
			cout << setw(1) << setfill((char)186) << "" << endl;
			cout << setw(1) << setfill((char)204) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)206) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)185) << "" << endl;
			cout << setw(1) << setfill((char)186) << "";
			cout << "      " << FirstUserCube << "      ";
			cout << setw(1) << setfill((char)186) << "";
			cout << "      " << SecondUserCube << "      ";
			cout << setw(1) << setfill((char)186) << "" << endl;
			cout << setw(1) << setfill((char)204) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)202) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)185) << "" << endl;
			cout << setw(1) << setfill((char)186) << "";
			if ((FirstUserCube + SecondUserCube) >= 10) cout << "  Sum points - " << FirstUserCube + SecondUserCube << " points   ";
			else cout << "   Sum points - " << FirstUserCube + SecondUserCube << " points   ";
			cout << setw(1) << setfill((char)186) << "" << endl;
			cout << setw(1) << setfill((char)200) << "";
			cout << setw(27) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)188) << "" << endl;
			SumCubesUser += (FirstUserCube + SecondUserCube);
			system("pause");
			system("cls");
		case 2:
			cout << i + 1 << " attempt\n";
			system("color 0D");
			cout << "Computer:\n";
			system("pause");
			FirstComputerCube = rand() % 5 + 1;
			SecondComputerCube = rand() % 5 + 1;
			cout << setw(1) << setfill((char)201) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)203) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)187) << "" << endl;
			cout << setw(1) << setfill((char)186) << "";
			cout << "     1st     ";
			cout << setw(1) << setfill((char)186) << "";
			cout << "     2nd     ";
			cout << setw(1) << setfill((char)186) << "" << endl;
			cout << setw(1) << setfill((char)204) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)206) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)185) << "" << endl;
			cout << setw(1) << setfill((char)186) << "";
			cout << "      " << FirstComputerCube << "      ";
			cout << setw(1) << setfill((char)186) << "";
			cout << "      " << SecondComputerCube << "      ";
			cout << setw(1) << setfill((char)186) << "" << endl;
			cout << setw(1) << setfill((char)204) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)202) << "";
			cout << setw(13) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)185) << "" << endl;
			cout << setw(1) << setfill((char)186) << "";
			if ((FirstComputerCube + SecondComputerCube) >= 10) cout << "  Sum points - " << FirstComputerCube + SecondComputerCube << " points   ";
			else cout << "   Sum points - " << FirstComputerCube + SecondComputerCube << " points   ";
			cout << setw(1) << setfill((char)186) << "" << endl;
			cout << setw(1) << setfill((char)200) << "";
			cout << setw(27) << setfill((char)205) << "";
			cout << setw(1) << setfill((char)188) << "" << endl;
			SumComputerCubes += (FirstComputerCube + SecondComputerCube);
			system("pause");
			system("cls");
		default: break;
		}
	}
	system("color 0C");
	cout << setw(1) << setfill((char)201) << "";
	cout << setw(21) << setfill((char)205) << "";
	cout << setw(1) << setfill((char)187) << "" << endl;
	cout << setw(1) << setfill((char)186) << "";
	cout << "      Sum points     ";
	cout << setw(1) << setfill((char)186) << "" << endl;
	cout << setw(1) << setfill((char)204) << "";
	cout << setw(10) << setfill((char)205) << "";
	cout << setw(1) << setfill((char)203) << "";
	cout << setw(10) << setfill((char)205) << "";
	cout << setw(1) << setfill((char)185) << "" << endl;
	cout << setw(1) << setfill((char)186) << "";
	cout << "   User   ";
	cout << setw(1) << setfill((char)186) << "";
	cout << " Computer ";
	cout << setw(1) << setfill((char)186) << "" << endl;
	cout << setw(1) << setfill((char)204) << "";
	cout << setw(10) << setfill((char)205) << "";
	cout << setw(1) << setfill((char)206) << "";
	cout << setw(10) << setfill((char)205) << "";
	cout << setw(1) << setfill((char)185) << "" << endl;
	cout << setw(1) << setfill((char)186) << "";
	if ((SumCubesUser) >= 10) cout << "    " << SumCubesUser << "    ";
	else cout << "     " << SumCubesUser << "    ";
	cout << setw(1) << setfill((char)186) << "";
	if ((SumComputerCubes) >= 10) cout << "    " << SumComputerCubes << "    ";
	else cout << "     " << SumComputerCubes << "    ";
	cout << setw(1) << setfill((char)186) << "" << endl;
	cout << setw(1) << setfill((char)200) << "";
	cout << setw(10) << setfill((char)205) << "";
	cout << setw(1) << setfill((char)202) << "";
	cout << setw(10) << setfill((char)205) << "";
	cout << setw(1) << setfill((char)188) << "" << endl;
	if (SumCubesUser > SumComputerCubes) cout << "\n User wins\n";
	else {
		if (SumCubesUser == SumComputerCubes) cout << "\n Dead Heat!\n";
		else cout << "\n Computer wins\n";
	}
	cout << endl;
}