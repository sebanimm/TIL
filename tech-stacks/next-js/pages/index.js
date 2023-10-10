import { MongoClient } from "mongodb";
import MeetupList from "@/components/meetups/MeetupList";
import Head from "next/head";
import { Fragment } from "react";

const HomePage = ({ meetups }) => {
  return (
    <Fragment>
      <Head>
        <title>React Meetups</title>
        <meta name="description" content="Browse this React meetups" />
      </Head>
      <MeetupList meetups={meetups} />
    </Fragment>
  );
};

export const getStaticProps = async () => {
  const client = await MongoClient.connect(
    "mongodb+srv://user:1234@cluster0.2coaecx.mongodb.net/?retryWrites=true&w=majority&appName=AtlasApp",
  );
  const db = client.db();

  const meetupsCollection = db.collection("meetups");

  const meetups = await meetupsCollection.find().toArray();

  client.close();

  return {
    props: {
      meetups: meetups.map((meetup) => ({
        title: meetup.title,
        address: meetup.address,
        image: meetup.image,
        id: meetup._id.toString(),
      })),
    },
    revalidate: 1,
  };
};

export default HomePage;
