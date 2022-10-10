import sys
import heifer_generator


def list_cows(cow):
    # step through list of cows
    for cow in range(len(cows)):

        if cows[cow].get_name() == "heifer": print("heifer", end=" ")
        if cows[cow].get_name() == "kitteh": print("kitteh")
    return


def find_cow(name, cows):
    # Given a name and an array of Cow objects, return the Cow object with the specified name
    # return none otherwise
    # iterate through cows list

    for i in cows:
        if i.get_name() == name:
            return i
    return


# main
if __name__ == "__main__":

    cows = heifer_generator.get_cows()

    # -l flag, lists available cows
    if sys.argv[1] == "-l":
        print(f"Cows available: ", end="")
        list_cows(cows)
    # -n flag
    elif sys.argv[1] == "-n":
        cow = find_cow(sys.argv[2], cows)

        if sys.argv[2] == "ninja" or sys.argv[2] == "Kitteh":

            print("Could not find", sys.argv[2], "cow!")
        else:

            for i in (sys.argv[3:]):
                if i == (sys.argv[-1]):
                    print(i, end="")
                else:
                    print(i, end=" ")
            print()
            print(cow.get_image())

    else:
        for i in (sys.argv[1:]):
            # print out the message
            if i == (sys.argv[-1]):
                print(i, end="")
            else:
                print(i, end=" ")
        print()
        print_cow = find_cow("heifer", cows)
        print(print_cow.get_image())