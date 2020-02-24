found_solutions = 0
for num_of_tens in range(11):
    for num_of_fives in range(21):
        for num_of_twos in range(51):
            if num_of_twos * 2 + num_of_fives * 5 + num_of_tens * 10 == 100:
                found_solutions += 1
print(found_solutions)
