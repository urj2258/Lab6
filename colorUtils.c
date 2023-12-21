#include <stdlib.h>
#include <math.h>

#include "colorUtils.h"

int max(int a, int b, int c) {
  return (a > b) ? (a > c ? a : c) : (b > c ? b: c);
}

int min(int a, int b, int c) {
  return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}

ErrorCode toGrayScale(int *r, int *g, int *b, Mode mode) {
  //TODO: implement
   if(*r<0 || *g<0 || *b<0 || *r>255 || *g>255 || *b>255)
  {
    return INVALID_INPUT;
  }
   int average=(*r+*g+*b)/3;

   if(mode==average || mode==LIGHTNESS)
  {
    *r=*g=*b=average;
  }
  else if(mode==LUMINOSITY)
  {
    *r=*g=*b=(int)(0.21**r+0.72**g+0.07**b);
  }

  return NO_ERROR;

}

ErrorCode toSepia(int *r, int *g, int *b) {
  //TODO: implement
   if(*r<0 || *g<0 || *b<0 || *r>255 || *g>255 || *b>255)
  {
    return INVALID_INPUT;
  }

}
