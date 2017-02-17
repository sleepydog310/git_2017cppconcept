# encoding: utf-8

import sys

#qoo=input('')
qoo=5

#由0開始++,記錄進list內
count =0

#decide取餘數後,1為向右,2為向下,3為向左,4為向上
decide=1

#floor紀錄目前在第幾層,temp則是儲存暫時的樓層狀態
floor_right=0
floor_down=0
floor_left=0
floor_up=0
floor_status=0


print '-------------------'

list=[[0 for x in range(qoo)]for y in range(qoo)]

while 1:
    #往右判斷
    if decide%4==1:
        decide+=1
        floor_right+=1
        for i in range(0,qoo):
            print(i),'\t'
            if(list[i][floor_right]==0):
                list[i][floor_right]=count
                count+=1
                
    #往下判斷
    if decide%4==2:
        decide+=1
        floor_status=qoo-floor_down
        floor_down+=1
        for j in xrange(0,qoo,1):

            if(list[floor_status][j]==0):
                list[floor_status][j]=count
                count+=1        

    break

#列印成果
for j in range(0,qoo):
    for i in range(0,qoo):
#        list[i] [j]=count
        print list[i] [j],'\t',
    print ' '