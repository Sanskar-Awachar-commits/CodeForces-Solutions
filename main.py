import sys
import requests
import json

def getName(argument):
    contestId = ""
    index = ""
    letterFound = False
    for c in argument:
        if (letterFound):
            index += c
        else:
            if ((ord(c) > 47) & (ord(c) < 58)):
                contestId += c
            else:
                index += c
                letterFound = True
    url = "http://codeforces.com/api/contest.standings"
    query = "?contestId=" + contestId + "&from=1&count=1"
    res = requests.get(url + query)
    resJson = json.loads(res.content.decode("utf-8"))
    problemName = "main"
    indices = []
    for obj in resJson["result"]["problems"]:
        indices.append(obj["index"])
        if (index == obj["index"]):
            problemName = obj["name"]
            foundIndex = True
            break
    
    return contestId + index + ". " + problemName + ".cpp"
    
def createFile(fileName):
    file = open(fileName, "w")
    file.write("#include <iostream>\nusing namespace std;\n\nint main() {\n    ios_base::sync_with_stdio(false);\n    cin.tie(nullptr);\n    \n    return 0;\n}")
    file.close()

def main():
    n = len(sys.argv)
    if n > 1:
        for i in range(n - 1):
            createFile(getName(sys.argv[i + 1]))
    else:
        createFile("main.cpp")

if __name__ == "__main__":
    main()