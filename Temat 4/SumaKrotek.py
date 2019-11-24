def sum_of_tuples(list):
    results_list = []
    for tuple in list:
        results_list.append(sum(tuple))
    return results_list

def program():
    tuples=[(1,2),(3,4),(5,6),(7,8)]
    print(sum_of_tuples(tuples))

def main():
    program()

if __name__=="__main__":
    main()