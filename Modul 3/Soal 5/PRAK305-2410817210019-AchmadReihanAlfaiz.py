user_input = int(input())

detik = user_input % 60
menit = (user_input // 60) % 60
jam = (user_input // 3600) % 24
hari = user_input // 86400

if user_input >= 86400:
    print(f"\nOutput: \n{hari} hari {jam:02}:{menit:02}:{detik:02}")
else:
    print(f"\nOutput: \n{jam:02}:{menit:02}:{detik:02}")
