#include <graphics.h>

#define DEFAULT_COLOR WHITE
#define DEFAULT_DELAY 10

typedef struct {
	int x;
	int y;
} point;

void drawddaline(point p1, point p2);
void drawmidpointline(point p1, point p2);
void drawbresenhamline(point p1, point p2);

void putpx(point p,  int color = DEFAULT_COLOR, int mesc = DEFAULT_DELAY);
