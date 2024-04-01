
def countingSort(arr):
    ma = 100 # Supposing the maximum value in the array is 100
    freqs = [ 0 for _ in range(ma) ]
    for val in arr:
        freqs[val] += 1

    return freqs

if __name__ == '__main__':
    arr = [ 1, 4, 1, 2, 7, 5, 2 ]
    print(countingSort(arr))
