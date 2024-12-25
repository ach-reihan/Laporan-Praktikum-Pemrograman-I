PI = 22.0 / 7.0

numbers = []

while len(numbers) < 2:
    line = input().strip()
    numbers.extend(map(float, line.split()))

r, t = numbers[:2]

volume = PI * r * r * t
luas = 2 * PI * r * (r + t)
keliling = 2 * PI * r

print(f"\nVolume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")
