#include <stdio.h>
/*
  theSecondComment
*/
void second_func(void) {}
int main(void) {
  /*
    theFirstComment
  */
  char *c="#include <stdio.h>%c/*%c  theSecondComment%c*/%cvoid second_func(void) {}%cint main(void) {%c  /*%c    theFirstComment%c  */%c  char *c=%c%s%c;printf(c,10,10,10,10,10,10,10,10,10,34,c,34,10,10);%c}%c";printf(c,10,10,10,10,10,10,10,10,10,34,c,34,10,10);
}
