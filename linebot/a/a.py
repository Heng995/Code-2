from bs4 import BeautifulSoup
from abc import ABC, abstractclassmethod
import requests

class food(ABC):
    def __init__(self, area):
        self.area = area
        
        @abstractclassmethod
        def scrape(self):
            pass

class ifood(food):
    
    def scrape(self):
        response = requests.get(
            "https://ifoodie.tw/explore/"+ self.area +
            "list?opening=true&sortby=popular")
        
        soup = BeautifulSoup(response.content, "html.parser")
        
        cards = soup.find_all(
            'div',{'class': 'jsx-1156793088 restaurant-info'}, limit = 5)
        
        content = ""
        for card in cards:
            
            title = card.find(
                "a", {"class": "jsx-1156793088 title-text"}).getText()