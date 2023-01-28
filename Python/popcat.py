import time
from selenium import webdriver
from selenium.webdriver.common.by import By

PATH = '/usr/local/bin/chromedriver'

driver = webdriver.Chrome(PATH)
driver.get("https://popcat.click/")

time.sleep(3)
a= 0
while True:
    driver.find_element(By.ID, "app").click()

        


time.sleep(1000)
