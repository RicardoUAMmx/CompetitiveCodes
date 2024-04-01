
def timeConversion(s):
    hms = s[:-2].split(':')
    h = int(hms[0])
    if 'PM' in s:
        if h != 12:
            h += 12
            hms[0] = str(h)
    else:
        if h == 12:
            hms[0] = '00'
            hms[0] = str(h)

    return ':'.join(hms)

if __name__ == '__main__':
    s = input()
    result = timeConversion(s)

    print(result)
