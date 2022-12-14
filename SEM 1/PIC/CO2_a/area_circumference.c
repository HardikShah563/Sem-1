#include <stdio.h>
void main()
{
    int length = 10;
    int breadth = 5;
    int radius = 20;
    float area;
    float circumferene;
    float pi = 3.14;
    /*Area of rectangle*/
    area = length * breadth;
    printf("Area of a rectangle with length %d and breadth %d is:  %f \n", length, breadth, area);
    /*Area of a circle*/
    area = pi * radius * radius;
    printf("Area of a circle with radius %d is:  %f \n", radius, area);
    /*Circumference(Perimeter) of rectangle*/
    circumferene = 2 * (length + breadth);
    printf("Perimeter of rectangle with length %d and breadth %d is:  %f \n", length, breadth, circumferene);
    /*Circumference of circle*/
    circumferene = 2 * pi * radius;
    printf("Circumference of circle with radius %d is:  %f \n", radius, circumferene);
}
