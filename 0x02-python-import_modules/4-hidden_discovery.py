#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
    mods = dir(hidden_4)
    for i in mods:
        if i[0] != '_':
            print("{}".format(i))
