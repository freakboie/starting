# include <stdio.h>
# include <conio.h>
# include <graphics.h>

int polygonpoints [3] [2] = {{10,100},
			    {110,100},
			    {110,200}};
void polyline()
{
	 int i;
	 cleardevice();
	 line(0,240,640,240);
	 line(320,0,320,480);
	 for (i=0;i<3; i++)
	 {
	     line(320 + polygonpoints[i] [0],240-polygonpoints[i][1],
	     320+ polygonpoints[(i+1)%3] [0],240- polygonpoints[(i+1)%3] [1]);
	 }
}

void reflect ()
{
 int i;
 for (i=0; i<3; i++)
      polygonpoints[i] [1] = -polygonpoints[i] [1] ;
}
void main ()
{
	int gdriver  = DETECT, gmode, i;
	initgraph (&gdriver, &gmode, "c:\\tc\\bgi");
	polyline();
	getch();
	reflect();
	polyline();
	getch();
	}

