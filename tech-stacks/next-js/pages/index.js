import MeetupList from "@/components/meetups/MeetupList";

const DUMMY = [
  {
    id: "1",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "2",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "3",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "4",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "5",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "6",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
  {
    id: "7",
    title: "테스트",
    image:
      "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
    address: "부산진구 전포대로 275번길 20",
    description: "하하",
  },
];

const HomePage = () => {
  return <MeetupList meetups={DUMMY} />;
};

export default HomePage;
