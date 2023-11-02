K = int(input())


for _ in range(K):
    N, M = map(int, input().split())
    queue = list(map(int, input().split()))
    queue_order = [i for i in range(len(queue))]
    count = 0

    while True:
        if queue[0] != max(queue):
            queue = queue[1:] + queue[:1]
            queue_order = queue_order[1:] + queue_order[:1]
        else:
            count += 1
            if queue_order[0] == M:
                break
            else:
                queue = queue[1:]
                queue_order = queue_order[1:]

    print(count)
