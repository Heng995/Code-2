import requests
from bs4 import BeautifulSoup

url = 'https://ifoodie.tw/explore/%E5%8F%B0%E5%8C%97%E5%B8%82/list?sortby=popular&opening=true'
response = requests.get(url)
soup = BeautifulSoup(response.text, 'html.parser')


tag = soup.find('a', {'class': 'jsx-1156793088 click-tracker'}, limit = 5)
 
print(tag)

