value_count = int(input())
values = list(map(int, input().split()))
result = []

for i in range(value_count):
    result.append(values[i] * (i + 1))

print(" ".join(map(str, result)))
