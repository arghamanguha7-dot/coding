import time
a=0
b=0
while True:
    
    if a==0 or a==1 and b<3 :
        print(a,end=" ")
        a=1
        b+=1
    
    else:
        b-=1
        print(b,end=" ")
        u=b
        b+=a
        a=u
        b+=1
    time.sleep(1)

import time
a=0
b=0
while True:
    
    if a==0 or a==1 and b<3 :
        print(a,end=" ")
        a=1
        b+=1
    
    else:
        b-=1
        print(b,end=" ")
        u=b
        b+=a
        a=u
        b+=1
    time.sleep(1)

