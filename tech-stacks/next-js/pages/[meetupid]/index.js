import MeetupDetail from "@/components/meetups/MeetupDetail";

const MeetupDetails = () => {
  return (
    <MeetupDetail
      image="https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp"
      title="First meetup"
      address="부산진구 전포대로 275번길 20"
      description="설명설명설명"
    />
  );
};

export const getStaticPaths = async () => {
  return {
    fallback: false,
    paths: [
      {
        params: {
          meetupId: "m1",
        },
      },
      {
        params: {
          meetupId: "m2",
        },
      },
    ],
  };
};

export const getStaticProps = async (context) => {
  const meetupId = context.params.meetupId;
  console.log(meetupId);
  return {
    props: {
      meetupData: {
        id: meetupId,
        title: "테스트",
        image:
          "https://i.namu.wiki/i/8lZkhpeYBEb9X7W6ftPBZcDUXSOBkH3hD-yYct146HIBtons4ADYWb5dr_VZDToboBX0ZVA0DV87VNdGN84_Og.webp",
        address: "부산진구 전포대로 275번길 20",
        description: "하하",
      },
    },
  };
};

export default MeetupDetails;
