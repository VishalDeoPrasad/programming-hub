class BinaryString:
    def __init__(self, a, b):
        self.a = a
        self.b = b
    def samebit(self):
        lenA = len(self.a)
        lenB = len(self.b)
        if lenA != lenB:
            if lenA > lenB:
                zeros = '0'*(lenA-lenB)
                self.b = zeros + self.b
            else:
                zeros = '0'*(lenB-lenA)
                self.a = zeros + self.a
        
    def bitAddition(self):
        carry = 0
        ans = ""
        for i in range(len(self.a)-1, -1, -1):
            sum = int(self.a[i]) + int(self.b[i]) + carry
            bits = sum % 2
            carry = sum // 2
            ans = str(bits) + ans
        if carry == 1:
            ans = str(carry) + ans
        return ans
bs = BinaryString("010", "111")
bs.samebit()
print("After Adding Binary String :",bs.bitAddition())