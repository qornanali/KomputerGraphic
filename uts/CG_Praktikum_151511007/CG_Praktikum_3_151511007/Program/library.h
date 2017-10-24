#include <graphics.h>
#include <math.h>

#define DEFAULT_COLOR WHITE
#define DEFAULT_DELAY 10

typedef struct {
	int x;
	int y;
} point;

void drawcircle360(point midpoint, int r);
void drawcircle90(point midpoint, int r);
void drawcircle45(point midpoint, int r);

void putpx(point p,  int color = DEFAULT_COLOR, int mesc = DEFAULT_DELAY);
