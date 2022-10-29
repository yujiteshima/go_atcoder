S = [input() for _ in range(9)]

ans = 0
for i in range(9):
    for j in range(9):
        if S[i][j] == ".":
            continue
        for z in range(9):
            for v in range(9):
                if S[z][v] == "." or (i == z and j == v):
                    continue
                a_x = z - v + j
                a_y = z + v - i
                b_x = i - v + j
                b_y = j + z - i
                if 0 <= a_x < 9 and 0 <= a_y < 9 and 0 <= b_x < 9 and 0 <= b_y < 9:
                    if S[a_x][a_y] == "#" and S[b_x][b_y] == "#":
                        ans += 1

ans //= 4
print(ans)
