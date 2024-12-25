baris, kolom = map(int, input().split())
matrix = []

values = list(map(int, input().split()))

for i in range(baris):
    row = values[i * kolom : (i + 1) * kolom]
    matrix.append(row)


for row in matrix:
    print(" ".join(map(str, row)))
