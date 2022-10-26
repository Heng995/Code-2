import os
from PyPDF2 import PdfReader
from matplotlib.textpath import text_to_path

reader = PdfReader("./dc/110-2.pdf") #Your PDF file

text = ""
for page in reader.pages:
    text += page.extract_text() + "\n"

text1 = text.find('開放網路選課')

text2 = text1
text1 += 6

while (True):
    if(str('/')) == (text[text2]):
        text2-=1
        break
    else:

        text2-=1;
while (True):
    if(str('/')) == (text[text2]):
        text2-=1
        break
    else:

        text2-=1;
    
print(text[text2:text1])