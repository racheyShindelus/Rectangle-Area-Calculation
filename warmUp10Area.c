#include <stdio.h>
int main()
{
    int height, width, area;
    printf("Enter height of the rectangle: ");
    scanf("%d", &height);
    printf("Enter Width: ");
    scanf("%d", &width);
    area=height*width;
    printf("Area: %d\n", area);
}