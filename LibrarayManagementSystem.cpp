/**
* Librray Managemnet system v1.0
* @author  Jithin prdaeep, Abhilash C
* @version 1.60, 05/05/04
*/
// LibrarayManagementSystem.cpp : Defines the entry point for the console application.
//

// User defined header file
#include "lms.h"
using namespace std;
void pass();
void start();
void menu();
void menu1();
void main1();
void option();
void extend();
void entry1();
void simdisplay();
void display1();
void edit();
void del();
void mementry1();
void memdisplay1();
void memedit();
void memdel();
void issue();
void retern();
void lost();
void found();

void main()
{
	int a = DETECT, b;
	initgraph(&a, &b, "");
	intro();
	pass();
	main1();

}


void entry1()
{
	int e, j = 0, c;
	char ans = 'y';
	fstream fout;
	fout.open("book.dat", ios::app | ios::binary);
	fout.seekg(0, ios::end);
	c = fout.tellg();
	j = (c / 100);
	while (ans == 'y' || ans == 'Y')
	{
		table();
		ob.bnom = j + 1;
		ob.entry();
		fout.write((char*)&ob, sizeof ob);
		gotoxy(23, 25);
		cout << "               ";
		gotoxy(19, 25);
		cout << "    WOULD YOU LIKE TO CONTINUE(Y/N)";
		ans = getche();
		delay(600);
		gotoxy(23, 25);
		cout << "    TOTAL BOOKS ENTERED = " << j + 1 << "           ";
		j++;
		cleardevice();
	}
	fout.close();
	main1();
}

void mementry1()
{
	int e, j = 0, c;
	char ans = 'y';
	fstream fout;
	fout.open("member.dat", ios::app | ios::binary);
	fout.seekg(0, ios::end);
	c = fout.tellg();
	j = (c / 100);
	while (ans == 'y' || ans == 'Y')
	{
		memtable();
		mob.mid = j + 1;
		mob.mementry();
		mob.stat = 0;
		fout.write((char*)&mob, sizeof mob);
		gotoxy(21, 25);
		cout << "                 ";
		gotoxy(19, 25);
		cout << "    WOULD YOU LIKE TO CONTINUE(Y/N)";
		ans = getche();
		delay(600);
		gotoxy(21, 25);
		cout << "     TOTAL MEMBERS ENTERED = " << j + 1 << "           ";
		j++;
		cleardevice();
	}
	fout.close();
	main1();
}

void simdisplay()
{
	int i, b, c, sno;
	sno = i = b = c = 1;
	char ch = 'y', s[10], stat[3][10] = { "AVAILABLE","ISSUED   ","LOST     " };
	fstream fin;
	fin.open("book.dat", ios::in | ios::binary);
	while (!fin.eof())
	{
		fin.read((char*)&ob, sizeof ob);
		if (ob.stat == 1)
		{
			fin.read((char*)&ob, sizeof ob);
		}
		if (fin.eof())
		{
			break;
		}
		if (ob.stat == 0)
		{
			strcpy(s, stat[0]);
		}
		else if (ob.stat == 2)
		{
			strcpy(s, stat[1]);
		}
		else if (ob.stat == 3)
		{
			strcpy(s, stat[2]);
		}
		switch (b)
		{
		case 1:
			gotoxy(4, 6); cout << sno << ".";
			gotoxy(13, 6); cout << ob.bname;
			gotoxy(35, 6); cout << ob.aname;
			gotoxy(58, 6); cout << s;
			gotoxy(72, 6); cout << ob.cup;
			b++; break;
		case 2:
			gotoxy(4, 8); cout << sno << ".";
			gotoxy(13, 8); cout << ob.bname;
			gotoxy(35, 8); cout << ob.aname;
			gotoxy(58, 8); cout << s;
			gotoxy(72, 8); cout << ob.cup;
			b++; break;
		case 3:
			gotoxy(4, 10); cout << sno << ".";
			gotoxy(13, 10); cout << ob.bname;
			gotoxy(35, 10); cout << ob.aname;
			gotoxy(58, 10); cout << s;
			gotoxy(72, 10); cout << ob.cup;
			b++; break;
		case 4:
			gotoxy(4, 12); cout << sno << ".";
			gotoxy(13, 12); cout << ob.bname;
			gotoxy(35, 12); cout << ob.aname;
			gotoxy(58, 12); cout << s;
			gotoxy(72, 12); cout << ob.cup;
			b++; break;
		case 5:
			gotoxy(4, 14); cout << sno << ".";
			gotoxy(13, 14); cout << ob.bname;
			gotoxy(35, 14); cout << ob.aname;
			gotoxy(58, 14); cout << s;
			gotoxy(72, 14); cout << ob.cup;
			b++; break;
		case 6:
			gotoxy(4, 16); cout << sno << ".";
			gotoxy(13, 16); cout << ob.bname;
			gotoxy(35, 16); cout << ob.aname;
			gotoxy(58, 16); cout << s;
			gotoxy(72, 16); cout << ob.cup;
			b++; break;
		case 7:
			gotoxy(4, 18); cout << sno << ".";
			gotoxy(13, 18); cout << ob.bname;
			gotoxy(35, 18); cout << ob.aname;
			gotoxy(58, 18); cout << s;
			gotoxy(72, 18); cout << ob.cup;
			b++; break;
		case 8:
			gotoxy(4, 20); cout << sno << ".";
			gotoxy(13, 20); cout << ob.bname;
			gotoxy(35, 20); cout << ob.aname;
			gotoxy(58, 20); cout << s;
			gotoxy(72, 20); cout << ob.cup;
			b++; break;
		case 9:
			gotoxy(4, 22); cout << sno << ".";
			gotoxy(13, 22); cout << ob.bname;
			gotoxy(35, 22); cout << ob.aname;
			gotoxy(58, 22); cout << s;
			gotoxy(72, 22); cout << ob.cup;
			b++; break;
		case 10:
			gotoxy(4, 24); cout << sno << ".";
			gotoxy(13, 24); cout << ob.bname;
			gotoxy(35, 24); cout << ob.aname;
			gotoxy(58, 24); cout << s;
			gotoxy(72, 24); cout << ob.cup;
			b = 1; break;
		}
		sno++;
		if (i == (c * 10))
		{
			gotoxy(25, 28);
			cout << "WOULD YOU LIKE TO CONTINUE(Y/N)?";
			ch = getche();
			if (ch == 'n' || ch == 'N')
				main1();
			else
			{
				c = c++;
				cleardevice();
				simtable();
				continue;
			}
		}
		i++;
	}
	gotoxy(19, 28);
	cout << "       NO FURTHER MEMBER AVAILABLE       ";
	getch();
	setcolor(0);
	setfillstyle(10, 4);
	for (int qq = 0, ww = 650; qq < 325; qq += 10, ww -= 10)
	{
		bar3d(qq, 0, qq + 10, 500, 0, 0);
		bar3d(ww, 0, ww - 10, 500, 0, 0);
		delay(10);
	}
	main1();
	gotoxy(25, 28);
	cout << "                                 ";
}

