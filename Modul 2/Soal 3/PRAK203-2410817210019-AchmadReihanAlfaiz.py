numbers = []

while len(numbers) < 6:
    line = input().strip()
    numbers.extend(map(float, line.split()))

a, b, i, j, x, y = numbers[:6]
hasil = (a - b) * (i / j) - (x + y)
print(f"\nOutput : {hasil:.3f}")
