import numpy as np
from scipy.spatial import distance
from collections import OrderedDict

f1 = open('/home/imran/testcoverage/res_type.txt')
f2 = open('/home/imran/targetdirectory/res_type1.txt')
outfile = open('result.txt','w')

d1 = OrderedDict()



for row in f1.readlines() :
    x = row.strip().split('=')
    k = x[0].strip()
    v = x[1].strip().split('\t')
    v = np.array([float(n) for n in v])
    d1[k]= v
    

d2= OrderedDict()

for row in f2.readlines():
    x = row.strip().split('=')
    k = x[0].strip()
    v = x[1].strip().split('\t')
    v = np.array([float(n) for n in v])
    d2[k]= v




for k1 in d1:   
    L=[]
    L.append(k1)
    mv=999
    mk = None
    for k2 in d2:
        res=distance.euclidean(d1[k1],d2[k2])
        if res<=mv:
            if res==mv and k1==k2:
                mk=k2
                mv=res
                continue            
            mv = res
            mk=k1
            
    L.append(mk)
    L.append(mv)
    s = ' '.join([str(n) for n in L])
    outfile.write(s+ '\n')



outfile.close()

