/**
* Librray Managemnet system v1.0
* @author  Jithin prdaeep, Abhilash C
* @version 1.60, 05/05/04
*/

// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<fstream.h>
#include<ctype.h>
#include<string.h>
#include<time.h>

#pragma once



int j2, l, a, ii, ij, m, n;
int j = 0, i = 550;
char temp[2], temp1[2], temp2[2], temp3[2];

void load()
{
	int k = 0;
	while (k < 1)
	{
		int i;
		nosound();
		for (i = 205; i <= 355; i++)
		{
			sound((i*(i / 100)));
			setcolor(7);
			line(200, 450, 400, 450);
			line(200, 470, 400, 470);
			line(200, 450, 200, 470);
			line(400, 450, 400, 470);
			setcolor(1);
			setfillstyle(1, 1);
			bar3d(i, 455, i + 10, 465, 0, 0);
			bar3d(i + 15, 455, i + 25, 465, 0, 0);
			bar3d(i + 30, 455, i + 40, 465, 0, 0);
			delay(5);
			setcolor(0);
			setfillstyle(0, 0);
			bar3d(200, 450, 400, 470, 0, 0);
		}
		k++;
		nosound();
	}
}
void credits()
{
	setcolor(0);
	l = 800;
	setfillstyle(1, 0);
	while (j < 400)
	{
		setcolor(0);
		setfillstyle(0, 0);
		bar3d(0, 0, 640, j, 0, 0);
		bar3d(0, 550, 640, i, 0, 0);
		delay(5);
		j = j + 10;
		i = i - 10;
		l = l - 5;
		sound(300 * (l + 450));
		delay(5);
	}
	delay(50);
}
void intro()
{
	int a = DETECT, b;
	initgraph(&a, &b, "");
	getch();
	int j = 0;
	setcolor(8);
	settextstyle(7, 0, 4);
	outtextxy(180, 204, "L     ADING FILES");
	setcolor(8);
	circle(200, 200, 2);
	circle(212, 212, 2);
	circle(200, 212, 2);
	circle(212, 200, 2);
	circle(194, 206, 2);
	circle(218, 206, 2);
	circle(206, 194, 2);
	circle(206, 218, 2);
	circle(206, 206, 2);
	for (int i = 0; i < 10; i++)
	{
		setcolor(-1);
		circle(200, 200, 2);
		delay(100);
		setcolor(8);
		circle(200, 200, 2);
		setcolor(-1);
		circle(206, 206, 2);
		delay(100);
		setcolor(8);
		circle(206, 206, 2);
		setcolor(-1);
		circle(212, 212, 2);
		delay(100);
		setcolor(8);
		circle(212, 212, 2);
		setcolor(-1);
		circle(200, 212, 2);
		delay(100);
		setcolor(8);
		circle(200, 212, 2);
		setcolor(-1);
		circle(212, 200, 2);
		delay(100);
		setcolor(8);
		circle(212, 200, 2);
		setcolor(-1);
		circle(194, 206, 2);
		delay(100);
		setcolor(8);
		circle(194, 206, 2);
		setcolor(-1);
		circle(218, 206, 2);
		delay(100);
		setcolor(8);
		circle(218, 206, 2);
		setcolor(-1);
		circle(206, 194, 2);
		delay(100);
		setcolor(8);
		circle(206, 194, 2);
		setcolor(-1);
		circle(206, 218, 2);
		delay(100);
		setcolor(8);
		circle(206, 218, 2);
	}
	for (j = 160; j < 550; j += 20)
	{
		setfillstyle(0, 0);
		setcolor(10);
		delay(40);
		bar(160, 180, j, 300);
	}
	j = 0;
	while (j < 80)
	{
		for (int i = 0; i < 20; i++)
		{
			setcolor(2);
			circle(0, 0, j + i);
			circle(getmaxx(), 0, i + j);
			circle(0, getmaxy(), i + j);
			circle(getmaxx(), getmaxy(), i + j);
			circle((getmaxx() / 2), getmaxy(), i + j);
			circle(getmaxx(), (getmaxy() / 2), i + j);
			circle((getmaxx() / 2), 0, i + j);
			circle(0, (getmaxy() / 2), i + j);
			circle((getmaxx() / 4), getmaxy(), i + j);
			circle(getmaxx(), (getmaxy() / 4), i + j);
			circle((getmaxx() / 4), 0, i + j);
			circle(0, (getmaxy() / 4), i + j);
			circle((getmaxx()*0.75), getmaxy(), i + j);
			circle(getmaxx(), (getmaxy()*0.75), i + j);
			circle((getmaxx()*0.75), 0, i + j);
			circle(0, (getmaxy()*0.75), i + j);
		}j++;
	}
	delay(1000);
	setcolor(4);
	for (i = 0; i < 20; i++)
	{
		line(224 - i, 180, 224 - i, 289); line(130 + i, 290 + i, 223 - i, 290 + i);
		line(254 + i, 180, 254 + i, 309); line(304 + i, 180, 304 + i, 309);
		line(254, 180 + i, 304, 180 + i); line(254, 230 + i, 304, 230 + i);
		line(354 + i, 200, 354 + i, 309); line(394 + i, 200, 394 + i, 309);
		line(454 - i, 200, 454 - i, 309); line(354 + i, 200 - i, 454 - i, 200 - i);
		delay(30);
	}
	delay(500);
	setcolor(8);
	settextstyle(0, 0, 2);
	outtextxy(250, 340, "PRESENTS");
	delay(100);
	setcolor(7);
	settextstyle(0, 0, 2);
	outtextxy(250, 340, "PRESENTS");
	delay(100);
	setcolor(-1);
	settextstyle(0, 0, 2);
	outtextxy(250, 340, "PRESENTS");
	nosound();
	delay(1000);
	j = 0;
	while (j < 80)
	{
		setcolor(0);
		for (int i = 0; i < 20; i++)
		{

			setcolor(0);
			circle(0, 0, j + i);
			circle(getmaxx(), 0, i + j);
			circle(0, getmaxy(), i + j);
			circle(getmaxx(), getmaxy(), i + j);
			circle((getmaxx() / 2), getmaxy(), i + j);
			circle(getmaxx(), (getmaxy() / 2), i + j);
			circle((getmaxx() / 2), 0, i + j);
			circle(0, (getmaxy() / 2), i + j);
			circle((getmaxx() / 4), getmaxy(), i + j);
			circle(getmaxx(), (getmaxy() / 4), i + j);
			circle((getmaxx() / 4), 0, i + j);
			circle(0, (getmaxy() / 4), i + j);
			circle((getmaxx()*0.75), getmaxy(), i + j);
			circle(getmaxx(), (getmaxy()*0.75), i + j);
			circle((getmaxx()*0.75), 0, i + j);
			circle(0, (getmaxy()*0.75), i + j);
		}j++;
	}

	setcolor(0);
	for (i = 0; i < 20; i++)
	{
		line(224 - i, 180, 224 - i, 289); line(130 + i, 290 + i, 223 - i, 290 + i);
		line(254 + i, 180, 254 + i, 309); line(304 + i, 180, 304 + i, 309);
		line(254, 180 + i, 304, 180 + i); line(254, 230 + i, 304, 230 + i);
		line(354 + i, 200, 354 + i, 309); line(394 + i, 200, 394 + i, 309);
		line(454 - i, 200, 454 - i, 309); line(354 + i, 200 - i, 454 - i, 200 - i);
		delay(30);
	}
	delay(100);
	settextstyle(0, 0, 2);
	outtextxy(250, 340, "PRESENTS");
	delay(1000);
	j = 0;
	int c = 0;
	while (j < 120)
	{
		setcolor(9);
		for (int i = 0; i < 30; i++)
		{
			circle(0, 0, j + i);
			circle(getmaxx(), 0, i + j);
			circle(0, getmaxy(), i + j);
			circle(getmaxx(), getmaxy(), i + j);
		}j++; c++;
	}

	i = 0;
	char temp[2], digi[20] = "D  I  G  I  T  A  L", lib[20] = "L  I  B  R  A  R  Y", sys[20] = "S  Y  S  T  E  M ";
	while (i != 20)
	{
		setcolor(4);
		settextstyle(0, 0, 2);
		temp[0] = digi[i];
		temp[1] = '\0';
		settextstyle(0, 0, 4);
		outtextxy(160 + (6 * (i * 3)), 160, temp);
		delay(40);
		i++;
	}
	i = 0;
	while (i != 20)
	{
		setcolor(4);
		settextstyle(0, 0, 2);
		temp[0] = lib[i];
		temp[1] = '\0';
		settextstyle(0, 0, 4);
		outtextxy(160 + (6 * (i * 3)), 220, temp);
		delay(40);
		i++;
	}
	i = 0;
	while (i != 20)
	{
		setcolor(4);
		settextstyle(0, 0, 2);
		temp[0] = sys[i];
		temp[1] = '\0';
		settextstyle(0, 0, 4);
		outtextxy(185 + (6 * (i * 3)), 280, temp);
		delay(40);
		i++;
	}
	getch();
}

