#include <stdio.h>
#include "library.h"
#include <time.h>
#include <Windows.h>

void drawclock();

int windowx, windowy;

int main(int argc, char** argv) {
	windowx = 800;
	windowy = 800;
	initwindow(windowx, windowy);
	
	drawclock();
	
	getch();
	return 0;
}

void drawclock(){
	
	windowx = getmaxx();
	windowy = getmaxy();
	
	int MIDPOINT_X = getmaxx() / 2;
	int MIDPOINT_Y = getmaxy() / 2;
	int RCLOCK = 150;
	
	int rhr = RCLOCK - 60, rmnt = RCLOCK - 45, rsc = RCLOCK - 30;
	SYSTEMTIME systemtime;
	GetSystemTime(&systemtime);
	int dsc = (45+systemtime.wSecond) * 360 / 60;
	int dmnt = (45+systemtime.wMinute) * 360 / 60;
	int dhr = (systemtime.wHour+12) * 360 / 24;
	printf("%d %d %d", systemtime.wSecond, systemtime.wMinute, systemtime.wHour);
	point pmid = initPoint(MIDPOINT_X, MIDPOINT_Y);
	int tock = 0;
	drawcircle(pmid, RCLOCK, 9);
	char str[2];
	
	for(int i = 1; i <= 12; i++){
		sprintf(str, "%d", i);
		outtextxy(MIDPOINT_X-5+(RCLOCK - 10)*cos((-91+i*30)*(M_PI / 180)), MIDPOINT_Y-3+(RCLOCK - 10)*sin((-91+i*30)*(M_PI / 180)), str);
	}	
	
	pmid = initPoint(MIDPOINT_X, MIDPOINT_Y);
	
	while(windowx == getmaxx() && windowy == getmaxy()){
		tock++;
//		printf("%d %d %d %d\n", tock, dsc, dmnt, dhr);
		drawline(pmid, initPoint(pmid.x + rsc * cos((M_PI / 180) * (dsc - 6)), pmid.y + rsc * sin((M_PI / 180) * (dsc - 6))), BLACK);
		drawline(pmid, initPoint(pmid.x + rmnt * cos((M_PI / 180) * (dmnt - 6)), pmid.y + rmnt * sin((M_PI / 180) * (dmnt - 6))), BLACK);
		drawline(pmid, initPoint(pmid.x + rhr * cos((M_PI / 180) * (dhr - 6)), pmid.y + rhr * sin((M_PI / 180) * (dhr - 6))), BLACK);
		drawline(pmid, initPoint(pmid.x + rsc * cos((M_PI / 180) * dsc), pmid.y + rsc * sin((M_PI / 180) * dsc)), 5);
		drawline(pmid, initPoint(pmid.x + rmnt * cos((M_PI / 180) * dmnt), pmid.y + rmnt * sin((M_PI / 180) * dmnt)), 3);
		drawline(pmid, initPoint(pmid.x + rhr * cos((M_PI / 180) * dhr), pmid.y + rhr * sin((M_PI / 180) * dhr)), 2);
	
		dsc = dsc + 6; 
		if(dsc % 270 == 0  && dsc >= 270){
			dmnt = dmnt + 6;
		}
		if(dsc % 360 == 0  && dsc >= 360){
			dsc = 0;
		}  
		if(dmnt % 270 == 0 && dmnt >= 270){
			dhr = dhr + 6;
		}
		if(dmnt % 360 == 0 && dmnt >= 360){
			dmnt = 0;
		}
		if(dhr % 360 == 0 && dhr >= 360){
			dhr = 0;
		}
		
		delay(DEFAULT_DELAY);
	}
	cleardevice();
	drawclock();
}
