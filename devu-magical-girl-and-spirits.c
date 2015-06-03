#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Should identify this as a type of problem
// Figure out what this problem is.

// Wat, first compile? oO
// Give me some test cases?!
// Pretty silly that they don't provide more test cases.
// Rather than saying "it fails" give me an example! For crying out loud
// ............

// Ok w/e, I give up

// Lessons learned
// 1. No test cases fucking sucks.
// 2. Identify problem and express as small algo instead

// 2*(minimal) that is all hm?

int voyage(int n, int foresight) {
  int j = 0; // miss #1
  int spirit = 0;
  int special = 0;
  int girl = 0;
  int worst = 0;
  int worstpos = 0;
  int neutralized = 0;
  int neutralizedpos = 0;

  printf("%s: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", "STATE",
         n, foresight, j, spirit, special, girl, worst,
         worstpos, neutralized, neutralizedpos);

  // for each spirit
  for (j = 0; j < n; j++) {
    scanf("%d", &spirit);

    // save the worst spirit
    if (spirit < worst) {
      worst = spirit;
      worstpos = j;
    }

    // when recursing, use special
    if (j == foresight) {
      girl += abs(spirit);  
      special = 1;
    }

    // danger of death
    if ((girl + spirit) < 0) {

      if (special == 1) {        
        if ((worst < neutralized) && (worst < spirit)) // wrong metric?
          return voyage(n, worstpos); // save possible with foresight
        else
          return j+1; // dead for real
      }
      
      else {
        special = 1;
        girl += abs(spirit);
        neutralized = spirit;
        neutralizedpos = j;
      }
      
    }
    else
      girl += spirit;
  }
  return 0;
}

int main() {
  int i, n, t;
  scanf("%d", &t); // number of test cases

  // for each test case
  for (i = 0; i < t; i++) {
    // Miss 2? something n addr not reset, test1b.txt correct, test1.txt wrong
       scanf("%d", &n); // number of spirits

    printf("%s: %d\n", "TEST CASE w n", n);
    
    int result = voyage(n, -1);
    if (result == 0) printf("%s\n", "She did it!");
    else printf("%d\n", result);
  }
  
  return 0;
}
