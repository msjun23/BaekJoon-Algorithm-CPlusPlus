#include <cstdio>

int main(void) {
	while (true) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a + b + c == 0)
			break;

		if (a * a + b * b == c * c)
			printf("right\n");
		else if (a * a + c * c == b * b)
			printf("right\n");
		else if (b * b + c * c == a * a)
			printf("right\n");
		else
			printf("wrong\n");
	}

	return 0;
}