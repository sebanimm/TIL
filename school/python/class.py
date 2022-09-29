class human :
  def __init__(self, height, age) :
    self.height = height
    self.age = age

  def how_old(self) :
    print(f"{self.age}살 입니다")
  
  def how_tall(self) :
    print(f"{self.height}cm 입니다")

leeharin = human(160, 80) 
me = human(183, 17)

leeharin.how_old()
human.how_old(leeharin)

me.how_tall()

print(me.height)