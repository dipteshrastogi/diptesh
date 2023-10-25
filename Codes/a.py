import sys;

def main():

    t = int(input(" "))

    while (t):


        values = input(" ")

        store_arr = []

        split_values = values.split()

        for i in split_values:
            store_arr.append(int(i))  


        n = store_arr[0]
        m = store_arr[1]

        m_string = str(m)


        array = [int(i) for i in m_string]


        if ( m > sys.maxsize):
            print(m)

        elif (m % 8 != 0): # 1044  -> 0

            not_divisible = True
            low = min(array)

            low_index = array.index(low)

            # print(low)

            while (not_divisible):
                low = low+1

                array[low_index] = low

                ar_int = int("".join(map(str, array)))

                if ( ar_int % 8 == 0 ):
                    array[low_index] = low

                    print(int("".join(map(str, array))))
                    break
        elif (m % 8 == 0):
            print(m)

        t-=1


main()