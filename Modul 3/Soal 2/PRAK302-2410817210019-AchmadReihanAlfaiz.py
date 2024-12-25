userInput = int(input())

nilaiHuruf = (
    "A"
    if userInput >= 80
    else "B"
    if userInput >= 70
    else "C"
    if userInput >= 60
    else "D"
    if userInput >= 50
    else "E"
)

print(f"\nOutput: \n{nilaiHuruf}")
