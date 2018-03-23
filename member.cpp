/**
* Librray Managemnet system v1.0
* @author  Jithin prdaeep, Abhilash C
* @version 1.60, 05/05/04
* member class
*/

#include "lms.h"
using namespace std;

class member
{
public:
	int mid, age, stat;
	char mname[20], fname[20], add[23], mdate[10], sex[6], job[15];
	void mementry()
	{
		gotoxy(18, 2);
		cout << "*** INITIAL MEMBER DETAILS ENTRY LIST ***";
		gotoxy(21, 25);
		cout << "                                      ";
		delay(500);
		gotoxy(27, 6);
		cout << "_";
		gotoxy(27, 6);
		cout << mid;
		gotoxy(27, 8);
		cout << "_";
		gotoxy(27, 8);
		gets(mname);
		gotoxy(27, 10);
		cout << "_";
		gotoxy(27, 10);
		gets(fname);
		gotoxy(27, 12);
		cout << "_";
		gotoxy(27, 12);
		gets(add);
		gotoxy(27, 14);
		cout << "_";
		gotoxy(27, 14);
		gets(sex);
		gotoxy(27, 16);
		cout << "_";
		gotoxy(27, 16);
		gets(job);
		gotoxy(27, 18);
		cout << "_";
		gotoxy(27, 18);
		cin >> age;
		gotoxy(27, 20);
		cout << "_";
		gotoxy(27, 20);
		gets(mdate);
	}
	void memdisplay()
	{
		gotoxy(18, 2);
		cout << "*** INITIAL MEMBER DETAILS DISPLAY LIST ***";
		gotoxy(21, 25);
		cout << "                                  ";
		gotoxy(27, 6);
		cout << mid;
		gotoxy(27, 8);
		puts(mname);
		gotoxy(27, 10);
		puts(fname);
		gotoxy(27, 12);
		puts(add);
		gotoxy(27, 14);
		puts(sex);
		gotoxy(23, 25);
		gotoxy(27, 16);
		puts(job);
		gotoxy(27, 18);
		cout << age;
		gotoxy(27, 20);
		puts(mdate);
	}
}mob;