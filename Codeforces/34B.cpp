#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#define N 1000
using namespace std;

int a[N];

int main(void)
{
    int n, m;
    int i;
    int o;

    scanf("%d %d", &n, &m);
    for(i = 0; i < n; i ++)
        scanf("%d", &a[i]);

    sort(a, a + n);
    for(i = o = 0; i < m; i ++)
        if(a[i] < 0)
            o -= a[i];

    printf("%d\n", o);

    return 0;
}