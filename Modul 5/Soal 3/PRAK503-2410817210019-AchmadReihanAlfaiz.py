def maksimal(a, b):
    return a if a > b else b


def minimal(a, b):
    return a if a < b else b


n = int(input())
nilai_list = list(map(int, input().split()))

maks = nilai_list[0]
minim = nilai_list[0]

for nilai in nilai_list:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(f"{maks} {minim}")
