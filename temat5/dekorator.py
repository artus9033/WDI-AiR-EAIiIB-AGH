import time

def dekorator(function):
    start_time = time.clock()
    function()
    end_time = time.clock()
    print(end_time-start_time)


@dekorator
def some_function():
