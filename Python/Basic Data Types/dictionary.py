if __name__ == '__main__':
    n = int(input())
    marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        marks[name] = scores
    query = input()
    query_marks = marks[query]
    
    sum = 0
    for i in query_marks:
        sum += i
    avg = sum/len(query_marks)
    print("%.2f" % avg)
