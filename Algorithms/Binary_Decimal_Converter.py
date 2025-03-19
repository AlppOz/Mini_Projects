import math

def binary_to_decimal_whole(number_binary):  # receives str
    digits = [int(digit) for digit in str(number_binary)]
    total = 0
    for digit, x in zip(digits, range(len(digits) - 1, -1, -1)):
        total = digit * pow(2, x) + total
    return total

def binary_to_decimal_fraction(number_binary):  # receives str
    digits = [int(digit) for digit in str(number_binary)]
    total = 0
    for digit, x in zip(digits, range(-1, -len(digits) - 1, -1)):
        total = digit * pow(2, x) + total
    return total

def binary_to_decimal_full(number_binary):  # receives str like "101.1011"
    if '.' in number_binary:
        whole_bit_str, fraction_bit_str = number_binary.split(".")
        full_decimal = binary_to_decimal_whole(whole_bit_str) + binary_to_decimal_fraction(fraction_bit_str)
    else:
        full_decimal = binary_to_decimal_whole(number_binary)
    return full_decimal

def decimal_to_binary_whole(number_decimal):  # receives int
    digits = []
    power = math.floor(math.log(number_decimal, 2))
    total = 0
    for po in range(power, -1, -1):
        total = pow(2, po) + total
        if total <= number_decimal:
            digits.append(1)
        else:
            digits.append(0)
            total = total - pow(2, po)
    result = "".join(map(str, digits))  # STAYS as string
    return result

def decimal_to_binary_fraction(number_decimal):  # receives str like "625"
    digits = []
    total = 0
    po = -1
    bytes_size = 2

    number_decimal = float("0." + number_decimal)

    while total != number_decimal:
        if pow(2, po) + total <= number_decimal:
            total = pow(2, po) + total
            digits.append(1)
        else:
            digits.append(0)
        po = po - 1
        if len(digits) > bytes_size * 8 - 1:
            break
    result = "".join(map(str, digits))
    return result

def decimal_to_binary_full(number_decimal):  # receives str like "10.625"
    if '.' in number_decimal:
        whole_bit_str, fraction_bit_str = number_decimal.split(".")
        whole_bit = int(whole_bit_str)
        whole_part = decimal_to_binary_whole(whole_bit)
        fraction_part = decimal_to_binary_fraction(fraction_bit_str)
        full_binary = whole_part + "." + fraction_part
    else:
        number_decimal = int(number_decimal)
        full_binary = decimal_to_binary_whole(number_decimal)
    return full_binary

# MAIN LOOP
while True:
    answer1 = int(input("1 for Binary Input\n2 for Decimal Input\n"))
    t, z = 'p', 'p'
    while answer1 == 1:
        x = input("Enter: ")
        print(binary_to_decimal_full(x))
        t = input("o to discontinue:\n")
        if t == 0:
            break
    while answer1 == 2:
        x = input("Enter: ")
        print(decimal_to_binary_full(x))
        z = input("o to discontinue:\n")
        if z == 0:
            break