N, M = map(int, input().split())
found_board = []
result = []

for _ in range(N):
    found_board.append(input())

for n in range(N - 7):
    for m in range(M - 7):
        count_of_white = 0
        count_of_black = 0

        for i in range(n, n + 8):
            for j in range(m, m + 8):
                if (i + j) % 2 == 0:
                    if found_board[i][j] == "W":
                        count_of_black += 1
                    if found_board[i][j] == "B":
                        count_of_white += 1
                else:
                    if found_board[i][j] == "B":
                        count_of_black += 1
                    if found_board[i][j] == "W":
                        count_of_white += 1

        result.append(min(count_of_white, count_of_black))

print(min(result))
