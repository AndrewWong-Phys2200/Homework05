/*
 * calculate the radius of a circle inscribed in a triangle.
 */
 
 #include <stdio.h>
 #include "geom.h"
 #include <math.h>
 
 double distance(struct point2d u, struct point2d v);
 double area(struct triangle t);
 
 int main(void)
 {
     struct point2d u = {2., 2.};
     struct point2d v = {-2., 1.};
     struct point2d q = {0., -3.};
     struct triangle t = {u, v, q};
     double d_one, d_two, d_three, p, aa, r;
     
     printf("a = (%f, %f)  b = (%f, %f)  c = (%f, %f)\n", t.a.x, t.a.y, t.b.x, t.b.y, t.c.x, t.c.y);

     d_one = distance(u, v);
     
     d_two = distance(u, v);
     
     d_three = distance(u, v);
     
     p = d_one + d_two + d_three;
     printf("perimeter = %f\n", p);

     aa = area(t);
     printf("area = %f\n", aa);
     
     r = (2 * aa) / (p);
     printf("Radius of the circle inscribed in triangle = %f\n", r);
     

     return 0;
 }
