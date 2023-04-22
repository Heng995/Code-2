def str2z(ch):
    if ch == 'Z':
        return 'Z'
    else:
        return ch + str2z(chr(ord(ch)+1))
    