void display1()
{
	int c;
	char ans = 'y';
	fstream fin;
	fin.open("book.dat", ios::in | ios::binary);
	fin.seekg(0, ios::beg);
	while (!fin.eof())
	{
		cleardevice();
		table();
		fin.read((char*)&ob, sizeof ob);
		if (ob.stat == 1)
		{
			fin.read((char*)&mob, sizeof mob);
		}
		if (fin.eof())
		{
			setcolor(0);
			setfillstyle(1, 0);
			bar3d(5, 70, 630, 450, 0, 0);
			gotoxy(18, 2);
			cout << "*** INITIAL BOOK DETAILS DISPLAY LIST ***";
			gotoxy(19, 25);
			cout << "       NO FURTHER BOOKS AVAILABLE        ";
			setcolor(-1);
			rectangle(90, 420, 500, 350);
			rectangle(85, 415, 505, 355);
			rectangle(80, 410, 510, 360);
			setcolor(7);
			setcolor(4);
			outtextxy(255, 365, "MESSAGE BOX");
			load();
			setcolor(0);
			setfillstyle(10, 4);
			for (int qq = 0, ww = 650; qq < 325; qq += 10, ww -= 10)
			{
				bar3d(qq, 0, qq + 10, 500, 0, 0);
				bar3d(ww, 0, ww - 10, 500, 0, 0);
				delay(10);
			}
			main1();
		}
		ob.fulldisplay();
		gotoxy(27, 25);
		if (ob.stat == 0)
		{
			gotoxy(23, 25);
			cout << "      STATUS = AVAILABLE            ";
			getch();
		}
		if (ob.stat == 2)
		{
			gotoxy(23, 25);
			cout << "      STATUS  =  ISSUED          ";
			getch();
		}
		if (ob.stat == 3)
		{
			gotoxy(23, 25);
			cout << "        STATUS = LOST          ";
			getch();
		}
		gotoxy(19, 25);
		cout << "    WOULD YOU LIKE TO CONTINUE(Y/N)";
		ans = getche();
		if (ans == 'n' || ans == 'N')
		{
			fin.close();
			main1();
		}
	}
	fin.close();
	main1();
}

void memdisplay1()
{
	int c;
	char ans = 'y';
	fstream fin;
	fin.open("member.dat", ios::in | ios::binary);
	while (!fin.eof())
	{
		cleardevice();
		memtable();
		fin.read((char*)&mob, sizeof mob);
		if (mob.stat == 1)
		{
			fin.read((char*)&mob, sizeof mob);
		}
		if (fin.eof())
		{
			setcolor(0);
			setfillstyle(1, 0);
			bar3d(5, 70, 630, 450, 0, 0);
			gotoxy(18, 2);
			cout << "*** INITIAL MEMBER DETAILS DISPLAY LIST ***";
			gotoxy(19, 25);
			cout << "       NO FURTHER MEMBER AVAILABLE       ";
			setcolor(-1);
			rectangle(90, 420, 500, 350);
			rectangle(85, 415, 505, 355);
			rectangle(80, 410, 510, 360);
			setcolor(7);
			setcolor(4);
			outtextxy(255, 365, "MESSAGE BOX");
			load();
			setcolor(0);
			setfillstyle(10, 4);
			for (int qq = 0, ww = 650; qq < 325; qq += 10, ww -= 10)
			{
				bar3d(qq, 0, qq + 10, 500, 0, 0);
				bar3d(ww, 0, ww - 10, 500, 0, 0);
				delay(10);
			}
			main1();
		}
		mob.memdisplay();
		gotoxy(19, 25);
		cout << "    WOULD YOU LIKE TO CONTINUE(Y/N)";
		ans = getche();
		if (ans == 'n' || ans == 'N')
		{
			fin.close();
			main1();
		}
	}
	fin.close();
	main1();
}

