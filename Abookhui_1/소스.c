#include<stdio.h>


int maxprofit(int* P, int N)
{
    int ans = 0;
    if ((P[1] * 2) >= P[2] && (P[1] * 3) >= P[3]) {
        return P[1] * N;
    }

    else if (P[3] >= P[2] + P[1]) {
        ans += P[3] * (N / 3);
        N -= N / 3;

        if (P[2] >= P[1] * 2) {
            ans += P[2] * (N / 2);
            N -= N / 2;
            ans += P[1] * N;
        }
        else {
            ans += P[1] * N;
        }
        return ans;
    }

    else if (P[2] >= P[3] && P[2] > P[1]) {
        ans += P[2] * (N / 2);
        N -= N / 2;

        if (N > 0) {
            ans += P[1];
        }
        return ans;
    }
}

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        int N;    
        int P[4];

        scanf("%d %d %d %d", &P[1], &P[2], &P[3], &N);
     
        int profit = maxprofit(P, N);
        printf("%d¹øÂ° ans : %d\n",i, profit);
        

    }
}