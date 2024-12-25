from math import sqrt

numbers = []

while len(numbers) < 2:
    line = input().strip()
    numbers.extend(map(float, line.split()))

A, B = numbers[:2]

C = sqrt(B * B - A * A)
keliling = A + B + C
luas = 0.5 * C * A

print(f"\nAlas = {C:.0f} cm")
print(f"Tinggi = {A:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")
