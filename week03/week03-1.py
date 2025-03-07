#week03-1.py
class Solution:
    def coloredCells(self, n: int) -> int:
        return n*n+(n-1)*(n-1)
        #觀察圖片(不看英、不看中)，轉45度看到正方形
