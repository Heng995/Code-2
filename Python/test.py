import time
import datetime
from selenium import webdriver
from selenium.webdriver.common.by import By

PATH = '/usr/local/bin/chromedriver'

driver = webdriver.Chrome(PATH)
driver.get("https://popcat.click/")
s = datetime.datetime.now()

time.sleep(1)

while(True):
    driver.find_element(By.ID, "app").click()

    end = time.process_time()
       




print(e-s)