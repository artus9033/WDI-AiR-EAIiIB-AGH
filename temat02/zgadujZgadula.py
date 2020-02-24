import random

correct_answer = random.randint(1, 10)
for _ in range(3):
    guess = int(input("Podaj liczbe: "))
    if guess == correct_answer:
        print("Wygraleś!")
        break
    elif guess > correct_answer:
        print("Za duża!")
    else:
        print("Za mala!")

else:
    print("Przegrałeś!")
