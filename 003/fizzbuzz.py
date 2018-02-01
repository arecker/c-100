def main():
    for i in range(1000000):
        display(i)


def display(i):
    if not i % 3:
        print("Fizz")
    elif not i % 5:
        print("Buzz")
    else:
        print(i)


if __name__ == '__main__':
    main();
