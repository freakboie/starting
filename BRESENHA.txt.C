#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
void linebres(int,int,int,int);
void main()
  {
   int x1,y1,xn,yn;
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");
   printf("enter the starting coordinate:");
   scanf("%d%d",&x1,&y1);
   printf("enter the ending coordinate:");
   scanf("%d%d",&xn,&yn);
   linebres(x1,y1,xn,yn);
   getch();
   }
void linebres(int x1,int y1,int xn,int yn)
  {
   int dx=xn-x1,dy=yn-y1;
   int di=2*dy-dx;
   int ds=2*dy,dt=2*(dy-dx);
   putpixel(x1,y1,RED);
       while(x1<xn)
	 {
	  x1++;
	  if(di<0)
	   di=di+ds;
	     else
	      {
	       y1++;
	       di=di+dt;
	       }
	putpixel(x1,y1,RED);
	delay(20);

	}}