void issue()
{
	int key;
	char a[30];
	istable();
	gotoxy(2, 14);
	cout << " BOOK NAME      ";
	gotoxy(2, 16);
	cout << " MEMBER ID     ";
	gotoxy(2, 18);
	cout << " DATE OF ISSUE  ";
	gotoxy(18, 2);
	cout << "       *** BOOK DETAILS ISSUE LIST ***       ";
	delay(400);
	gotoxy(22, 25);
	cout << "ENTER THE BOOK NUMBER T0 BE ISSUED";
	gotoxy(23, 12);
	cout << "_";
	gotoxy(23, 12);
	cin >> key;
	fstream fin;
	fin.open("book.dat", ios::in | ios::out);
	fin.seekg((key - 1) * 100);
	fin.read((char*)&ob, sizeof ob);
	if (fin.eof())
	{
		if (key != ob.bnom)
		{
			gotoxy(21, 25);
			cout << "        INVALID BOOK NUMBER           ";
			getch();
			main1();
		}
	}
	gotoxy(23, 14);
	puts(ob.bname);
	if (ob.stat == 0)
	{
		gotoxy(19, 25);
		cout << "                                            ";
		gotoxy(23, 25);
		cout << "        BOOK NO = " << key << "";
		gotoxy(23, 16);
		cout << "_";
		gotoxy(23, 16);
		cin >> iob.mno;
		gotoxy(19, 25);
		cout << "                                            ";
		int e;
		fstream fout;
		fout.open("member.dat", ios::in | ios::binary);
		while (!fout.eof())
		{
			fout.read((char*)&mob, sizeof mob);
			if (mob.mid == iob.mno)
			{
				strcpy(a, mob.mname);
			}
			if (fout.eof())
			{
				e = mob.mid;
				gotoxy(21, 25);
				if (iob.mno <= e)
				{
					break;
				}
				else
				{
					gotoxy(21, 25);
					cout << "        INVALID MEMBER ID     ";
					getch();
					main1();
				}
			}
		}
		fout.close();
		gotoxy(19, 25);
		cout << "                                            ";
		gotoxy(19, 25);
		cout << "MEMBER NAME = ";
		gotoxy(33, 25);
		puts(a);
		gotoxy(23, 18);
		cout << "_";
		gotoxy(23, 18);
		gets(iob.idate);
		gotoxy(23, 25);
		cout << "                                   ";
		iob.bno = key;
		ob.stat = 2;
		fin.seekg((key - 1) * 100);
		fin.write((char*)&ob, sizeof ob);
		gotoxy(18, 25);
		cout << "        BOOK ISSUED SUCCESSFULLY     ";
		getch();
		fin.close();
		fin.open("issue.dat", ios::out | ios::app);
		fin.write((char*)&iob, sizeof iob);
		fin.close();
		cleardevice();
		main1();
	}
	else
	{
		gotoxy(21, 25);
		cout << "         BOOK NOT AVAILABLE            ";
		delay(500);
		getch();
	}
}

void retern()
{
	int key;
	istable();
	gotoxy(18, 2);
	cout << "       *** BOOK DETAILS RETURN LIST ***       ";
	delay(400);
	gotoxy(19, 25);
	cout << "   ENTER THE BOOK NUMBER T0 BE RETURNED";
	gotoxy(23, 12);
	cout << "_";
	gotoxy(23, 12);
	cin >> key;
	fstream fin;
	fin.open("book.dat", ios::in);
	fin.seekg((key - 1) * 100);
	fin.read((char*)&ob, sizeof ob);
	fin.close();
	fin.open("issue.dat", ios::in | ios::out);
	int c = 0;
	while (!fin.eof())
	{
		fin.read((char*)&iob, sizeof iob);
		if (iob.bno == key)
		{
			c = 1;
			if (ob.stat == 2)
			{
				gotoxy(23, 14);
				cout << iob.mno;
				gotoxy(18, 25);
				cout << "                                           ";
				gotoxy(23, 16);
				cout << iob.idate;
				gotoxy(18, 25);
				cout << "BOOK NAME = " << ob.bname;
				gotoxy(23, 18);
				cout << "_";
				gotoxy(23, 18);
				gets(iob.rdate);
				iob.bno = -221;
				ob.stat = 0;
				fin.seekg((key - 1) * 24);
				fin.write((char*)&iob, sizeof iob);
				gotoxy(18, 25);
				cout << "       BOOK RETURNED SUCCESSFULLY          ";
				getch();
				gotoxy(18, 25);
				cout << "                                           ";
				fin.close();
				fin.open("book.dat", ios::in | ios::out);
				fin.seekg((key - 1) * 100);
				fin.write((char*)&ob, sizeof ob);
				fin.close();
				cleardevice();
				main1();
			}
		}
	}
	if (c == 0)
	{
		gotoxy(21, 25);
		cout << "           BOOK NOT ISSUED             ";
		delay(1000);
		main1();
	}
}

void lost()
{
	int key;
	table();
	gotoxy(18, 2);
	cout << "       *** BOOK DETAILS LOST LIST ***       ";
	delay(400);
	gotoxy(19, 25);
	cout << "   ENTER THE BOOK NUMBER THAT IS LOST";
	gotoxy(27, 6);
	cout << "_";
	gotoxy(27, 6);
	cin >> key;
	fstream fin;
	fin.open("book.dat", ios::in | ios::out);
	fin.seekg((key - 1) * 100);
	fin.read((char*)&ob, sizeof ob);
	if (ob.bnom != key || ob.stat == 3)
	{
		gotoxy(21, 25);
		cout << "        BOOK NOT AVAILABLE              ";
		getch();
		cleardevice();
		main1();
	}
	ob.fulldisplay();
	gotoxy(21, 25);
	cout << "            PAGE NO = " << key << "                 ";
	fin.seekg((key - 1) * 100);
	ob.stat = 3;
	gotoxy(21, 25);
	cout << "        LOST INFORMATION ADDED          ";
	fin.seekg((key - 1) * 100);
	fin.write((char*)&ob, sizeof ob);
	getch();
	fin.close();
	cleardevice();
	main1();
}

void found()
{
	int key;
	table();
	gotoxy(18, 2);
	cout << "       *** BOOK DETAILS FOUND  LIST ***       ";
	delay(400);
	gotoxy(19, 25);
	cout << "   ENTER THE BOOK NUMBER THAT IS FOUND";
	gotoxy(27, 6);
	cout << "_";
	gotoxy(27, 6);
	cin >> key;
	fstream fin;
	fin.open("book.dat", ios::in | ios::out);
	fin.seekg((key - 1) * 100);
	fin.read((char*)&ob, sizeof ob);
	if (ob.bnom != key || ob.stat == 0)
	{
		gotoxy(21, 25);
		cout << "        BOOK NOT AVAILABLE              ";
		getch();
		cleardevice();
		main1();
	}
	ob.fulldisplay();
	gotoxy(21, 25);
	cout << "            PAGE NO = " << key << "                 ";
	ob.stat = 0;
	gotoxy(21, 25);
	cout << "        FOUND INFORMATION ADDED          ";
	fin.seekg((key - 1) * 100);
	fin.write((char*)&ob, sizeof ob);
	getch();
	fin.close();
	cleardevice();
	main1();
}

