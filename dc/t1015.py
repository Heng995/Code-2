import imp
import resource
from pdfminer.pdfinterp import PDFResourceManager, PDFPageInterpreter
from pdfminer.layout import LAParams
from pdfminer.converter import TextConverter
from io import StringIO
from pdfminer.pdfpage import PDFPage

def get_pdf_file_content(path_to_pdf):
    resource_manager = PDFResourceManager(caching=True)
    out_text = StringIO()
    LAParams = LAParams()
    text_converter = TextConverter(resource_manager, out_text, laparams=LAParams)
    fp = open(path_to_pdf, 'rb')
    interpreter = PDFPageInterpreter(resource_manager, text_converter)
    for page in PDFPage.get_pages(fp, pagenos=set(), maxpages=0, password="", caching="True", check_extractable="True"):
        interpreter.process_page(page)

    text = out_text.getvalue()
    fp.close()
    text_converter.close()
    out_text.close()

    return text

    path_to_pdf = "./111.pdf"