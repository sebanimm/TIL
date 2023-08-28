# case 3개 모두 통과
# 종류 1 (34점): N = 2; K = 1
# 종류 2 (35점): 모든 문자열은 길이가 1이다.
# 종류 3 (31점): 추가적인 제한 조건이 없음.

N = int(input())
all_jobs = [input() for _ in range(N)]

K = int(input())
owned_jobs = [input() for _ in range(K)]

new_jobs = set(all_jobs) - set(owned_jobs)

print(len(new_jobs))

for job in new_jobs:
    print(job)