void edit()
{
	int key;
	char ans = 'y';
	table();
	delay(400);
	gotoxy(19, 25);
	cout << "   ENTER THE BOOK NUMBER TO BE SEARCHED";
	gotoxy(27, 6);
	cout << "_";
	gotoxy(27, 6);
	cin >> key;
	fstream fin;
	fin.open("book.dat", ios::in | ios::out | ios::binary);
	fin.seekg((key - 1) * 100);
	fin.read((char*)&ob, sizeof ob);
	if (ob.bnom != key)
	{
		gotoxy(21, 25);
		cout << "        BOOK NOT REGISTERED              ";
		getch();
		cleardevice();
		main1();
	}
	fin.seekg((key - 1) * 100);
	ob.fulldisplay();
	gotoxy(19, 25);
	cout << "    WOULD YOU LIKE TO CONTINUE(Y/N)    ";
	ans = getche();
	if (ans == 'n' || ans == 'N')
	{
		fin.close();
		main1();
	}
	ob.modify();
	fin.seekg((key - 1) * 100);
	fin.write((char*)&ob, sizeof ob);
	ob.fulldisplay();
	gotoxy(18, 2);
	cout << "     *** BOOK DETAILS EDITING LIST ***       ";
	if (ob.stat == 0)
	{
		gotoxy(23, 25);
		cout << "      STATUS = AVAILABLE            ";
		getch();
	}
	if (ob.stat == 2)
	{
		gotoxy(23, 25);
		cout << "      STATUS  =  ISSUED          ";
		getch();
	}
	if (ob.stat == 3)
	{
		gotoxy(23, 25);
		cout << "        STATUS = LOST          ";
	}
	getch();
	fin.close();
	cleardevice();
	main1();
}

void del()
{
	int key;
	char ans = 'n';
	int flag = 0;
	table();
	delay(400);
	gotoxy(19, 25);
	cout << "   ENTER THE BOOK NUMBER TO BE DELETED";
	gotoxy(27, 6);
	cout << "_";
	gotoxy(27, 6);
	cin >> key;
	fstream fin;
	ofstream fout;
	fin.open("book.dat", ios::in);
	fout.open("del.dat", ios::out);
	while (!fin.eof())
	{
		fin.read((char*)&ob, sizeof ob);
		if (fin.eof())
		{
			break;
		}
		if (ob.bnom == key)
		{
			ob.fulldisplay();
			flag = 1;
			gotoxy(19, 25);
			cout << "    WOULD YOU LIKE TO DELETE(Y/N)      ";
			ans = getche();
			if (ans == 'n' || ans == 'N')
				fout.write((char*)&ob, sizeof ob);
		}
		else
			fout.write((char*)&ob, sizeof ob);
	}
	if (flag == 0)
	{
		gotoxy(19, 25);
		cout << "        BOOK NOT REGISTERED              ";
		getch();
	}
	fin.close();
	fout.close();
	remove("book.dat");
	rename("del.dat", "book.dat");
	cleardevice();
	main1();
}

void memedit()
{
	int key;
	memtable();
	delay(400);
	gotoxy(19, 25);
	cout << "   ENTER THE MEMBER ID TO BE SEARCHED";
	gotoxy(27, 6);
	cout << "_";
	gotoxy(18, 2);
	cout << "     *** MEMBER DETAILS SEARCHING LIST ***       ";
	gotoxy(27, 6);
	cin >> key;
	fstream fin;
	fin.open("member.dat", ios::in | ios::out | ios::binary);
	fin.seekg((key - 1) * 100);
	fin.read((char*)&mob, sizeof mob);
	if (mob.mid != key)
	{
		gotoxy(21, 25);
		cout << "        MEMBER NOT REGISTERED           ";
		getch();
		cleardevice();
		main1();
	}
	fin.seekg((key - 1) * 100);
	mob.memdisplay();
	mob.mementry();
	fin.seekg((key - 1) * 100);
	fin.write((char*)&mob, sizeof mob);
	cleardevice();
	memtable();
	mob.memdisplay();
	gotoxy(18, 2);
	cout << "     *** MEMBER DETAILS EDITED LIST ***       ";
	gotoxy(21, 25);
	cout << "   MEMBER " << key << " EDITED SUCCESSFULLY";
	getch();
	fin.close();
	cleardevice();
	main1();
}

void memdel()
{
	int key, flag = 0;
	char ans = 'n';
	memtable();
	delay(400);
	gotoxy(19, 25);
	cout << "   ENTER THE MEMBER ID TO BE DELETE  ";
	gotoxy(27, 6);
	cout << "_";
	gotoxy(18, 2);
	cout << "     *** MEMBER DETAILS DELETE LIST ***       ";
	gotoxy(27, 6);
	cin >> key;
	fstream fin;
	fstream fout;
	fin.open("member.dat", ios::in);
	fout.open("del.dat", ios::out);
	while (!fin.eof())
	{
		fin.read((char*)&mob, sizeof mob);
		if (fin.eof())
		{
			break;
		}
		if (key == mob.mid)
		{
			mob.memdisplay();
			flag = 1;
			gotoxy(19, 25);
			cout << "    WOULD YOU LIKE TO DELETE(Y/N)      ";
			ans = getche();
			if (ans == 'n' || ans == 'N')
				fout.write((char*)&mob, sizeof mob);
		}
		else
			fout.write((char*)&mob, sizeof mob);
	}
	if (flag == 0)
	{
		gotoxy(19, 25);
		cout << "        MEMBER NOT REGISTERED            ";
		getch();
	}
	fin.close();
	fout.close();
	remove("member.dat");
	rename("del.dat", "member.dat");
	cleardevice();
	main1();
}

