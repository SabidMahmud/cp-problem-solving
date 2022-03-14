// BeeCrowd #1041
// Determine the Coordinates of a point

#include <stdio.h>
int main(void) {
  float x, y;
  scanf("%f %f", &x, &y);
  // Cases: x=0, y=0, x>0, y>0, x<0, y<0
  // case1 : (x=0 && y=0)
  if (x == 0 && y == 0) {
    printf("Origem\n");
  } else if (x == 0 && y != 0) { // Case2: point on y axis
    printf("Eixo Y\n");
  } else if (y == 0 && x != 0) { // Case3: point on x axis
    printf("Eixo X\n");
  } else if (x > 0 && y > 0) { // Case4: point on Q1
    printf("Q1\n");
  } else if (y > 0 && x < 0) { // case5: point on Q2
    printf("Q2\n");
  } else if (x < 0 && y < 0) { // case6: point on Q3
    printf("Q3\n");
  } else { // case7: point on Q4
    printf("Q4\n");
  }
  return 0;
}
