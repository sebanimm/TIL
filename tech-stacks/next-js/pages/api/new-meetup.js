import { MongoClient } from "mongodb";

const handler = async (req, res) => {
  if (req.method === "POST") {
    const data = req.body;
    console.log(data);
    const client = await MongoClient.connect(
      "mongodb+srv://user:1234@cluster0.2coaecx.mongodb.net/?retryWrites=true&w=majority&appName=AtlasApp",
    );
    const db = client.db();

    const meetupsCollection = db.collection("meetups");

    const result = await meetupsCollection.insertOne(data);

    console.log(result);

    client.close;

    res.status(201).json({ message: "Meepup inserted" });
  }
};

export default handler;
