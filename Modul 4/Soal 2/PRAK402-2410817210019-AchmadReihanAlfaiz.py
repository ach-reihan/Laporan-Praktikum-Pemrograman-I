max_value = int(input())

for i in range(1, max_value + 1, 2):
    print(i, end=" ")
print()

start = max_value if max_value % 2 == 0 else max_value - 1
for i in range(start, 1, -2):
    print(i, end=" ")
