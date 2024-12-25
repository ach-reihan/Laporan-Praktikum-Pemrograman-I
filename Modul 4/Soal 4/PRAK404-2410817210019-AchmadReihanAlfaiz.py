while True:
    print("\nPilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan: "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Achmad Reihan Alfaiz\n")
        break

    if pilihan < 1 or pilihan > 4:
        print("Input Anda salah, silakan coba lagi")
        continue

    num1 = float(input("Masukkan nilai pertama: "))
    num2 = float(input("Masukkan nilai kedua: "))

    if pilihan == 1:
        print(
            f"Hasil penjumlahan antara {num1:.2f} dengan {num2:.2f} adalah {num1 + num2:.2f}"
        )
    elif pilihan == 2:
        print(
            f"Hasil pengurangan antara {num1:.2f} dengan {num2:.2f} adalah {num1 - num2:.2f}"
        )
    elif pilihan == 3:
        print(
            f"Hasil perkalian antara {num1:.2f} dengan {num2:.2f} adalah {num1 * num2:.2f}"
        )
    elif pilihan == 4:
        if num2 != 0:
            print(
                f"Hasil pembagian antara {num1:.2f} dengan {num2:.2f} adalah {num1 / num2:.2f}"
            )
        else:
            print("Error: Division by zero")
