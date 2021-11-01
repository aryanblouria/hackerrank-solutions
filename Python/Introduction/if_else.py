if __name__ == '__main__':
    n = int(input().strip())
    if n % 2 == 0:
        if n <= 5 and n >= 2:
            print("Not Weird")
        elif n <= 20 and n >= 6:
            print("Weird")
        else:
            print("Not Weird")
    else:
        print("Weird")
