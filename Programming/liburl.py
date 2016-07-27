import urllib.request


url="https://sites.google.com/site/stats202/data/weblog.txt?attredirects=0&d=1"
local_filename, headers = urllib.request.urlretrieve(url)
html = open(local_filename)
print (html)
