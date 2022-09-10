for _ in range(3):
  a, b, c, d, e, f = map(int, input().split())
  g = a * 60 * 60 + b * 60 + c
  h = d * 60 * 60 + e * 60 + f
  t = h - g
  h = t // 60 // 60 % 24
  m = t // 60 % 60
  s = t % 60
  print(h, m, s)
