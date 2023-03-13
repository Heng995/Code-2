#程式目的:老鼠走迷宮
class Node:
    def __init__(self,x,y):
        self.x=x
        self.y=y
        self.next=None
    
class TraceRecord:
    def __init__(self):
        self.first=None
        self.last=None
        
    def isEmpty(self):
        return self.first ==None
    
    def insert(self,x,y):
        newNode=Node(x,y)
        if self.first==None:
            self.first=newNode
            self.last=newNode
        else:
            self.last.next=newNode
            self.last=newNode
            
    def delete(self):
        if self.first==None:
            print('[序列已空了]')
            return
        newNode=self.first
        while newNode.next!=self.last:
            newNode=newNode.next
        newNode.next=self.last.next
        self.last=newNode
ExitX=8
ExitY=10
#迷宮陣列ˋ    
Maze= [[1,1,1,1,1,1,1,1,1,1,1,1],
       [1,0,0,0,1,1,1,1,1,1,1,1],
       [1,1,1,0,1,1,0,0,0,0,1,1],
       [1,1,1,0,1,1,0,1,1,0,1,1],
       [1,1,1,0,0,0,0,1,1,0,1,1],
       [1,1,1,0,1,1,0,1,1,0,1,1],
       [1,1,1,0,1,1,0,1,1,0,1,1],
       [1,1,1,1,1,1,0,1,1,0,1,1],
       [1,1,0,0,0,0,0,0,1,0,0,1],
       [1,1,1,1,1,1,1,1,1,1,1,1]]
        
def chkExit(x,y,ex,ey):
    if x==ex and y==ey:
        if(Maze[x-1][y]==1 or Maze[x+1][y]==1 or Maze[x][y-1]==1 or Maze[x][y+1]==2):
            return 1
        if(Maze[x-1][y]==1 or Maze[x+1][y]==1 or Maze[x][y-1]==2 or Maze[x][y+1]==1):
            return 1
        if(Maze[x-1][y]==1 or Maze[x+1][y]==2 or Maze[x][y-1]==1 or Maze[x][y+1]==1):
            return 1
        if(Maze[x-1][y]==2 or Maze[x+1][y]==1 or Maze[x][y-1]==1 or Maze[x][y+1]==1):
            return 1
    return 0
path=TraceRecord()
x=1
y=1

print("[迷宮的路徑(0的部分)]")
for i in range(10):
    for j in range(12):
        print(Maze[i][j],end='')
print()
while x<=ExitX and y<=ExitY:
    Maze[x][y]==0
    if Maze[x-1][y]==0:
        x-=1
        path.insert(x,y)
    elif Maze[x+1][y]==0:
        x+=1
        path.insert(x,y)
    elif Maze[x][y-1]==0:
        y-=1
        path.insert(x,y)
    elif Maze[x][y+1]==0:
        y+=1
        path.insert(x,y)
    elif chkExit(x,y,ExitX,ExitY)==1:
        break
    else:
        Maze[x][y]=2
        path.delete()
        x=path.last.x
        y=path.last.y
print


        