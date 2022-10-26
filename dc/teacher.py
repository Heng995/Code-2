import requests
from bs4 import BeautifulSoup

response = requests.get('http://csie.must.edu.tw/index.php/2017-04-03-09-00-01')

soup = BeautifulSoup(response.text, "html.parser")

result = soup.find.all("span")
print(result)