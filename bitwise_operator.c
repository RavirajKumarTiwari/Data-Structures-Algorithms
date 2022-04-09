#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {//function
  int maxAnd = 0, maxOr = 0, maxXor = 0;//variable declaration and initializion
  for(int i = 1;i < n;i++) // for making combination
  {
      for(int j = i+1;j <= n;j++)
      {
    //checking condition that result of bitwise operator is less then threshold and grater then other result
          if(maxAnd<(i & j) && (i & j)<k)
          maxAnd = (i&j);
          
          if (maxOr<(i | j) && (i | j)<k)
          maxOr = (i|j);
          
          if (maxXor<(i ^ j) && (i ^ j)<k)
          maxXor = (i^j);
      }
  }//print the final output
   printf("AND :- %d\nOR :- %d\nXOR :-%d\n", maxAnd, maxOr, maxXor);

}

int main() {//main function
    int n, k;//k is threshold
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);//function calling
 
    return 0;
}
