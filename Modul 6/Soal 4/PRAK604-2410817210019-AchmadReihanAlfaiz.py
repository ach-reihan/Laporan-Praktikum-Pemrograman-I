code = input()
message = input()

code = code.rstrip("\n")
message = message.rstrip("\n")

if len(code) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
    exit()

star_count = 0
hash_count = 0
result = []

for c, m in zip(code, message):
    if c.isspace() and m.isspace():
        result.append(" ")
    else:
        result.append("*" if c == m else "#")
        if c == m:
            star_count += 1
        else:
            hash_count += 1

print("".join(result))
print(f"* = {star_count}")
print(f"# = {hash_count}")
print("Pesan Asli" if star_count >= hash_count else "Pesan Palsu")
