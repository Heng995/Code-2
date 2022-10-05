from lib2to3.pgen2 import driver
from selenium import webdriver
import time
driver = webdriver.Chrome('/Users/heng/Desktop/chromedriver')

driver.get("https://chromedriver.chromium.org/downloads")
time.sleep(10)