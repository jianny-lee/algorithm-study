power_rock = [1,2,1,4]
dock = [{
    "name" : "루비독",
    "age" : "95년생",
    "jump" : "3",
    "weight" : "4",
    },{
    "name" : "피치독",
    "age" : "95년생",
    "jump" : "3",
    "weight" : "3",
    },{
    "name" : "씨-독",
    "age" : "72년생",
    "jump" : "2",
    "weight" : "1",
    },{
    "name" : "코블독",
    "age" : "59년생",
    "jump" : "1",
    "weight" : "1",
    },
]

def 징검다리건너라(power_rock, dock):
    answer = [dock[i]['name'] for i in range(len(dock))]
    return answer

print(징검다리건너라(power_rock,dock))

def 징검다리건너라(power_rock, dock):
    answer = [dock[i]['name'] for i in range(len(dock))]
    for i in dock:
        dock_loc = 0
        while dock_loc < len(power_rock)-1:
            dock_loc += int(i['jump'])
            power_rock[dock_loc-1] -= int(i['weight'])
            if power_rock[dock_loc-1] < 0:
                answer[answer.index(i['name'])] = 'fail'
                break
    return [i for i in answer if i !='fail']

print(징검다리건너라(power_rock,dock))