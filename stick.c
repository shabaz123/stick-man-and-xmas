/****************************
 * Stick Man
 * 
 * rev 1 June 2017
 ****************************/

// include
#include <stdio.h>
#include <g2.h>
#include <g2_X11.h>

// defines
#define width 200
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

  getchar();
  g2_close(id);
  return(0);
}

