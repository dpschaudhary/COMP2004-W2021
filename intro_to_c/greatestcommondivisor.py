#!/usr/bin/env python3

def gcd(a, b):
  if b == 0:
    return a
  else:
    return gcd(b, a % b)

if __name__ == "__main__":
  print("GCD: " + str(gcd(24, 40)))
