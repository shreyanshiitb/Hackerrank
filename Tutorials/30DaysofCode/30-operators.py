#!/bin/python3

import sys
import math
if __name__ == "__main__":
    meal_cost = float(input().strip())
    tip_percent = int(input().strip())
    tax_percent = int(input().strip())
    print("The total meal cost is",math.floor(meal_cost + meal_cost*(tip_percent+tax_percent)/100 + 0.5),"dollars.")

