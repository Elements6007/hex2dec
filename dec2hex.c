#include <stdio.h>
#include <stdbool.h>

main() {
  bool userStop = false;
  while (userStop != true) {
    int userInput;

    scanf("%d", &userInput);

    printf("HEX: 0x%x\n\n\n", userInput);
    printf("1 to stop, 0 to restart\n");
    scanf("%d", &userStop);
  }
}
