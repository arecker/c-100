import codecs


def read_in_chunks(file_object, chunk_size=1024):
    while True:
        data = file_object.read(chunk_size)
        if not data:
            break
        yield data


def main():
    charcount = 0
    f = codecs.open('/tmp/bible.txt', encoding='utf-8')
    for chunk in read_in_chunks(f):
        charcount += len(chunk)
    print("There are {} characters in the bible".format(charcount))


if __name__ == '__main__':
    main()
