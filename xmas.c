/****************************
 * Xmas Tree
 * 
 * rev 1 June 2017
 ****************************/

// include
#include <stdio.h>
#include <g2.h>
#include <g2_X11.h>

// defines
#define width 400
#define height 300

/****************************
 * main program
 ****************************/
int
main(void)
{
  int id;
  int i;

  id=g2_open_X11(width, height);

  g2_circle(id, 50, 80, 20);
  g2_line(id, 50, 60, 50, 20);
  g2_line(id, 30, 40, 50, 50);
  g2_line(id, 50, 50, 70, 40);
  g2_line(id, 40, 0, 50, 20);
  g2_line(id, 50, 20, 60, 0);

  for (i=0; i<5; i++)
  {
    g2_rectangle(id, 100+(i*5), i*25, 180-(i*5), (i+1)*25-1);
  }

  // draw the tree
  g2_rectangle(id, 280, 0, 320, 20);
  g2_rectangle(id, 295, 20, 305, 40);
  for (i=0; i<6; i++)
  {
    g2_line(id, 220+(i*10), 40+(i*15), 380-(i*10), 40+(i*15));
    g2_line(id, 220+(i*10), 40+(i*15), 220+(i*10)+30, 40+(i*15)+15);
    g2_line(id, 380-(i*10), 40+(i*15), 380-(i*10)-30, 40+(i*15)+15);
  }

  getchar();
  g2_close(id);
  return(0);
}

