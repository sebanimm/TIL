# n = int(input())
# a = list(map(int, input().split()))
# m = int(input())
# b = list(map(int, input().split()))


# def zz(arr, value, first, last):
#     while first <= last:
#         mid = int((first + last) / 2)
#         if arr[mid] == value:
#             return mid + 1
#         else:
#             if value < arr[mid]:
#                 last = mid - 1
#             else:
#                 first = mid + 1
#     return -1


# for i in range(m):
#     print(zz(a, b[i], 0, n - 1), end=" ")
import bisect as bs

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

for i in range(m):
    res = bs.bisect_left(a, b[i])
    if res < n and a[res] == b[i]:
        print(res + 1, end=" ")
    else:
        print(-1, end=" ")
