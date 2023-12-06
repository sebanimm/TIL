N = int(input())
user_list = []

for i in range(N):
    age, name = input().split()
    user_list.append([int(age), i, name])

for user in sorted(user_list):
    print(f"{user[0]} {user[2]}")
