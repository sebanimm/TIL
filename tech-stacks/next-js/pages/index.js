import MeetupList from "@/components/meetups/MeetupList";

const DUMMY = [
  {
    id: "m1",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "m2",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "m3",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "m4",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "m5",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "m6",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "m7",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
];

const HomePage = ({ meetups }) => {
  return <MeetupList meetups={meetups} />;
};

// export const getServerSideProps = async (context) => {
//   const req = context.req;
//   const res = context.res;

//   return {
//     props: {
//       meetups: DUMMY,
//     },
//   };
// };

export const getStaticProps = async () => {
  return {
    props: {
      meetups: DUMMY,
    },
    revalidate: 10,
  };
};

export default HomePage;
