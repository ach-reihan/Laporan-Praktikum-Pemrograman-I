number_input, symbol_input = input().split()
number_input = int(number_input)

min_value, max_value = 1, 50

for i in range(min_value, max_value + 1):
    if i % number_input == 0:
        print(symbol_input, end=" ")
        continue

    print(i, end=" ")
