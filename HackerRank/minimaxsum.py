
def miniMaxSum(arr):
    ma = 0
    mi = 10**9
    n = len(arr)
    for i in range(n):
        result = 0
        for j in range(n):
            result += arr[j]

        result -= arr[i]
        if ma < result:
            ma = result

        if mi > result:
            mi = result

    print(mi, ma)

if __name__ == '__main__':
    arr = [1, 2, 3, 4, 5]
    miniMaxSum(arr)
