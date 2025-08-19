// Write a  program that prints the perimeter of a rectangle to take its height and width as input
// Perimeter = 2 * (Height + Width)
// Sample Input → Height : 10
// Sample Input → Width : 15
// Sample Output → Perimeter of the rectangle is  50

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the length and breadth:");
    scanf("%i%i", &a, &b);
    printf("Perimeter of rectangle is %i.\n", 2 * (a + b));
    printf("Area of rectangle is %i", a * b);
    return 0;
}