int window_width = 800;
int window_height = 600;

#include <iostream>
#include "platform.h"

void render(Platform* p);
int main()
{		
	initXWindows();
	init_opengl();
	Platform p;
	
	//Declare Plaforms
	for(int i = 0; i<5; i++)
	{
		p.platform[i].width=50;
		p.platform[i].height=10;
		p.platform[i].center.x=120+5*65-50*i;
		p.platform[i].center.y=120+5*65-50*i;
	render(&p);
return 0;
}
void render(Platform *p)
{
glColor3ub(255,255,255);
	
	
		float w, h;
	for(int j = 0; j < 5; j++)
		{
			s = &game->platform[j];
			glPushMatrix();
			glTranslatef(s->center.x,s->center.y, s->center.z);
			w=s->width;
			h=s->height;
			glBegin(GL_QUADS);
			glVertex2i(-w,-h);
			glVertex2i(-w,h);
			glVertex2i(w,h);
			glVertex2i(w,-h);
			glEnd();
			glPopMatrix();
		}
}