#include<stdio.h>

int main()
{
    int x;
    int y;
    printf("Enter the coordinate points: ");
    scanf("%d%d", &x,&y);

    if(x>0 && y>0)
    {
        printf("Both coordinate points (%d, %d)  lies in 1st quadrant.\n", x,y);
    }
    else if (x < 0 && y > 0)
    {
        printf("Both coordinate points (%d, %d)  lies in 2nd quadrant.\n", x,y);
    }
    else if(x > 0 && y < 0 )
    {
        printf("Both coordinate points (%d, %d)  lies in 3rd quadrant.\n", x,y);
    }
    else if(x < 0 && y < 0)
    {
        printf("Both coordinate points (%d,%d)  lies in 4th quadrant.\n", x,y);
    }
    else if (x==0 && y==0)
    {
        printf("Both coordinate points (%d%d)  lies in origin.\n", x,y);
    }
}