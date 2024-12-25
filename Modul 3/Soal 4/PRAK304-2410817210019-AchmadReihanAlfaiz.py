user_input = int(input())

print("\nOutput: ")

if user_input == 10 or (user_input >= 20 and user_input < 100):
    print("Puluhan")
elif user_input >= 11 and user_input <= 19:
    print("Belasan")
elif user_input >= 1 and user_input <= 9:
    print("Satuan")
elif user_input == 0:
    print("Nol")
else:
    print("Anda Menginput Melebihi Limit Bilangan")
