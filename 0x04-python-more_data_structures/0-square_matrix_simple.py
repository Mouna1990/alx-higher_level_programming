#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    # Use map to square each element in the rows of the input matrix
    new_matrix = [list(map(lambda x: x**2, row)) for row in matrix]
    return new_matrix
