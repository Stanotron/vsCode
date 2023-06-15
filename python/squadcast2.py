import re
import urllib.request
response = urllib.request.urlopen('https://quest.squadcast.tech/public/dom.html')
html = response.read()
text = html.decode()
re.findall('<td class="w2p_fw">(.*?)</td>',text)