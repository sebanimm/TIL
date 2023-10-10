import NewMeetupForm from "@/components/meetups/NewMeetupForm";

const NewMeetupPage = () => {
  const addMeetupHandler = (enteredMeetupDate) => {
    console.log(enteredMeetupDate);
  };
  return <NewMeetupForm onAddMeetup={addMeetupHandler} />;
};

export default NewMeetupPage;
