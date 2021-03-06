#ifndef POLYGON_H
#define POLYGON_H
#include <stdlib.h>

typedef struct Polygon
{
	float x;
	float y;
	int8_t hasSurfacename;
	char* surfacename;
	struct Polygon* next;
	struct Polygon* last;
}Polygon;

void 
Polygon_add(Polygon* pol, 
	float x, 
	float y,
	int8_t hasSurfacename,
	char* surfacename);

Polygon*
Polygon_create();

void
Polygon_free(
	Polygon* pol);

Polygon*
Polygon_getElement(
	Polygon* pol, 
	int i);

int
Polygon_getSize(
	Polygon* pol);

Polygon*
Polygon_removeLast(
	Polygon* pol);
#endif 
