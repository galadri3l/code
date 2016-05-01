#include <stdio.h>
#include <math.h>
#include "dislin.h"

int main ()
{ int n = 100, i, ic;
  double fpi = 3.1415926 / 180.0, step, x;
  float  xray[100], y1ray[100], y2ray[100];

  step = 360. / (n - 1);

  for (i = 0; i < n; i++)
  { xray[i] = (float) (i * step);
    x = xray[i] * fpi;
    y1ray[i] = (float) sin (x);
    y2ray[i] = (float) cos (x);
  }

  metafl ("cons");
  scrmod ("revers");
  disini ();
  pagera ();
  complx ();
  axspos (450, 1800);
  axslen (2200, 1200);

  name   ("X-axis", "x");
  name   ("Y-axis", "y");

  labdig (-1, "x");
  ticks  (9, "x");
  ticks  (10, "y");

  titlin ("Demonstration of CURVE", 1);
  titlin ("SIN(X), COS(X)", 3);

  ic =   intrgb (0.95,0.95,0.95);
  axsbgd (ic);

  graf   (0.0, 360.0, 0.0, 90.0, -1.0, 1.0, -1.0, 0.5);
  setrgb (0.7, 0.7, 0.7);
  grid   (1, 1);

  color  ("fore");
  height (50);
  title  ();

  color  ("red");
  curve  (xray, y1ray, n);
  color  ("green");
  curve  (xray, y2ray, n);
  disfin ();
  return 0;
}
