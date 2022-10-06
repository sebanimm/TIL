class Unit :
  def __init__(self, name, hp, speed) :
    self.name = name
    self.hp = hp
    self.speed = speed

  def move(self, location) :
    print("[지상 유닛 이동]")
    print(f"{self.name} : {location} 방향으로 이동합니다. [속도 {self.speed}]")

class AttackUnit(Unit) :
  def __init__ (self, name, hp, speed, damage) :
    Unit.__init__(self, name, hp, speed)
    self.damage = damage 

  def attack (self, location) :
    print(f"{self.name} : {location} 방향으로 적을 공격합니다. [공격력 {self.damage}]")

  def damaged (self, damage) :
    print(f"{self.name} : {damage} 의 데미지를 입었습니다.")
    self.hp -= damage
    print(f"{self.name} : 현재 체력은 {self.hp} 입니다.")

    if self.hp <= 0 :
      print(f"{self.name} : 파괴되었습니다.")

  def move(self, location) :
    super().move(location)
    print("공격 유닛 입니다")

marine1 = AttackUnit("마린", 40, 5, 25)
marine1.move("5시")
