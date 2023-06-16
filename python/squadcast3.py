import re
s = "v=sp ip4:40.113.200.201 ip6:2001:db8:85a3:8d3:1319:8a2e:370:7348 include:thirdpartydomain.com ~all"
ip = re.findall( r'[0-9]+(?:\.[0-9]+){3}', s )
print(ip)               