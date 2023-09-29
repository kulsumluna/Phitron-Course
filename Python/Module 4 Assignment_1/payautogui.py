import pyautogui
from time import sleep
n = int(input())

sleep(2)

for i in range(1,n+1):
    hash_string = "#" * i
    pyautogui.typewrite(hash_string)
    pyautogui.press('enter')
    print(hash_string)