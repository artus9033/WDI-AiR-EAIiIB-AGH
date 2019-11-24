def create_list(first_year, last_year):
    return [year for year in range(first_year,last_year+1) if (year % 400 == 0) or ((year % 4 == 0) and not (year % 100 == 0))]

print(create_list(1900,2000))