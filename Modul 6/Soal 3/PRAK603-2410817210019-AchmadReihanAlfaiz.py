n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah tidak sama")
else:
    row1 = list(map(int, input().split()))
    row2 = list(map(int, input().split()))
    print(" ".join(str(row1[i] * row2[i]) for i in range(n1)))
