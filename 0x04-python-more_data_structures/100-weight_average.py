#!/usr/bin/python3

def weight_average(my_list=[]):
    score_sum = 0
    weight_sum = 0

    for score, weight in my_list:
        score_sum += score * weight
        weight_sum += weight

    return score_sum / weight_sum if weight_sum != 0 else 0
