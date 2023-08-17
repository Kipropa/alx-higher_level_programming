#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    # Create an empty dictionary to store the new key-value pairs
    new_dict = {}
    
    # Iterate through each key-value pair in the input dictionary
    for key, value in a_dictionary.items():
        # Multiply the value by 2 and store it in the new dictionary
        new_value = value * 2
        new_dict[key] = new_value
    
    # Return the new dictionary with values multiplied by 2
    return new_dict
