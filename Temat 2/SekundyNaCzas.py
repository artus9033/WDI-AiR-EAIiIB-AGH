number = int(input("Podaj liczbe"))
hours = number // 3600
minutes = (number // 60) % 60
seconds = number - hours * 3600 - minutes * 60
print(hours, minutes, seconds, sep=':')