from lib2to3.pgen2 import driver
from selenium import webdriver

chromedriver = '/Users/heng/Desktop/chromdriver'

driver = webdriver.Chrome(chromedriver)

driver.get("https://chromedriver.chromium.org/downloads")