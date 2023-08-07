#include <cstdio>
#include <cstring>

char buff[111];
int N;

int main() {
  scanf("%s", buff);
  scanf("%d", &N);

  int len = strlen(buff);
  for (int i = 0; i < len; i++) {
    int ord = (buff[i] + N);
    printf("%d\n", ord);
    printf("=========\n");
    if(ord > 122) {
        int ord = ((ord + 1) % 122) + 96;
    }
    printf("%d\n", ord);
    buff[i] = ord;
  }

  printf("%s\n", buff);
}