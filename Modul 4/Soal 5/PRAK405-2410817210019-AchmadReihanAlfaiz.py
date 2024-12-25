n, multiplier = map(int, input().split())
grand_total = 0

for i in range(1, n + 1):
    sum_value = (i * (i + 1) // 2) * multiplier
    grand_total += sum_value

    for j in range(1, i + 1):
        if j > 1:
            print(" + ", end="")
        print(f"({i - j + 1} * {multiplier})", end="")
    print(f" = {sum_value}")

print(grand_total)
