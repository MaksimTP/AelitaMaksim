x = [1,2,3,4,5,6]

def get_mean(lst):
    mean = 0

    for i in lst:
        mean += i

    mean /= len(lst)

    return mean

def get_max(lst):
    max_ = lst[0]

    for i in lst:
        if i > max_:
            max_ = i

    return max_

def get_min(lst):
    min_ = lst[0]

    for i in lst:
        if i < min_:
            min_ = i

    return min_

# mean

# sd = sum((xi - x_mean)**2) / n

def get_SD(lst):
    sd = 0
    mean = get_mean(lst)

    for i in lst:
        sd += (i - mean)**2
    
    sd /= len(lst)
    return sd


def calculate_and_display(lst):
    print(f"Mean: {get_mean(lst)}")
    print(f"Max: {get_max(lst)}")
    print(f"Min: {get_min(lst)}")
    print(f"SD: {round(get_SD(lst), 3)}")

# mean
# max
# min
# standard deviation

# Mean: %f
# Max: %d
# Min: %d
# SD: %f

calculate_and_display(x)