void search()
{
	int key;
	table();
	delay(400);
	gotoxy(19, 25);
	cout << "   ENTER THE BOOK NUMBER TO BE SEARCHED";
	gotoxy(27, 6);
	cout << "_";
	gotoxy(27, 6);
	cin >> key;
	fstream fin;
	fin.open("book.dat", ios::in | ios::out | ios::binary);
	fin.seekg((key - 1) * 100);
	fin.read((char*)&ob, sizeof ob);
	if (ob.bnom != key)
	{
		gotoxy(21, 25);
		cout << "        BOOK NOT REGISTERED              ";
		getch();
		cleardevice();
		main1();
	}
	ob.fulldisplay();
	gotoxy(18, 2);
	cout << "     *** BOOK DETAILS SEARCHING LIST ***       ";
	gotoxy(21, 25);
	cout << "                                        ";
	if (ob.stat == 0)
	{
		gotoxy(23, 25);
		cout << "      STATUS = AVAILABLE            ";
		getch();
	}
	if (ob.stat == 2)
	{
		gotoxy(23, 25);
		cout << "      STATUS  =  ISSUED          ";
		getch();
	}
	if (ob.stat == 3)
	{
		gotoxy(23, 25);
		cout << "         STATUS = LOST          ";
	}
	getch();
	fin.close();
	cleardevice();
	main1();
}

void option()
{
	int i = 60;
	int j2, k, l, m, n;
	setcolor(2);
	settextstyle(0, 0, 1);
	outtextxy(i, 127, "  _____________");
	outtextxy(i, 140, "  | MAIN MENU |");
	outtextxy(i, 145, "  _____________");
	settextstyle(0, 0, 1);
	setcolor(8);
	outtextxy(i, 180, "1.BOOK UPDATE");
	outtextxy(i, 220, "2.BOOK DEALINGS");
	outtextxy(i, 260, "3.INFORMATION");
	outtextxy(i, 300, "4.MEMBER LIST");			//570
	outtextxy(270, 180, "[1] - Entry,display,edit,delete books");
	outtextxy(270, 220, "[2] - Issue,return,lost,found");
	outtextxy(270, 260, "[3] - Search and display books");
	outtextxy(270, 300, "[4] - Entry,edit,display,delete members");
}

void extend()
{
	int i = 20;
	setcolor(0);
	int j = 380, l;
	while (j < 600)
	{
		setfillstyle(0, 0);
		bar3d(250, 150, j, 320, 0, 0);
		delay(i);
		l = l - 5;
		sound(30000 * (l + 250));
		j = j + 10;
	}
	nosound();
}

void pass()
{
	cleardevice();
	char ch, pass[3] = { "123" }, p[3];
	int c = 0, e = 0, l = 0;
	setcolor(1);
	setfillstyle(0, 8);
	bar3d(450, 200, 180, 250, 0, 0);
	gotoxy(32, 14);
	cout << "ENTER THE PASSWORD";
	gotoxy(38, 15);
	for (int i = 0; i < 3; i++)
	{
		ch = getche();
		if (isalnum(ch))
		{
			p[i] = ch;
			textcolor(4);
			cout << ('*');
		}
		else
		{
		lb:
			gotoxy(32, 14);
			cout << "                   ";
			gotoxy(34, 15);
			cout << "SYSTEM ABORTING";
			l = 100;
			int j = 10;
			while (j < 200)
			{
				j = j + 10;
				l = l - 5;
				sound((100 * (l + 10)));
				delay(40);
			}
			nosound();
			delay(1000);
			exit(0);
		}
	}
	for (int j = 0; j < i; j++)
	{
		if (p[j] == pass[j])
			e++;
	}
	if (e == 3)
	{
		delay(500);
		setcolor(4);
		setfillstyle(10, 8);
		bar3d(450, 200, 180, 250, 0, 0);
		delay(200);
		setcolor(2);
		settextstyle(1, 0, 1);
		outtextxy(230, 215, "CORRECT PASSWORD");
		j = 0;
		l = 800;
		while (j < 250)
		{
			j = j + 10;
			l = l - 5;
			sound((1000 * l));
			delay(20);
		}
		nosound();
		delay(1500);
		main1();
	}
	else
	{
		goto lb;
	}
	settextstyle(-1, 0, 1);
	cleardevice();
}

