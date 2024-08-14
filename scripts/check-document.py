import requests
import random

doc = str(random.randint(10000000000, 99999999999)) # doc random to check
url = 'http://forex.bexs.com.br/v1/'+doc # req w doc to check
url2 = 'https://bexs.auth0.com/oauth/token'

h = {
    'Content-Type': 'application/json',
    #'Host': 'forex.bexs.com.br',
    #'Connection': 'close',
    #'Accept-Encoding': 'gzip, deflate',
    #'Authorization': 'Bearer ' + 'eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCIsImt'

}
while True:
    r = requests.get(url2, headers=h,data={"client_id":"J7Z2PFSdlaXPcX5VwySR05dTMLL22oIr","client_secret":"XwP6hXF6xVW9BRm1-0KNs2zCS1E58n2EprhulBaCKbrnLn4WxncQdSh1BC1uSq8j","audience":"https://forex.bexs.com.br","grant_type":"client_credentials"})

#print(url)
print(r.text)