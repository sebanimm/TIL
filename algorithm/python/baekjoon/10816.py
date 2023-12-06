from collections import Counter
from sys import stdin

input = stdin.readline

N = int(input())
cards = list(map(int, input().split()))
M = int(input())
compared_cards = list(map(int, input().split()))


count = Counter(cards)

for i in range(M):
    if compared_cards[i] in count:
        print(count[compared_cards[i]], end=" ")
    else:
        print(0, end=" ")
