from bs4 import BeautifulSoup
import requests

url = 'https://ifoodie.tw/explore/%E5%8F%B0%E5%8C%97%E5%B8%82/list?sortby=popular&opening=true'
response = requests.get(url)
soup = BeautifulSoup(response.content, 'html.parser')

pargraphs = soup.find('div',{'class': 'jsx-1156793088 title-text'})
text = pargraphs.text

print(text)