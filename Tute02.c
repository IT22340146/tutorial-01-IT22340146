/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.

e.g.

Distance -> 20
Amount = 20 x 50 = 1000

Distance -> 500
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  
  int dis, amount;

  printf("enter distance ");
  scanf("%d", &dis);

  if (dis <= 30)
  {
    amount = 50 * dis;
    printf("Amount is %d", amount);
  }
  else
  {
    amount = ((dis - 30) * 40) + 1500;
    printf("Amount is %d", amount);
  }
  
  return 0;
}
