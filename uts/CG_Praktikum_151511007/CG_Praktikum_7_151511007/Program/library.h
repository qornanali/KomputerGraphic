#include <graphics.h>
#include <math.h>

#define MIDPOINT 300
#define DEFAULT_COLOR WHITE
#define DEFAULT_DELAY 1000
#define RCLOCK 100

typedef struct {
	int x;
	int y;
} point;

void drawcircle(point midpoint, int r, int color = DEFAULT_COLOR);
void drawline(point p1, point p2, int color = DEFAULT_COLOR);

void putpx(point p,  int color = DEFAULT_COLOR);
point initPoint(int x, int y);
