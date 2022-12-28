import pandas as pd
import streamlit as st
from sklearn.metrics.pairwise import cosine_similarity
from sentence_transformers import SentenceTransformer
import json
from datetime import datetime

now = datetime.now()
st.set_page_config(layout="wide")


def local_css(file_name):
    with open(file_name) as f:
        st.markdown(f'<style> {f.read()} </style>', unsafe_allow_html=True)


local_css("style.css")


@st.cache(allow_output_mutation=True)
def cached_model():
    model = SentenceTransformer("jhgan/ko-sroberta-multitask")
    return model


@st.cache(allow_output_mutation=True)
def get_dataset():
    df = pd.read_csv("book - book - 시트1.csv")
    df["embedding"] = df["embedding"].apply(json.loads)
    return df


model = cached_model()
df = get_dataset()

title = "부산소마고 Q&A 챗봇 😎"

st.markdown(
    """
    <h1 class="title">{}</h1>
    <h3 class="title">무엇이든 물어보세요!</h3>
    """.format(title), unsafe_allow_html=True
)

with st.form("form", clear_on_submit=True):
    user_input = st.text_input(
        "무슨 질문을 하면 좋을까요?", placeholder="멋진 질문을 기다리고 있어요.")
    submitted = st.form_submit_button("질문하기")

st.sidebar.title("BSSM")
st.sidebar.info(
    """
    [Homepage](https://school.busanedu.net/bssm-h/main.do) \n
    [Instagram](https://www.instagram.com/bssm.hs/) \n
    [Facebook](https://www.facebook.com/BusanSoftwareMeisterHighschool/)
    """
)

st.sidebar.title("학생들이 만든 학교 지원 서비스")
st.sidebar.info(
    """
    [BSM](https://bssm.kro.kr/) \n
    [BSMBOO](https://bssm.kro.kr/) 
    """
)

st.sidebar.title("Contact")
st.sidebar.info(
    """
    ☎ : 051-971-2153
    """
)

tab1, tab2, tab3, tab4 = st.tabs(["챗봇과의 대화 내용", "학교소개", "입학안내", "문의"])

with tab2:
    st.markdown(
        """
        <h3>부산소프트웨어마이스터고등학교는 부산광역시 강서구 봉림동에 위치한 공립 고등학교이다.</h3>
        <p>주소 : 부산광역시 강서구 가락대로 1393</p> 
        <p>연락처 : 051-971-2153</p>
        <p>교장 : 윤혜정</p>
    """, unsafe_allow_html=True)

with tab3:
    st.header("공식 홈페이지를 참고해주세요.")
    st.info("[홈페이지](https://school.busanedu.net/bssm-h/main.do)")

with tab4:
    st.header("열리네요~ 그대가 들어오죠~")

with tab1:
    # 응답
    if "generated" not in st.session_state:
        st.session_state["generated"] = []

    # 사용자 질문
    if "past" not in st.session_state:
        st.session_state["past"] = []

    # 예외처리
    if submitted and user_input:
        embedding = model.encode(user_input)

        df["distance"] = df["embedding"].map(
            lambda x: cosine_similarity([embedding], [x]).squeeze())
        answer = df.loc[df["distance"].idxmax()]

        st.session_state.past.append(user_input)
        if answer["distance"] > 0.5:
            st.session_state.generated.append(answer["챗봇"])
        else:
            st.session_state.generated.append(
                "질문을 이해하지 못했어요. 해당 질문은 학교로 문의해 주세요. 학교 전화번호 : 051-971-2153")

    for i in range(len(st.session_state["past"])):
        st.markdown(
            """
            <div class="container2">
                <div class="container user">
                    <p class="p text">{}</p>
                    <p class="p time">{}</p>
                </div>
                <div class="wrapper">
                    <div class="triangle1"></div>
                </div>
                <div class="wrapper col">
                    <div class="name">당신</div>
                    <div class="img">🙂</div>
                </div>
            </div>
            """.format(st.session_state["past"][i], now.strftime("%H:%M")), unsafe_allow_html=True
        )
        if len(st.session_state["generated"]) > i:
            st.markdown(
                """
                <div class="container2">
                    <div class="wrapper col">
                        <div class="name">챗봇</div>
                        <div class="img">🤖</div>
                    </div>
                    <div class="wrapper">
                        <div class="triangle2"></div>
                    </div>
                    <div class="container bot"> 
                        <p class="p text">{}</p>
                    </div>
                </div>
                """.format(st.session_state["generated"][i]), unsafe_allow_html=True
            )
