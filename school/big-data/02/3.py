a = {'H': 1, 'O': 16, 'C': 12, 'N': 14, 'Sc': 45, 'Mn': 55, 'He': 4, 'Li': 7, 'Be': 9, 'Ne': 20, 'Na': 23, 'Mg': 24, 'Al': 27,
     'Si': 28, 'F': 19, 'B': 11, 'P': 31, 'S': 32, 'Cl': 35, 'Ar': 40, 'K': 39, 'Ca': 40, 'Ti': 48, 'V': 51, 'Cr': 52, 'Fe': 56}

formula = input("분자식 입력 : ")

count = 0
molecular_weight = 0

for i in range(len(formula)):
    if formula[i].isupper():
        count = 1
        molecule = formula[i]
        if formula[i + 1].islower() and i + 1 < len(formula):
            molecule = f"{formula[i]}{formula[i + 1]}"
            i += 1
        if formula[i + 1].isdigit() and i + 1 < len(formula):
            count = int(formula[i + 1])
            i += 1
        molecular_weight += a[molecule] * count

print(f"{formula}의 분자량 : {molecular_weight}")