void table()
{
	setcolor(-1);
	rectangle(100, 420, 500, 350);
	setcolor(7);
	line(5, 10, 630, 10);
	line(5, 37, 630, 37);
	line(5, 11, 630, 11);
	line(5, 36, 630, 36);
	line(5, 12, 630, 12);
	line(5, 35, 630, 35);
	setcolor(7);
	line(5, 70, 630, 70);
	line(5, 103, 630, 103);
	line(5, 135, 630, 135);
	line(5, 70, 5, 321);
	line(200, 70, 200, 321);
	line(630, 70, 630, 320);
	line(5, 165, 630, 165);
	line(5, 195, 630, 195);
	line(5, 227, 630, 227);
	line(5, 258, 630, 258);
	line(5, 289, 630, 289);
	line(5, 321, 630, 321);
	setcolor(4);
	outtextxy(255, 355, "MESSAGE BOX");
	setcolor(6);
	gotoxy(2, 6);
	cout << " BOOK NUMBER";
	gotoxy(2, 8);
	cout << " TITLE";
	gotoxy(2, 10);
	cout << " AUTHOR";
	gotoxy(2, 12);
	cout << " PUBLISHER";
	gotoxy(2, 14);
	cout << " TYPE OF BOOK";
	gotoxy(2, 16);
	cout << " DATE OF PURCHASE";
	gotoxy(2, 18);
	cout << " PRICE";
	gotoxy(2, 20);
	cout << " CUPBOARD N0";
	gotoxy(18, 2);
	cout << "     *** BOOK DETAILS EDITING LIST ***       ";
}
void istable()
{
	setcolor(-1);
	rectangle(100, 420, 500, 350);
	setcolor(7);
	line(5, 10, 630, 10);
	line(5, 37, 630, 37);
	line(5, 11, 630, 11);
	line(5, 36, 630, 36);
	line(5, 12, 630, 12);
	line(5, 35, 630, 35);

	line(5, 165, 630, 165);
	line(5, 195, 630, 195);
	line(5, 227, 630, 227);
	line(5, 258, 630, 258);
	line(5, 289, 630, 289);

	line(5, 165, 5, 289);
	line(150, 165, 150, 289);
	line(630, 165, 630, 289);

	setcolor(4);
	outtextxy(255, 355, "MESSAGE BOX");
	setcolor(6);
	gotoxy(2, 12);
	cout << " BOOK NO ";
	gotoxy(2, 14);
	cout << " MEMBER ID";
	gotoxy(2, 16);
	cout << " DATE OF ISSUE";
	gotoxy(2, 18);
	cout << " DATE OF RETURN";
}
void memtable()
{
	setcolor(-1);
	rectangle(100, 420, 500, 350);
	setcolor(7);
	line(5, 10, 630, 10);
	line(5, 37, 630, 37);
	line(5, 11, 630, 11);
	line(5, 36, 630, 36);
	line(5, 12, 630, 12);
	line(5, 35, 630, 35);
	setcolor(7);
	line(5, 70, 630, 70);
	line(5, 103, 630, 103);
	line(5, 135, 630, 135); line(5, 70, 5, 321); line(200, 70, 200, 321); line(630, 70, 630, 320);
	line(5, 165, 630, 165);
	line(5, 195, 630, 195);
	line(5, 227, 630, 227);
	line(5, 258, 630, 258);
	line(5, 289, 630, 289);
	line(5, 321, 630, 321);
	setcolor(4);
	outtextxy(255, 355, "MESSAGE BOX");
	setcolor(6);
	gotoxy(2, 6);
	cout << " MEMBER ID";
	gotoxy(2, 8);
	cout << " NAME";
	gotoxy(2, 10);
	cout << " FATHER";
	gotoxy(2, 12);
	cout << " ADDRESS";
	gotoxy(2, 14);
	cout << " SEX";
	gotoxy(2, 16);
	cout << " JOB";
	gotoxy(2, 18);
	cout << " AGE";
	gotoxy(2, 20);
	cout << " JOINING DATE";
}
void simtable()
{
	setbkcolor(-1);
	settextstyle(1, 0, 1);
	setcolor(5);
	outtextxy(80, 10, "         BOOK DETAILS SIMPLE DISPLAY LIST");
	setcolor(4);
	settextstyle(0, 0, 1);
	outtextxy(255, 420, "MESSAGE BOX");
	setcolor(8);
	settextstyle(1, 0, 1);
	outtextxy(10, 44, " SNO");
	outtextxy(100, 44, " BOOK NAME");
	outtextxy(280, 44, "AUTHOR NAME");
	outtextxy(460, 44, "STATUS");
	outtextxy(540, 44, "  SHELF");
	setcolor(1);
	setlinestyle(0, 1, 2);
	/////////////////// horizontal
	line(5, 40, 630, 40);
	line(5, 70, 630, 70);
	line(5, 100, 630, 100); //1
	line(5, 130, 630, 130);
	line(5, 160, 630, 160);
	line(5, 192, 630, 192);
	line(5, 224, 630, 224);
	line(5, 256, 630, 256); //6
	line(5, 288, 630, 288);
	line(5, 322, 630, 322);
	line(5, 355, 630, 355);
	line(5, 388, 630, 388);
	//////////////////// vertical
	line(5, 40, 5, 388);
	line(80, 40, 80, 388);
	line(260, 40, 260, 388);
	line(440, 40, 440, 388);
	line(550, 40, 550, 388);
	line(630, 40, 630, 388);
	///////////////////// message
	setlinestyle(0, 1, 1);
	setcolor(7);
	line(80, 410, 550, 410);
	line(80, 470, 550, 470);
	line(80, 410, 80, 470);
	line(550, 410, 550, 470);
	setlinestyle(0, 1, 0);
	setcolor(4);
}

