#include <assert.h>
#include <stdio.h>

#define MAXN 1000000
static int X[MAXN];
static int P[MAXN];
static int WT[MAXN][2];
static int Costo = 0;
static int K = 0;

void posiziona(int W, int T)
{
    WT[K][0] = W;
    WT[K][1] = T;
    K++;
}

void budget(int B)
{
    Costo = B;
}

void irriga(int C, int N, int* X, int* P);

int main()
{
    // Input da file:
    // freopen("input.txt", "r", stdin);

    // Output su file:
    // freopen("output.txt", "w", stdout);

    int C, N;
    assert(2 == scanf("%d\n%d", &C, &N));
    for (int i = 0; i < N; i++) {
        assert(2 == scanf("%d %d", &X[i], &P[i]));
    }

    irriga(C, N, X, P);
    printf("%d\n%d\n", Costo, K);

    for (int i = 0; i < K; i++) {
        printf("%d %d\n", WT[i][0], WT[i][1]);
    }

    return 0;
}