void main1()
{
	cleardevice();
	setbkcolor(0);
	settextstyle(0, 0, 1);
	int l, j, c, d, i = 60;
	l = 800;
	j = 0;
	while (j < 400)
	{
		j = j + 10;
		l = l - 5;
		sound((100 * (10 + l)));
		delay(10);
	}
	nosound();
	setfillstyle(4, 6);
	bar3d(-1, -1, 660, 500, 0, 0);
	setcolor(4);
	setfillstyle(1, 1);
	bar3d(3, 3, 633, 473, 0, 0);
	setcolor(0);
	setfillstyle(6, 8);
	bar3d(20, 420, 615, 458, 0, 0);
	bar3d(20, 370, 615, 410, 0, 0);
	setfillstyle(0, 0);
	bar3d(23, 423, 612, 455, 0, 0);
	setfillstyle(10, 1);
	bar3d(23, 373, 612, 408, 0, 0);
	setfillstyle(0, 4);
	setcolor(6);
	bar3d(25, 115, 610, 345, 0, 0);
	setcolor(2);
	setfillstyle(1, 9);
	bar3d(30, 120, 230, 340, 0, 0);
	setcolor(4);
	setfillstyle(0, 1);
	bar3d(35, 125, 225, 335, 0, 0);
	setcolor(2);
	setfillstyle(1, 6);
	bar3d(235, 120, 605, 340, 0, 0);
	setcolor(4);
	setfillstyle(0, 6);
	bar3d(240, 125, 600, 335, 0, 0);
	setcolor(0);
	setfillstyle(6, 4);
	bar3d(20, 17, 615, 93, 0, 0);
	setcolor(0);
	bar3d(23, 20, 612, 90, 0, 0);
	bar3d(26, 23, 609, 87, 0, 0);
	setfillstyle(6, 8);
	bar3d(29, 26, 606, 84, 0, 0);
	setcolor(0);
	setlinestyle(0, 4, 1);
	line(9, 8, 627, 8); // top
	line(9, 9, 627, 9);
	line(9, 10, 627, 10);
	line(9, 11, 627, 11);
	line(9, 12, 627, 12);

	line(9, 100, 627, 100); //mid
	line(9, 101, 627, 101); //
	line(9, 102, 627, 102); //
	line(9, 103, 627, 103); //
	line(9, 104, 627, 104); //
	line(9, 463, 627, 463); //bottom
	line(9, 464, 627, 464); //
	line(9, 465, 627, 465); //
	line(9, 466, 627, 466); //
	line(9, 467, 627, 467);

	line(8, 8, 8, 467); //left
	line(9, 8, 9, 467); //
	line(10, 8, 10, 467); //
	line(11, 8, 11, 467); //
	line(12, 8, 12, 467);
	line(623, 8, 623, 467); //right
	line(624, 8, 624, 467); //
	line(625, 8, 625, 467); //
	line(626, 8, 626, 467); //
	line(627, 8, 627, 467);
	setcolor(0);
	setfillstyle(6, 4);
	bar3d(50, 170, 200, 200, 0, 0);
	bar3d(50, 210, 200, 240, 0, 0);
	bar3d(50, 250, 200, 280, 0, 0);
	bar3d(50, 290, 200, 320, 0, 0);
	setcolor(0);
	setfillstyle(1, 0);
	bar3d(53, 173, 197, 197, 0, 0);
	bar3d(53, 213, 197, 237, 0, 0);
	bar3d(53, 253, 197, 277, 0, 0);
	bar3d(53, 293, 197, 317, 0, 0);
	setcolor(-1);
	settextstyle(0, 0, 2);
	outtextxy(i + 80, 50, "DIGITAL LIBRARY SYSTEM");
	menu();
}
void menu()
{
lb:
	int j2, l, m, n;
	char op = 0;
	char key = 1;
	int y1 = 173, y2 = 197;
	int col1 = 9, col2 = 7;
	setcolor(3);
	settextstyle(0, 0, 1);
	outtextxy(120, 437, "Press [-->] to confirm              [<--] = back");
	setcolor(4);
	setfillstyle(10, 1);
	bar3d(23, 373, 612, 408, 0, 0);
	setcolor(3);
	settextstyle(2, 0, 6);
	outtextxy(140, 380, "USE ARROWS TO MOVE UP AND DOWN");
	settextstyle(0, 0, 1);
	setcolor(4);
	outtextxy(480, 387, "    [Esc] = EXIT");
	//////////////////////////////////////
	setcolor(0);
	setfillstyle(1, 0);
	bar3d(53, 173, 197, 197, 0, 0);
	bar3d(53, 213, 197, 237, 0, 0);
	bar3d(53, 253, 197, 277, 0, 0);
	bar3d(53, 293, 197, 317, 0, 0);
	setcolor(6);
	setfillstyle(10, 1);
	bar3d(53, 173, 197, 197, 0, 0);
	option();
	do
	{
		key = getch();
		setfillstyle(1, 0);
		if (key == 80)
		{
			if (y1 != 293)
			{
				setcolor(0);
				bar3d(53, y1, 197, y2, 0, 0);
				y1 += 40; y2 += 40;
				setfillstyle(10, 1);
				setcolor(6);
				bar3d(53, y1, 197, y2, 0, 0);
				option();
			}
		}
		else if (key == 72)
		{
			if (y1 != 173)
			{
				setcolor(0);
				bar3d(53, y1, 197, y2, 0, 0);
				y1 -= 40; y2 -= 40;
				setfillstyle(10, 1);
				setcolor(6);
				bar3d(53, y1, 197, y2, 0, 0);
				option();
			}
		}
		else if (key == 27)
		{
			credits();
			nosound();
			exit(0);
		}
		else
		{
			l = 300;
			for (n = 0; n < 5; n++)
			{
				l = l - 10;
				sound(3000 * (l + 450));
				delay(40);
			}
			nosound();
		}
	} while (key != 77);
	setfillstyle(10, 1);
	setcolor(6);
	bar3d(53, y1, 197, y2, 0, 0);
	if (y1 == 173) op = '1';
	if (y1 == 213) op = '2';
	if (y1 == 253) op = '3';
	if (y1 == 293) op = '4';
	//////////////////////////////////////
	m = 0;

	setcolor(-1);
	if (op<'5' && op>'0')
		extend();
	setcolor(4);
	switch (op)
	{
	case '1':
		setcolor(8);
		outtextxy(60, 180, "1.BOOK UPDATE");
		settextstyle(0, 0, 1);
		setcolor(col1);
		outtextxy(380, 200, "A.ENTRY");
		outtextxy(380, 230, "B.DISPLAY");
		outtextxy(380, 260, "C.EDIT");
		outtextxy(380, 290, "D.DELETE");
		setcolor(4);
		settextstyle(0, 0, 2);
		outtextxy(330, 160, "BOOK UPDATE");

		setcolor(1);
		settextstyle(0, 0, 1);
		setcolor(col2);
		outtextxy(380, 200, "A.ENTRY");

		y1 = 200;
		key = 1;
		do
		{
			key = getch();
			setfillstyle(1, 0);
			if (key == 80)
			{
				if (y1 != 290)
				{
					y1 += 30;
					setcolor(col1);
					if (y1 == 230)
					{
						outtextxy(380, 200, "A.ENTRY");
						setcolor(col2);
						outtextxy(380, 230, "B.DISPLAY");
					}
					if (y1 == 260)
					{
						outtextxy(380, 230, "B.DISPLAY");
						setcolor(col2);
						outtextxy(380, 260, "C.EDIT");
					}
					if (y1 == 290)
					{
						outtextxy(380, 260, "C.EDIT");
						setcolor(col2);
						outtextxy(380, 290, "D.DELETE");
					}
				}
			}
			else if (key == 72)
			{
				if (y1 != 200)
				{
					y1 -= 30;
					setcolor(col1);
					if (y1 == 200)
					{
						outtextxy(380, 230, "B.DISPLAY");
						setcolor(col2);
						outtextxy(380, 200, "A.ENTRY");
					}
					if (y1 == 230)
					{
						outtextxy(380, 260, "C.EDIT");
						setcolor(col2);
						outtextxy(380, 230, "B.DISPLAY");
					}
					if (y1 == 260)
					{
						outtextxy(380, 290, "D.DELETE");
						setcolor(col2);
						outtextxy(380, 260, "C.EDIT");
					}
				}
			}

			else if (key == 75)
			{
				extend();
				goto lb;
			}
			else if (key == 27)
			{
				credits();
				nosound();
				exit(0);
			}
			else
			{
				l = 300;
				for (n = 0; n < 5; n++)
				{
					l = l - 10;
					sound(3000 * (l + 450));
					delay(40);
				}
				nosound();
			}
		} while (key != 77);
		if (y1 == 200) op = 'a';
		if (y1 == 230) op = 'b';
		if (y1 == 260) op = 'c';
		if (y1 == 290) op = 'd';
		for (n = 0; n < 30; n++)
		{
			l = l - 5;
			sound(300 * (l + 450));
			delay(5);
		}
		l = 9108;
		nosound();
		settextstyle(0, 0, 1);
		outtextxy(180, 380, "                       ");
		if (op == 'a' || op == 'A')
		{
			cleardevice();
			entry1();
		}
		else if (op == 'b' || op == 'B')
			display1();
		else if (op == 'c' || op == 'C')
		{
			cleardevice();
			edit();
			main1();
		}
		else if (op == 'd' || op == 'D')
		{
			cleardevice();
			del();
			main1();
		}
		else
		{
			extend();
			menu();
		}
	case '2':
		setcolor(8);
		outtextxy(60, 220, "2.BOOK DEALINGS");
		settextstyle(0, 0, 1);
		setcolor(col1);
		outtextxy(380, 200, "A.ISSUE");
		outtextxy(380, 230, "B.RETURN");
		outtextxy(380, 260, "C.LOST");
		outtextxy(380, 290, "D.FOUND");
		setcolor(4);
		settextstyle(0, 0, 2);
		outtextxy(330, 160, "BOOK DEALINGS");

		setcolor(1);
		settextstyle(0, 0, 1);
		setcolor(col2);
		outtextxy(380, 200, "A.ISSUE");

		y1 = 200;
		key = 1;
		do
		{
			key = getch();
			setfillstyle(1, 0);
			if (key == 80)
			{
				if (y1 != 290)
				{
					y1 += 30;
					setcolor(col1);
					if (y1 == 230)
					{
						outtextxy(380, 200, "A.ISSUE");
						setcolor(col2);
						outtextxy(380, 230, "B.RETURN");
					}
					if (y1 == 260)
					{
						outtextxy(380, 230, "B.RETURN");
						setcolor(col2);
						outtextxy(380, 260, "C.LOST");
					}
					if (y1 == 290)
					{
						outtextxy(380, 260, "C.LOST");
						setcolor(col2);
						outtextxy(380, 290, "D.FOUND");
					}
				}
			}
			else if (key == 72)
			{
				if (y1 != 200)
				{
					y1 -= 30;
					setcolor(col1);
					if (y1 == 200)
					{
						outtextxy(380, 230, "B.RETURN");
						setcolor(col2);
						outtextxy(380, 200, "A.ISSUE");
					}
					if (y1 == 230)
					{
						outtextxy(380, 260, "C.LOST");
						setcolor(col2);
						outtextxy(380, 230, "B.RETURN");
					}
					if (y1 == 260)
					{
						outtextxy(380, 290, "D.FOUND");
						setcolor(col2);
						outtextxy(380, 260, "C.LOST");
					}
				}
			}

			else if (key == 75)
			{
				extend();
				goto lb;
			}
			else if (key == 27)
			{
				credits();
				nosound();
				exit(0);
			}
			else
			{
				l = 300;
				for (n = 0; n < 5; n++)
				{
					l = l - 10;
					sound(3000 * (l + 450));
					delay(40);
				}
				nosound();
			}
		} while (key != 77);
		if (y1 == 200) op = 'a';
		if (y1 == 230) op = 'b';
		if (y1 == 260) op = 'c';
		if (y1 == 290) op = 'd';


		for (n = 0; n < 30; n++)
		{
			l = l - 5;
			sound(300 * (l + 450));
			delay(5);
		}
		l = 9108;
		nosound();
		settextstyle(0, 0, 1);
		outtextxy(180, 380, "                       ");
		if (op == 'a' || op == 'A')
		{
			cleardevice();
			issue();
			main1();
		}
		else if (op == 'b' || op == 'B')
		{
			cleardevice();
			retern();
			main1();
		}
		if (op == 'c' || op == 'C')
		{
			cleardevice();
			lost();
			main1();
		}
		else if (op == 'd' || op == 'D')
		{
			cleardevice();
			found();
			main1();
		}
		else
		{
			extend();
			menu();
		}
	case '3':
		setcolor(8);
		outtextxy(60, 260, "3.INFORMATION");
		settextstyle(0, 0, 1);
		setcolor(col1);
		outtextxy(380, 200, "A.SEARCH");
		outtextxy(380, 230, "B.BOOKS LIST");
		outtextxy(380, 260, "C.DISPLAY");
		setcolor(4);
		settextstyle(0, 0, 2);
		outtextxy(330, 160, "INFORMATION");

		setcolor(1);
		settextstyle(0, 0, 1);
		setcolor(col2);
		outtextxy(380, 200, "A.SEARCH");

		y1 = 200;
		key = 1;
		do
		{
			key = getch();
			setfillstyle(1, 0);
			if (key == 80)
			{
				if (y1 != 260)
				{
					y1 += 30;
					setcolor(col1);
					if (y1 == 230)
					{
						outtextxy(380, 200, "A.SEARCH");
						setcolor(col2);
						outtextxy(380, 230, "B.BOOKS LIST");
					}
					if (y1 == 260)
					{
						outtextxy(380, 230, "B.BOOKS LIST");
						setcolor(col2);
						outtextxy(380, 260, "C.DISPLAY");
					}
				}
			}
			else if (key == 72)
			{
				if (y1 != 200)
				{
					y1 -= 30;
					setcolor(col1);
					if (y1 == 200)
					{
						outtextxy(380, 230, "B.BOOKS LIST");
						setcolor(col2);
						outtextxy(380, 200, "A.SEARCH");
					}
					if (y1 == 230)
					{
						outtextxy(380, 260, "C.DISPLAY");
						setcolor(col2);
						outtextxy(380, 230, "B.BOOKS LIST");
					}
				}
			}
			else if (key == 75)
			{
				extend();
				goto lb;
			}
			else if (key == 27)
			{
				credits();
				nosound();
				exit(0);
			}
			else
			{
				l = 300;
				for (n = 0; n < 5; n++)
				{
					l = l - 10;
					sound(3000 * (l + 450));
					delay(40);
				}
				nosound();
			}
		} while (key != 77);
		if (y1 == 200) op = 'a';
		if (y1 == 230) op = 'b';
		if (y1 == 260) op = 'c';
		if (y1 == 290) op = 'd';

		for (n = 0; n < 30; n++)
		{
			l = l - 5;
			sound(300 * (l + 450));
			delay(5);
		}
		l = 9108;
		nosound();
		settextstyle(0, 0, 1);
		outtextxy(180, 380, "                       ");
		if (op == 'a' || op == 'A')
		{
			cleardevice();
			search();
			getch();
			main1();
		}
		else if (op == 'b' || op == 'B')
		{
			cleardevice();
			simtable();
			simdisplay();
			main1();
		}
		else if (op == 'c' || op == 'C')
			display1();
		else
		{
			extend();
			menu();
		}
	case '4': setcolor(8);
		outtextxy(60, 300, "4.MEMBER LIST");
		settextstyle(0, 0, 1);
		setcolor(col1);
		outtextxy(380, 200, "A.ENTRY");
		outtextxy(380, 230, "B.DISPLAY");
		outtextxy(380, 260, "C.EDIT");
		outtextxy(380, 290, "D.DELETE");
		setcolor(4);
		settextstyle(0, 0, 2);
		outtextxy(330, 160, "MEMBER ENTRY");
		setcolor(1);
		settextstyle(0, 0, 1);
		setcolor(col2);
		outtextxy(380, 200, "A.ENTRY");

		y1 = 200;
		key = 1;
		do
		{
			key = getch();
			setfillstyle(1, 0);
			if (key == 80)
			{
				if (y1 != 290)
				{
					y1 += 30;
					setcolor(col1);
					if (y1 == 230)
					{
						outtextxy(380, 200, "A.ENTRY");
						setcolor(col2);
						outtextxy(380, 230, "B.DISPLAY");
					}
					if (y1 == 260)
					{
						outtextxy(380, 230, "B.DISPLAY");
						setcolor(col2);
						outtextxy(380, 260, "C.EDIT");
					}
					if (y1 == 290)
					{
						outtextxy(380, 260, "C.EDIT");
						setcolor(col2);
						outtextxy(380, 290, "D.DELETE");
					}
				}
			}
			else if (key == 72)
			{
				if (y1 != 200)
				{
					y1 -= 30;
					setcolor(col1);
					if (y1 == 200)
					{
						outtextxy(380, 230, "B.DISPLAY");
						setcolor(col2);
						outtextxy(380, 200, "A.ENTRY");
					}
					if (y1 == 230)
					{
						outtextxy(380, 260, "C.EDIT");
						setcolor(col2);
						outtextxy(380, 230, "B.DISPLAY");
					}
					if (y1 == 260)
					{
						outtextxy(380, 290, "D.DELETE");
						setcolor(col2);
						outtextxy(380, 260, "C.EDIT");
					}
				}
			}

			else if (key == 75)
			{
				extend();
				goto lb;
			}
			else if (key == 27)
			{
				credits();
				nosound();
				exit(0);
			}
			else
			{
				l = 300;
				for (n = 0; n < 5; n++)
				{
					l = l - 10;
					sound(3000 * (l + 450));
					delay(40);
				}
				nosound();
			}
		} while (key != 77);
		if (y1 == 200) op = 'a';
		if (y1 == 230) op = 'b';
		if (y1 == 260) op = 'c';
		if (y1 == 290) op = 'd';
		for (n = 0; n < 30; n++)
		{
			l = l - 5;
			sound(300 * (l + 550));
			delay(5);
		}
		l = 9108;
		nosound();
		settextstyle(0, 0, 1);
		outtextxy(180, 380, "                       ");
		if (op == 'a' || op == 'A')
		{
			cleardevice();
			mementry1();
		}
		else if (op == 'b' || op == 'B')
		{
			cleardevice();
			memdisplay1();
		}
		if (op == 'c' || op == 'C')
		{
			cleardevice();
			memedit();
		}
		if (op == 'd' || op == 'D')
		{
			cleardevice();
			memdel();
		}
		else
		{
			extend();
			menu();
		}
	default:
		l = 300;
		for (n = 0; n < 5; n++)
		{
			l = l - 10;
			sound(3000 * (l + 450));
			delay(40);
		}
		nosound();
		option();
		menu();
	}
}

