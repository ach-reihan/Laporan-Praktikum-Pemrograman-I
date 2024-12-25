from math import sqrt

alas = 5
tinggi = 12
sisi_b = sqrt(alas**2 + tinggi**2)
luas = 0.5 * alas * tinggi
keliling = alas + tinggi + sisi_b

print(f"Diketahui :\nAlas = {alas}\nTinggi = {tinggi}")
print("\nJawab :")
print(f"Sisi A = {tinggi} cm")
print(f"Sisi B = {sisi_b:.0f} cm")
print(f"Sisi C = {alas} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")
