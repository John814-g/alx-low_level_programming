#include <cstdio>

int main(void) {
int sum = 0;

for (int i = 3; i < 1024; i++) {
if (i % 3 == 0 || i % 5 == 0) {
sum += i;
}
}

std::printf("%d\n", sum);

return 0;
}

