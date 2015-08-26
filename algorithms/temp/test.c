#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compareHeight(int a, int b, int h) {
  if(a - b <= h){
    if (a - b > 0){
      return 1;}
  else
    if(b - a <= h){
      if(b - a > 0)
        return 1;
      else
        return 0;
      }
}

int main() {

    int N;
    int K;
    int i=0;

    scanf("%d", &N);
    scanf("%d", &K);

    int hBoys[ N ];

    for(i=0; i<N; i++) {
      scanf("%d", &hBoys[i]);
    }

    int hGirls[ N ];

    for(i=0; i<N; i++) {
      scanf("%d", &hGirls[i]);
    }

    int noOfPairs=0;

    for(i=0; i<N; i++) {
      noOfPairs = noOfPairs + compareHeight(hBoys[i], hGirls[i], K);
    }

    printf("%d\n", noOfPairs);
    return 0;
}
