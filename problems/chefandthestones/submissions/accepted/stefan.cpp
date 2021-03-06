//Author: Stefan Toman

#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; ++i) {
        long long n1, n2, m;
		scanf("%lld %lld %lld", &n1, &n2, &m);
		long long stones = m*(m+1)/2;
		printf("%lld\n", n1 + n2 - 2*min(min(n1, n2), stones));
	}
	return 0;
}
