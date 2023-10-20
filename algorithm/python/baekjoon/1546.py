N = int(input())
scores = input().split()
scores = [int(score) for score in scores]
highest_score = max(scores)
manipulated_scores = [score/highest_score*100 for score in scores]
print(sum(manipulated_scores)/N)
