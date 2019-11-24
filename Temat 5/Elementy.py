def sets_method(list1, list2):
    return list(set(list1).intersection(set(list2)))

def loop_method(list1, list2):
    result = []
    for element in list1:
        if element in list2 and not(element in result):
            result.append(element)
    return result