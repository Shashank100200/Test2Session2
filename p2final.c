#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the points\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
float is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float area;
  area=(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))/2;
  return area;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if (istriangle==0)
    {
      printf("the three points does not form a triangle\n");
    }
  else
  {
    printf("the three points form a triangle\n");
  }
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  float area;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  area=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,area);
  return 0;
}