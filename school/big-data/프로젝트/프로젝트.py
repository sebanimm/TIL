# STEP 1. 나눔 폰트 설치
# !sudo apt-get install -y fonts-nanum
# !sudo fc-cache -fv
# !rm ~/.cache/matplotlib -rf

# 시각화 모듈
import re
from bs4 import BeautifulSoup
import urllib.request
import matplotlib.pyplot as plt
# STEP 3. matpliotlib의 폰트를 나눔 폰트로 지정
plt.rc("font", family="NanumBarunGothic")


url = 'https://fow.kr/stats'
html = urllib.request.urlopen(url).read()
soup = BeautifulSoup(html, 'html.parser')

character_positions = soup.findAll("td", attrs={"class": "td_pos"})
character_names = soup.findAll("a", attrs={"class": "champ_link"})
character_rates = soup.findAll("td", attrs={"class": "td_rate"})

for i in range(304):
    name = character_names[i].text
    parsed_name = re.sub(r"\n+\s+", "", name)
    position = character_positions[i].text
    parsed_position = re.sub(r"\n+\s+", "", position)
    text = f"{parsed_position} {parsed_name}의 통계 자료"
    parsed_text = re.sub("\n", "", text)
    print(parsed_text)

    k = 0
    for j in range(i * 6, (i + 1) * 6):
        for rate in character_rates[j]:
            rate = rate.text.replace("?", "")

            if k == 0:
                print(f"승률 : {rate}")
            elif k == 1:
                print(f"픽률 : {rate}")
            elif k == 2:
                print(f"밴률 : {rate}")
            elif k == 3:
                print(f"표본 : {rate}")

            k += 1

    print()


url = 'https://fow.kr/stats'
html = urllib.request.urlopen(url).read()
soup = BeautifulSoup(html, 'html.parser')

character_positions = soup.findAll("td", attrs={"class": "td_pos"})
character_names = soup.findAll("a", attrs={"class": "champ_link"})
character_rates = soup.findAll("td", attrs={"class": "td_rate"})

win_rates = []
pick_rates = []
ban_rates = []
character_labels = []

for i in range(20):
    name = character_names[i].text
    parsed_name = re.sub(r"\n+\s+", "", name)
    position = character_positions[i].text
    parsed_position = re.sub(r"\n+\s+", "", position)
    character_label = f"{parsed_position} {parsed_name}"
    win_rate = float(character_rates[i * 6].text.replace("%", ""))
    pick_rate = float(character_rates[i * 6 + 1].text.replace("%", ""))
    ban_rate = float(character_rates[i * 6 + 2].text.replace("%", ""))

    win_rates.append(win_rate)
    pick_rates.append(pick_rate)
    ban_rates.append(ban_rate)
    character_labels.append(character_label)

# 막대그래프
x = range(1, 21)
plt.figure(figsize=(10, 5))
plt.barh(x, win_rates, label='승률')
plt.barh(x, pick_rates, label='픽률', alpha=0.9)
plt.barh(x, ban_rates, label='밴률', alpha=0.6)
plt.xlabel('캐릭터 번호')
plt.ylabel('비율')
plt.title('캐릭터 승률, 픽률, 밴률')
plt.legend()
plt.yticks(x, character_labels, rotation=45)
plt.show()

# 선그래프
plt.figure(figsize=(10, 5))
plt.plot(x, win_rates, label='승률')
plt.plot(x, pick_rates, label='픽률')
plt.plot(x, ban_rates, label='밴률')
plt.xlabel('캐릭터 번호')
plt.ylabel('비율 (%)')
plt.title('캐릭터 승률, 픽률, 밴률')
plt.legend()
plt.xticks(x, character_labels, rotation=45)
plt.show()

# 산점
plt.figure(figsize=(10, 5))
plt.scatter(x, win_rates, label='승률')
plt.scatter(x, pick_rates, label='픽률', alpha=0.9)
plt.scatter(x, ban_rates, label='밴률', alpha=0.6)
plt.xlabel('캐릭터 번호')
plt.ylabel('비율')
plt.title('캐릭터 승률, 픽률, 밴률')
plt.legend()
plt.xticks(x, character_labels, rotation=45)
plt.show()
