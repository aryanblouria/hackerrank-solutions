if __name__ == '__main__':
    s = input()
    print(any(c.isalnum() for c in s))
    print(any(c.isalpha() for c in s))
    print(any(c.isnumeric() for c in s))
    print(any(c.islower() for c in s))
    print(any(c.isupper() for c in s))
