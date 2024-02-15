#!/usr/bin/python3

"""Matrix divisor function"""


def add_integer(a, b=98):
    """
    Adds two integers.

    Args:
        a (int or float): The first number.
        b (int or float): The second number. Defaults to 98.

    Returns:
        int: The sum of a and b.

    Raises:
        TypeError: If a or b is not an integer or float.
    """
    # Check if a is an integer or float
    if not isinstance(a, (int, float)):
        raise TypeError("a must be an integer or float")
    
    # Check if b is an integer or float
    if not isinstance(b, (int, float)):
        raise TypeError("b must be an integer or float")

    # Convert a and b to integers if they are floats
    a = int(a)
    b = int(b)

    # Perform addition and return the result
    return a + b

