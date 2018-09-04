#include<cstdio>
#include<algorithm>
using namespace std;
pair<int, int> p[2000000];
int r, s, n;
int main() {
    scanf("%d", &n);
    for (int i = 0, x, y; i < n; i++) {
        scanf("%d%d", &x, &y);
        p[i] = { x,1 };
        p[i + n] = { y,-1 };
    }
    sort(p, p + 2 * n);
    for (int i = 0; i < 2 * n; i++) {
        s += p[i].second;
        r = max(r, s);
    }
    printf("%d", r);
    return 0;
}
