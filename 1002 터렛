#include<stdio.h>
#include<math.h>
int main() {
	int number = 0;
	double x1, y1, x2, y2, r1, r2,r;
	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		if (x1 > 10000 || x1 < -10000 || y1>10000 || y1 < -10000 || r1 < 0 || r1>10000 || x2>10000 || x2 < -10000 || y2>10000 || y2 < -10000 || r2 < 0 || r2>10000) {
			continue;
		}
		r = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2) {
				printf("-1\n");
			}
			else {
				printf("0\n");
			}
		}
		else if((r<(r1+r2)*(r1 + r2))&&(r>fabs((r1 - r2) * (r1 - r2)))) {
			printf("2\n");
		}
		else if ((r == (r1 + r2) * (r1 + r2)) || (r == fabs((r1 - r2) * (r1 - r2)))) {
			printf("1\n");
		}
		else {
			printf("0\n");
		}
	}
}
