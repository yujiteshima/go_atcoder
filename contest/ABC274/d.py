N, x, y = map(int, input().split())
A = list(map(int, input().split()))

M = 2 * 10 ** 4 + 1
dp1 = [[False] * (M) for _ in range((N + 1) // 2)]
dp2 = [[False] * (M) for _ in range(N // 2 + 1)]
dp1[0][10 ** 4 + A[0]] = True
dp2[0][10 ** 4] = True

for i in range(1, N):
    if i % 2 == 1:
        k = (i + 1) // 2
        for j in range(M):
            if 0 <= A[i] + j < M:
                dp2[k][j] = dp2[k-1][j + A[i]]
            if 0 <= j - A[i] < M:
                dp2[k][j] = dp2[k-1][j - A[i]] | dp2[k][j]
    else:
        k = i // 2
        for j in range(M):
            if 0 <= A[i] + j < M:
                dp1[k][j] = dp1[k-1][j + A[i]]
            if 0 <= j - A[i] < M:
                dp1[k][j] = dp1[k-1][j - A[i]] | dp1[k][j]

if dp1[-1][10 ** 4 + x] and dp2[-1][10 ** 4 + y]:
    res = "Yes"
else:
    res = "No"

print(res)
