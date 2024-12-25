num1, num2, num3 = map(int, input().split())

if num1 > num2:
    num1, num2 = num2, num1
if num1 > num3:
    num1, num3 = num3, num1
if num2 > num3:
    num2, num3 = num3, num2

print("\nOutput: ")
print(num1, num2, num3)
