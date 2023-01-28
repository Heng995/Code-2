from selenium.webdriver.common.by import By
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time
driver = webdriver.Chrome('/usr/local/bin/chromedriver')
driver.get("https://www.youtube.com/")

a = driver.find_element(By.NAME, "search_query")
a.send_keys("告五人")
a.send_keys(Keys.RETURN)

b = driver.find_element(By.CLASS_NAME, "style-scope ytd-video-renderer").click()

time.sleep(1000)