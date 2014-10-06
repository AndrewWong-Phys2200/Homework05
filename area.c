/*
 * Calculate the area of a triangle
 */
 
 #include <math.h>
 #include "geom.h"
 
 double area(struct triangle t)
 {
     return fabs(0.5*( (t.c.x - t.a.x)*(t.b.y - t.a.y) + (t.c.y - t.a.y)*(t.b.x - t.a.x))) ;
 }
