awk '{!seen[$0]++};END{for(i in seen) if(seen[i]==1)print i}' mad.txt
sort | uniq
