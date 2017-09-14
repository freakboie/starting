# include<stdio.h>
# include<graphics.h>
# include<conio.h>
# include<math.h>
//# include<stdlib.h>
# include<dos.h>
void circleMidpoint (int, int, int);
void drawCircle (int, int, int, int);

void main()
{
clrscr();
// xc and yc is the actual center o the circle with radius r
int  xc,yc,r;
int gd= DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
printf("Enter the center coordinates of circle :");
scanf("%d%d", &xc, &yc);
printf("Enter the radius");
scanf("%d", &r);
circleMidpoint (xc,yc,r);
getch();
}
void circleMidpoint (int xc, int yc, int r)
 {
 int  x= 0 , y = r;
 int  p= 1 -r;

 while  (x < y)
 {
 drawCircle (xc,yc,x,y);
 x++;
 if (p<0)
     p = p + 2 * x + 1;
 else
 {
    y--;
    p = p + 2 * (x-y) + 1;
 }
 drawCircle(xc, yc, x, y);
 delay(50);
 }
 }

 void drawCircle (int xc, int yc, int x, int y)
 {
     putpixel (xc+x, yc+y, RED);
     putpixel (xc-x, yc+y, RED);
     putpixel (xc+x, yc-y, RED);
     putpixel (xc-x, yc-y, RED);
     putpixel (xc+y, yc+x, RED);
     putpixel (xc-y, yc+x, RED);
     putpixel (xc+y, yc-x, RED);
     putpixel (xc-y, yc-x, RED);
 }