# Signo 8 bits

       111111
 0x34 = 00110100
-0x34 = 11001100
        --------
       100000000
        --------
 0x34 = 00110100
~             1
        11001011 complemento a 1
               1 le suman 1
       ---------
        11001100

# Negativo a 1
 0x34 = 00110100
        11001011 complemento a 1
        11111111


  100010100_01
  101110000110
  ------------
            11
10 -> 2
 1 -> 1

dec |hex|bin   | octal
0   |0  | 0000 | 000
1   |1  | 0
2   |2  | 0010
3   |3  | 0011
4   |4  | 0100
5   |5  | 0
6   |6  | 0
7   |7  | 0    | 111
8   |8  | 1000
9   |9  | 0
10  |A  | 1010
11  |B  | 1011
12  |C  | 1100
13  |D  | 1101
14  |E  | 1110
15  |F  | 1111

0x41 = 0100001
0x41 = 0100001
       1000010

0x41 = 0100001
0x41 = 0100001
       -------

(0x41 + 0x41 ) + (0x41+ 0x41)



# Num signado 6 bits

  101110 = - 18
  010010 = 18 = 1*2⁴ + 1*2¹

# Num signado 8 bits
  10110110 = -74
1. Analizar el signo
  -
2. Calcular complemento a 2
  10110110
  01001010
3. Calcular en decimal

  01001010 = 1*2⁶ + 1*2³ + 1*2¹ + 0*2⁰
           = 64   +   8  +  2   + 0  = 74

# Num sign de 8 bits

0x23 - 0x10

0x10 = 00010000
       11110000 = -0x10

        11
 0x23 = 0010 0011 =   35
-0x10 = 1111 0000 =  240
        ---- ----
       10001 0011 = 16 + 2 + 1 = 19(decimal)
        ________
 0x13 = 0001 0011 = 19
