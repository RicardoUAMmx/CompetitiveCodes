
def plusMinus(arr):
    n = len(arr)
    counter = {1: 0, -1: 0, 0: 0}
    for value in arr:
        if value > 0:
            counter[1] += 1
        elif value < 0:
            counter[-1] += 1
        else:
            counter[0] += 1

    print( f'{counter[1]/n:.6f}' )
    print( f'{counter[-1]/n:.6f}' )
    print( f'{counter[0]/n:.6f}' )

if __name__ == '__main__':
    arr = [-4, 3, -9, 0, 4, 1]
    plusMinus(arr)
