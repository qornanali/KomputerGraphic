#include <graphics.h>
#include <math.h>

#define DEFAULT_COLOR WHITE
#define DEFAULT_DELAY 10

typedef struct {
	int x;
	int y;
} point;

void drawellips360(point midpoint, int r1, int r2);
void drawellips90(point midpoint, int r1, int r2);

void putpx(point p,  int color = DEFAULT_COLOR, int mesc = DEFAULT_DELAY);
