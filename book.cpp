/**
* Librray Managemnet system v1.0
* @author  Jithin prdaeep, Abhilash C
* @version 1.60, 05/05/04
* book class
*/

#include "lms.h"
using namespace std;

class book
{
public:
	int bnom, price, cup, stat;
	char bname[23], aname[23], pname[23], date[10], type[13];
	void entry()
	{
		stat = 0;
		gotoxy(18, 2);
		textcolor(2);
		cout << "*** INITIAL BOOK DETAILS ENTRY LIST ***";
		for (int i = 6; i <= 20; i += 2)
		{
			gotoxy(27, i);
			cout << "                                   ";
		}
		gotoxy(21, 25);
		cout << "                                      ";
		delay(500);
		gotoxy(27, 6);
		cout << "_";
		gotoxy(27, 6);
		cout << bnom;
		gotoxy(27, 8);
		cout << "_";
		gotoxy(27, 8);
		gets(bname);
		gotoxy(27, 10);
		cout << "_";
		gotoxy(27, 10);
		gets(aname);
		gotoxy(27, 12);
		cout << "_";
		gotoxy(27, 12);
		gets(pname);
		gotoxy(27, 14);
		cout << "_";
		gotoxy(27, 14);
		gets(type);
		gotoxy(27, 16);
		cout << "_";
		gotoxy(27, 16);
		gets(date);
		gotoxy(27, 18);
		cout << "_";
		gotoxy(27, 18);
		cin >> price;
		gotoxy(27, 20);
		cout << "_";
		gotoxy(27, 20);
		cin >> cup;
	}

	void fulldisplay()
	{
		gotoxy(18, 2);
		textcolor(2);
		cout << "     *** BOOK DETAILS DISPLAY LIST ***       ";
		gotoxy(27, 6);
		cout << bnom;
		gotoxy(27, 8);
		puts(bname);
		gotoxy(27, 10);
		puts(aname);
		gotoxy(27, 12);
		puts(pname);
		gotoxy(27, 14);
		puts(type);
		gotoxy(27, 16);
		puts(date);
		gotoxy(27, 18);
		cout << price;
		gotoxy(27, 20);
		cout << cup;
	}
	void modify()
	{
		entry();
	}
}ob, ob1;

