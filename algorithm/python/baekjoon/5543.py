def create_set(burger, beverage):
    return burger + beverage - 50


sangduk_burger = int(input())
jungduk_burger = int(input())
haduk_burger = int(input())
coke = int(input())
cider = int(input())

set1 = create_set(sangduk_burger, coke)
set2 = create_set(jungduk_burger, coke)
set3 = create_set(haduk_burger, coke)
set4 = create_set(sangduk_burger, cider)
set5 = create_set(jungduk_burger, cider)
set6 = create_set(haduk_burger, cider)

print(min([set1, set2, set3, set4, set5, set6]))
