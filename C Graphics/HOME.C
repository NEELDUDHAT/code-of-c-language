#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"");

	// house //y axis up to down x axis left ro right.
	line(100,100,150,50);//(x1,y1,x2,y2)
	line(150,50,200,100);
	line(100,100,200,100);
	line(150,50,350,50);
	line(350,50,400,100);
	line(200,100,400,100);
	line(100,100,100,250);
	line(200,100,200,250);
	line(400,100,400,250);
	line(100,250,400,250);
	rectangle(130,180,170,250);//first and third point(x1,y1 & x3,y3)
	rectangle(350,150,250,210);//second and forth point(x2,y2 & x4,y4),both are valid

	//color
	setfillstyle(7,2); //(design,color)
	floodfill(131,181,WHITE);//(x1,y1,border color)
	floodfill(349,199,WHITE);
	setfillstyle(11,3);
	floodfill(249,149,WHITE);
	setfillstyle(11,4);
	floodfill(101,101,WHITE);
	setfillstyle(11,7);
	floodfill(150,54,WHITE);
	floodfill(350,54,WHITE);

	getch();
	closegraph();
}