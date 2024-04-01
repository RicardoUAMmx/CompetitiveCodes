
def lonelyInteger(arr):
    result = 0
    for i in arr:
        result ^= i

    return result

if __name__ == '__main__':
    arr = [1, 2, 3, 4, 3, 2, 1]
    print(lonelyInteger(arr))
